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

  rules: {
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
    // to put a grace note B after a regular note A. The second example uses the
    // music function \grace with one argument to put a grace note A before a
    // regular note B. In a Tree-sitter grammar, there is no way to express that
    // “b” is a function argument in the first example but not the second. Even
    // if you had grammar rules for every built-in music function, you can
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
      '!',   // reminder accidental, figured-bass natural
      '.',   // property access, staccato
      '*',   // multiplication
      '-',   // place neutrally, figured-bass flat
      '^',   // place above
      '_',   // place below
      '>',   // accent
      '+',   // figured-bass sharp
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
      '&',
      ';'
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
        repeat($._scheme_comment),
        $._scheme_compound_datum
      )
    ),

    scheme_embedded_lilypond: $ => seq(
      '#{',
      repeat($._expression_component),
      '#}'
    ),

    _scheme_token: $ => choice(
      $._scheme_comment,
      $._scheme_datum
    ),

    _scheme_comment: $ => choice(
      token(seq(choice(';', '#;'), /.*/)),
      $._scheme_block_comment
    ),

    _scheme_block_comment: $ => seq(
      '#|',
      repeat(choice(
        $._scheme_block_comment,
        /\|[^#]/,
        /[^|]/
      )),
      '|#'
    ),

    _scheme_datum: $ => choice(
      $._scheme_simple_datum,
      $._scheme_compound_datum
    ),

    _scheme_simple_datum: $ => choice(
      $._scheme_boolean,
      $._scheme_character,
      $._scheme_number,
      $._scheme_keyword,
      $._scheme_string,
      $._scheme_symbol,
      $._scheme_embedded_lilypond
    ),

    _scheme_boolean: $ => /#(?:[tT](?:[rR][uU][eE])?|[fF](?:[aA][lL][sS][eE])?)/,

    // https://www.gnu.org/software/guile/manual/html_node/Characters.html
    _scheme_character: $ => token(seq(
      /#\\/,
      choice(
        // Character names
        seq(
          /[aA]/,
          choice(
            /[cC][kK]/,
            /[lL][aA][rR][mM]/
          )
        ),
        seq(
          /[bB]/,
          choice(
            /[aA][cC][kK][sS][pP][aA][cC][eE]/,
            /[eE][lL]/,
            /[sS]/
          )
        ),
        seq(
          /[cC]/,
          choice(
            /[aA][nN]/,
            /[rR]/
          )
        ),
        seq(
          /[dD]/,
          choice(
            /[cC][1-4]/,
            seq(/[eE][lL]/, optional(/[eE][tT][eE]/)),
            /[lL][eE]/
          )
        ),
        seq(
          /[eE]/,
          choice(
            /[mM]/,
            /[nN][qQ]/,
            /[oO][tT]/,
            seq(/[sS][cC]/, optional(/[aA][pP][eE]/)),
            /[tT][bBxX]/
          )
        ),
        /[fF][fFsS]/,
        /[gG][sS]/,
        /[hH][tT]/,
        seq(
          /[lL]/,
          choice(
            /[fF]/,
            /[iI][nN][eE][fF][eE][eE][dD]/
          )
        ),
        seq(
          /[nN]/,
          choice(
            /[aA][kK]/,
            /[eE][wW][lL][iI][nN][eE]/,
            /[lL]/,
            /[pP]/,
            /[uU][lL][lL]?/
          )
        ),
        /[pP][aA][gG][eE]/,
        seq(
          /[rR]/,
          choice(
            /[eE][tT][uU][rR][nN]/,
            /[sS]/
          )
        ),
        seq(
          /[sS]/,
          choice(
            /[iI]/,
            /[oO][hH]?/,
            seq(/[pP]/, optional(/[aA][cC][eE]/)),
            /[sS]/,
            /[tT][xX]/,
            /[uU][bB]/,
            /[yY][nN]/
          )
        ),
        /[tT][aA][bB]/,
        /[uU][sS]/,
        seq(/[vV][tT]/, optional(/[aA][bB]/)),

        // Hexadecimal character codes
        /[xX][0-9a-fA-F]+/,

        // Octal character codes
        /[0-7]+/,

        // Single characters
        /[^\r\n\t\f\v\p{Zs}\p{Zl}\p{Zp}]/,
      )
    )),

    _scheme_number: $ => prec(1, token(choice(
      numberRuleWithBase(2),
      numberRuleWithBase(8),
      numberRuleWithBase(10),
      numberRuleWithBase(16)
    ))),

    // https://www.gnu.org/software/guile/manual/html_node/scheme_keywords.html
    _scheme_keyword: $ => seq(
      '#:',
      $._scheme_keyword_name
    ),

    _scheme_keyword_name: $ => token.immediate(schemeSymbol()),

    _scheme_string: $ => seq(
      '"',
      repeat(choice(
        $._scheme_string_fragment,
        $._scheme_escape_sequence,
      )),
      '"'
    ),

    _scheme_string_fragment: $ => token.immediate(prec(1, /[^"\\]+/)),

    _scheme_escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^x]/,
        /x[0-9a-fA-F]+;/
      )
    )),

    _scheme_symbol: $ => schemeSymbol(),

    _scheme_compound_datum: $ => choice(
      $._scheme_list,
      $._scheme_quote,
      $._scheme_quasiquote,
      $._scheme_unquote,
      $._scheme_unquote_splicing,
      $._scheme_vector,
      $._scheme_byte_vector
    ),

    _scheme_list: $ => seq('(', repeat($._scheme_token), ')'),

    _scheme_quote: $ => seq("'", repeat($._scheme_comment), $._scheme_datum),

    _scheme_quasiquote: $ => seq('`', repeat($.s_cheme_comment), $._scheme_datum),

    _scheme_unquote: $ => seq(',', repeat($._scheme_comment), $._scheme_datum),

    _scheme_unquote_splicing: $ => seq(',@', repeat($._scheme_comment), $._scheme_datum),

    _scheme_vector: $ => seq('#(', repeat($._scheme_token), ')'),

    _scheme_byte_vector: $ => seq('#vu8(', repeat($._scheme_token), ')')
  }
});

