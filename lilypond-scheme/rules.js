// Based on https://github.com/6cdh/tree-sitter-scheme (MIT-licensed):
// https://github.com/6cdh/tree-sitter-scheme/blob/c12c717c0ccdc72a42180dc3d26bbd88f526aeb8/grammar.js

module.exports = {
  _scheme_token: $ => choice(
    $.scheme_comment,
    $._scheme_datum
  ),

  scheme_comment: $ => choice(
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
    $.scheme_boolean,
    $.scheme_character,
    $.scheme_number,
    $.scheme_keyword,
    $.scheme_string,
    $.scheme_symbol,
    $.scheme_embedded_lilypond
  ),

  scheme_boolean: $ => /#(?:[tT](?:[rR][uU][eE])?|[fF](?:[aA][lL][sS][eE])?)/,

  // https://www.gnu.org/software/guile/manual/html_node/Characters.html
  scheme_character: $ => token(seq(
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

  scheme_number: $ => token(prec(1, choice(
    numberRuleWithBase(2),
    numberRuleWithBase(8),
    numberRuleWithBase(10),
    numberRuleWithBase(16)
  ))),

  // https://www.gnu.org/software/guile/manual/html_node/scheme_keywords.html
  scheme_keyword: $ => seq(
    '#:',
    $.scheme_keyword_name
  ),

  scheme_keyword_name: $ => token.immediate(symbol()),

  scheme_string: $ => seq(
    '"',
    repeat(choice(
      $.scheme_string_fragment,
      $.scheme_escape_sequence,
    )),
    '"'
  ),

  scheme_string_fragment: $ => token.immediate(prec(1, /[^"\\]+/)),

  scheme_escape_sequence: $ => token.immediate(seq(
    '\\',
    choice(
      /[^x]/,
      /x[0-9a-fA-F]+;/
    )
  )),

  scheme_symbol: $ => token(prec(1, symbol())),

  _scheme_compound_datum: $ => choice(
    $.scheme_list,
    $.scheme_quote,
    $.scheme_quasiquote,
    $.scheme_unquote,
    $.scheme_unquote_splicing,
    $.scheme_vector,
    $.scheme_byte_vector
  ),

  scheme_list: $ => seq('(', repeat($._scheme_token), ')'),

  scheme_quote: $ => seq("'", repeat($.scheme_comment), $._scheme_datum),

  scheme_quasiquote: $ => seq('`', repeat($.scheme_comment), $._scheme_datum),

  scheme_unquote: $ => seq(',', repeat($.scheme_comment), $._scheme_datum),

  scheme_unquote_splicing: $ => seq(',@', repeat($.scheme_comment), $._scheme_datum),

  scheme_vector: $ => seq('#(', repeat($._scheme_token), ')'),

  scheme_byte_vector: $ => seq('#vu8(', repeat($._scheme_token), ')')
};

function symbol() {
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
