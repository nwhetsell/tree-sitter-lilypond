const schemeRules = require('./tree-sitter-lilypond-scheme/rules.js');

module.exports = grammar({
  name: 'lilypond',

  extras: $ => [
    $.comment,
    /[ \n\t\f\r]/
  ],

  conflicts: $ => [
    [$._expression_component, $.assignment_lhs, $._octave_check],
    [$.named_context],
    [$.chord, $.punctuation]
  ],

  rules: Object.assign({
    lilypond_program: $ => repeat($._expression_component),

    // https://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(choice(
      seq('%', optional(seq(/[^{\n\r]/, /.*/))),
      seq(
        '%{',
        /[^%]*%+([^%}][^%]*%+)*/,
        '}'
      )
    )),

    // The LilyPond language includes music functions:
    //   https://lilypond.org/doc/Documentation/notation/available-music-functions
    // Music function syntax is ambiguous and likely impossible to represent in
    // a Tree-sitter grammar. Consider these two examples of music functions:
    //   \afterGrace a b
    //   \grace a b
    // The first example uses the music function \afterGrace with two arguments
    // to put a regular note A before a grace note B. The second example uses
    // the music function \grace with one argument to put a grace note A before
    // a regular note B. In a Tree-sitter grammar, there is no way to express
    // that “b” is a function argument in the first example but not the second.
    // Even if you had grammar rules for every built-in music function, you can
    // create additional music functions:
    //   https://lilypond.org/doc/Documentation/extending/music-function-definitions
    // It may be possible to work around this with an external scanner
    // (https://tree-sitter.github.io/tree-sitter/creating-parsers#external-scanners),
    // but such a scanner would probably be more complicated than Tree-sitter
    // itself (it would need to include a complete Scheme evaluator, for
    // example). Instead, parse everything that looks like a music function name
    // or argument as an “expression component”.
    _expression_component: $ => choice(
      $._assignment,
      $._context,
      $.named_context,
      $.expression_block,
      $.parallel_music,
      $.chord,
      $.escaped_word,
      $.quoted_identifier,
      $.symbol,
      $.property_expression,
      $.fraction,
      $.decimal_number,
      $.unsigned_integer,
      $.punctuation,
      $.dynamic,
      $.ligature,
      $.instrument_string_number,
      $.string,
      $._octave_check,
      $.embedded_scheme,

      // This is a hack to parse things like “jah.” and “D.C.” (note the
      // trailing periods), which are common in lyrics and markup but aren’t
      // property expressions.
      seq(choice($.symbol, $.property_expression), alias('.', $.punctuation))
    ),

    _assignment: $ => prec(1, seq(
      $.assignment_lhs,
      alias('=', $.punctuation)
    )),

    assignment_lhs: $ => prec(1, choice(
      $.symbol,
      $.property_expression
    )),

    _context: $ => alias('\\context', $.escaped_word),

    // https://lilypond.org/doc/Documentation/notation/creating-and-referencing-contexts
    named_context: $ => prec(1, seq(
      choice(alias('\\new', $.escaped_word), $._context),
      choice($.symbol, $.embedded_scheme),
      optional(seq(
        alias('=', $.punctuation),
        choice($.symbol, $.string)
      ))
    )),

    expression_block: $ => seq(
      '{',
      repeat($._expression_component),
      '}'
    ),

    parallel_music: $ => seq(
      '<<',
      repeat(choice($._expression_component, alias('\\\\', $.parallel_music_separator))),
      '>>'
    ),

    chord: $ => seq(
      '<',
      repeat(choice(
        seq(alias('-', $.punctuation), alias('>', $.punctuation)),
        '>>',
        alias(choice('\\+', '\\\\', prec(1, '\\!')), $.figured_bass_modifier),
        $._expression_component
      )),
      '>'
    ),

    // An additional single character is needed to parse, for example:
    //   \-  duration lines (https://lilypond.org/doc/Documentation/notation/graphical-notation)
    //   \^  string bends (https://lilypond.org/doc/Documentation/notation/common-notation-for-fretted-strings#index-string-bending_002c-in-tablature-notation)
    //   \=  phrasing slur labels (https://lilypond.org/doc/Documentation/notation/expressive-marks-as-curves)
    escaped_word: $ => prec(1, token(seq('\\', choice(symbol(), /[^\x00-\x1F\s\p{Zs}0-9"\\()\[\]\uFEFF\u2060\u200B]/)))),

    quoted_identifier : $ => seq(
      alias('\\', $.escaped_word),
      token.immediate('"'),
      alias(token.immediate(/[^"]+/), $.escaped_word),
      token.immediate('"')
    ),

    symbol: $ => token(symbol()),

    property_expression: $ => prec(1, seq(
      choice($.symbol, $.property_expression),
      alias('.', $.punctuation),
      $.symbol
    )),

    fraction: $ => token(seq(
      unsignedInteger(),
      '/',
      unsignedInteger()
    )),

    decimal_number: $ => token(seq(
      unsignedInteger(),
      '.',
      unsignedInteger()
    )),

    unsigned_integer: $ => unsignedInteger(),

    punctuation: $ => choice(
      "'",   // raise octave
      ',',   // lower octave
      '?',   // cautionary accidental
      '!',   // reminder accidental, staccatissimo, figured-bass natural
      '.',   // property access, staccato
      '*',   // multiplication
      '-',   // place neutrally, tenuto, figured-bass flat
      '^',   // place above, marcato
      '_',   // place below, portato
      '>',   // accent
      '+',   // stopped, figured-bass sharp
      '~',   // tie
      '(',   // start slur
      ')',   // stop slur
      '\\(', // start phrasing slur
      '\\)', // stop phrasing slur
      '[',   // start manual beam
      ']',   // stop manual beam
      ':',   // tremolo, chord prefix
      '/',   // fraction delimiter
      '=',   // assignment
      '|',   // bar check

      // Prevent other punctuation from producing parsing errors.
      '&', ';', '@'
    ),

    dynamic: $ => choice(
      '\\<',
      '\\>',
      '\\!'
    ),

    // https://lilypond.org/doc/Documentation/notation/ancient-notation_002d_002dcommon-features#ligatures
    ligature: $ => choice(
      '\\[',
      '\\]'
    ),

    instrument_string_number: $ => token(seq('\\', unsignedInteger())),

    string: $ => seq(
      '"',
      repeat(choice($.string_fragment, $.escape_sequence)),
      '"'
    ),

    string_fragment: $ => token.immediate(prec(1, /[^"\\]+/)),

    escape_sequence: $ => token.immediate(seq('\\', /.|[\n\r]/)),

    _octave_check: $ => prec(1, seq(
      $.symbol,
      alias('=', $.punctuation),
      choice(repeat1(alias("'", $.punctuation)), repeat1(alias(',', $.punctuation)))
    )),

    embedded_scheme: $ => seq(
      alias(/[#$]@?/, $.embedded_scheme_prefix),
      $.embedded_scheme_text,
    ),

    // When this rule is combined with an injected Scheme grammar, Scheme code
    // is parsed twice: first by this rule, and then by the injected grammar.
    // Some grammars (HTML, for example: https://github.com/tree-sitter/tree-sitter-html)
    // avoid parsing twice by using an external scanner to parse the embedded
    // language as raw text up to some delimiter (like </script>). However,
    // there is no such delimiter in LilyPond; embedded Scheme code ends at the
    // end of the embedded datum, like a number’s last digit or a list’s closing
    // parenthesis. An external scanner that handled the complexity of Scheme
    // (strings, nested comments, character literals like “#\(”) would probably
    // be as complicated as a complete Scheme parser, so simply parsing Scheme
    // twice using Tree-sitter seems like a reasonable solution.
    embedded_scheme_text: $ => choice(
      $._scheme_simple_datum,
      seq(
        repeat($.scheme_comment),
        $._scheme_compound_datum
      )
    ),

    scheme_embedded_lilypond: $ => seq(
      '#{',
      repeat($._expression_component),
      '#}'
    )
  }, schemeRules)
});

function symbol() {
  // The LilyPond lexer effectively uses [a-zA-Z\x80-\xFF]+ for alphabetic
  // characters (see
  // https://gitlab.com/lilypond/lilypond/-/blob/v2.24.4/lily/lexer.ll#L169).
  // This seems intended to match UTF-8 input, but is a bit over-inclusive (see
  // https://en.wikipedia.org/wiki/UTF-8#Codepage_layout). Instead, for
  // alphabetic characters match anything that’s not an ASCII control character,
  // a space, a digit, various punctuation marks, a ZERO WIDTH NO-BREAK
  // SPACE (U+FEFF), a WORD JOINER (U+2060), or a ZERO WIDTH SPACE (U+200B).
  // This is based on Tree-sitter’s JavaScript grammar:
  //   https://github.com/tree-sitter/tree-sitter-javascript/blob/fdeb68ac8d2bd5a78b943528bb68ceda3aade2eb/grammar.js#L1005)
  const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#$.,|^&<=>+_\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]+/;
  return seq(alpha, repeat(seq(/[_-]/, alpha)));
}

function unsignedInteger() {
  return /\d+/;
}
