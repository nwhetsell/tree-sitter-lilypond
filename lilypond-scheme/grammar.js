const LilyPondRules = require('../lilypond/rules.js');
const SchemeRules = require('./rules.js');

module.exports = grammar({
  name: 'lilypond_scheme',

  conflicts: $ => [
    [$._expression_component, $.assignment_lhs, $._octave_check],
    [$.named_context],
    [$.chord, $.punctuation]
  ],

  rules: Object.assign(
    { scheme_program: $ => repeat($._scheme_token) },
    SchemeRules,
    LilyPondRules,
    {
      scheme_embedded_lilypond: $ => seq(
        '#{',
        repeat(choice($._expression_component, $.comment)),
        '#}'
      ),
    }
  )
});
