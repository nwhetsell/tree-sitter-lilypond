const schemeRules = require('./tree-sitter-lilypond-scheme/rules.js');

module.exports = grammar({
  name: 'lilypond',

  extras: $ => [
    $.comment,
    /[ \n\t\f\r]/
  ],

  conflicts: $ => [
    [$.chord, $.punctuation],
    [$._expression_component, $.assignment_lhs, $._octave_check]
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
    //   \grace a b
    //   \afterGrace a b
    // The first example uses the music function \grace with *one* argument to
    // put a grace note A before a regular note B. The second example uses the
    // music function \afterGrace with *two* arguments to put a grace note B
    // after a regular note A. In a Tree-sitter grammar, there is no way to
    // express that “b” is a function argument in the second example but not the
    // first. Even if you had grammar rules for every built-in music function,
    // you can create additional music functions:
    //   https://lilypond.org/doc/Documentation/extending/music-function-definitions
    // It may be possible to work around this with an external scanner
    // (https://tree-sitter.github.io/tree-sitter/creating-parsers#external-scanners),
    // but such a scanner would probably be more complicated than Tree-sitter
    // itself (it would need to include a complete Scheme evaluator, for
    // example). Instead, parse everything that looks like a music function name
    // or argument as an “expression component”.
    _expression_component: $ => choice(
      $._assignment,
      $.named_context,
      $.expression_block,
      $.parallel_music,
      $.chord,
      $.escaped_word,
      $.symbol,
      $.property_expression,
      $.fraction,
      $.unsigned_integer,
      $.punctuation,
      $.dynamic,
      $.ligature,
      $.instrument_string_number,
      $.string,
      $._octave_check,
      $.embedded_scheme
    ),

    _assignment: $ => prec(1, seq(
      $.assignment_lhs,
      alias('=', $.punctuation)
    )),

    assignment_lhs: $ => prec(1, choice(
      $.symbol,
      $.property_expression
    )),

    // https://lilypond.org/doc/Documentation/notation/creating-and-referencing-contexts
    named_context: $ => seq(
      alias(choice('\\new', '\\context'), $.escaped_word),
      $.symbol,
      alias('=', $.punctuation),
      choice($.symbol, $.string)
    ),

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
        $._expression_component
      )),
      '>'
    ),

    escaped_word: $ => token(seq('\\', choice(symbol(), /[=^]/))),

    symbol: $ => token(symbol()),

    property_expression: $ => prec(1, seq(
      choice($.symbol, $.property_expression),
      '.',
      $.symbol
    )),

    fraction: $ => token(seq(
      unsignedInteger(),
      '/',
      unsignedInteger()
    )),

    unsigned_integer: $ => unsignedInteger(),

    punctuation: $ => choice(
      "'",
      ',',
      '?',
      '!',
      '.',
      '*',
      '-',
      '^',
      '_',
      '>',
      '+',
      '~',
      '(',
      ')',
      '\\(',
      '\\)',
      '[',
      ']',
      ':',
      '/',
      '=',
      '|'
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

    escape_sequence: $ => token.immediate(seq('\\', /./)),

    _octave_check: $ => prec(1, seq(
      $.symbol,
      alias('=', $.punctuation),
      choice(repeat1(alias("'", $.punctuation)), repeat1(alias(',', $.punctuation)))
    )),

    embedded_scheme: $ => seq(
      "#",
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
  const alpha = /[a-zA-Z\x80-\xFF]+/
  return seq(alpha, repeat(seq(/[_-]/, alpha)));
}

function unsignedInteger() {
  return /\d+/;
}
