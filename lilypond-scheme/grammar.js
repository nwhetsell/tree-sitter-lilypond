const rules = require('./rules.js');

module.exports = grammar({
  name: 'lilypond_scheme',

  conflicts: $ => [
    [$.scheme_embedded_lilypond_text_fragment]
  ],

  rules: Object.assign(
    {
      scheme_program: $ => repeat(
        $._scheme_token
      )
    },

    rules,

    {
      scheme_embedded_lilypond: $ => seq(
        '#{',
        optional($.scheme_embedded_lilypond_text),
        '#}'
      ),

      scheme_embedded_lilypond_text: $ => repeat1(choice(
        $.lilypond_comment,
        $.lilypond_string,
        $.scheme_embedded_lilypond,
        $.scheme_embedded_lilypond_text_fragment
      )),

      scheme_embedded_lilypond_text_fragment: $ => repeat1(token(choice(
        /[^"#%\s]+/,
        /#[^{}]/
      ))),

      // These comment and string rules need to be kept in sync with the
      // analogous rules in https://github.com/nwhetsell/tree-sitter-lilypond.

      // https://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
      lilypond_comment: $ => token(choice(
        seq('%', optional(seq(/[^{\n\r]/, /.*/))),
        seq(
          '%{',
          /[^%]*%+([^%}][^%]*%+)*/,
          '}'
        )
      )),

      lilypond_string: $ => seq(
        '"',
        repeat(choice($.lilypond_string_fragment, $.lilypond_escape_sequence)),
        '"'
      ),

      lilypond_string_fragment: $ => token.immediate(prec(1, /[^"\\]+/)),

      lilypond_escape_sequence: $ => token.immediate(seq('\\', /.|[\n\r]/)),
    }
  )
});