function symbol() {
  // The LilyPond lexer effectively uses [a-zA-Z\x80-\xFF]+ for alphabetic
  // characters (see
  // https://gitlab.com/lilypond/lilypond/-/blob/v2.24.3/lily/lexer.ll#L169).
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

function schemeSymbol() {
  return /[^ \r\n\t\f\v\p{Zs}\p{Zl}\p{Zp}#;"'`,(){}\[\]\\]+/;
}

function numberRuleWithBase(base) {
  // Based on
  // https://github.com/pygments/pygments/blob/04a75bd5a75bfe27f0b582dd83c85e62f9475581/pygments/lexers/lisp.py#L74
  // and
  // https://github.com/6cdh/tree-sitter-scheme/blob/dd9a73d851238881a3a9426298d69742d24b7842/grammar.js#L289

  let digit;
  let radix;
  switch (base) {
    case 2:
      digit = /[01]/;
      radix = /#[bB]/;
      break;
    case 8:
      digit = /[0-7]/;
      radix = /#[oO]/;
      break;
    case 16:
      digit = /[0-9a-fA-F]/;
      radix = /#[xX]/;
      break;
    default:
      base = 10;
      digit = /[0-9]/;
      radix = /(?:#[dD])?/;
  }

  const exactness = /(?:#[iIeE])?/;
  const prefix = choice(
    seq(radix, exactness),
    seq(exactness, radix)
  );

  let ureal = seq(repeat1(digit), repeat("#"));
  ureal = seq(ureal, optional(seq("/", ureal)));

  const sign = /[+-]/;

  if (base === 10) {
    const exponent = optional(seq(/[eEsSfFdDlL]/, optional(sign), repeat1(digit)))
    const decimal = choice(
      seq(ureal, exponent),
      seq(".", repeat1(digit), repeat("#"), exponent),
      seq(repeat1(digit), ".", repeat(digit), repeat("#"), exponent),
      seq(repeat1(digit), repeat1("#"), ".", repeat("#"), exponent)
    );
    ureal = choice(ureal, decimal);
  }

  const naninf = /(?:[nN][aA][nN]|[iI][nN][fF])\.0/;
  const real = choice(seq(sign, naninf), seq(optional(sign), ureal));
  const complex = choice(
    seq(optional(real), sign, optional(choice(naninf, ureal)), /[iI]/),
    seq(real, optional(seq("@", real)))
  );

  return seq(prefix, complex);
}
