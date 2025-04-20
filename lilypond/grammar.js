const LilyPondRules = require('./rules.js');
const SchemeRules = require('../lilypond-scheme/rules.js');

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

  rules: Object.assign(
    { lilypond_program: $ => repeat($._expression_component) },
    LilyPondRules,
    SchemeRules
  )
});
