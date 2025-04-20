const LilyPondRules = require('../lilypond/rules.js');
const SchemeRules = require('./rules.js');

module.exports = grammar({
  name: 'lilypond_scheme',

  extras: $ => [
    // These are LilyPond comments that start with “%”, not Scheme comments that
    // start with “;”. Scheme symbols can contain “%”, so as long as Scheme
    // symbols have a higher lexical precedence than LilyPond comments, LilyPond
    // comments should never appear in Scheme code, but they should still appear
    // in LilyPond code embedded in Scheme.
    $.comment,

    /[ \n\t\f\r]/
  ],

  conflicts: $ => [
    [$._expression_component, $.assignment_lhs, $._octave_check],
    [$.named_context],
    [$.chord, $.punctuation]
  ],

  rules: Object.assign(
    { scheme_program: $ => repeat($._scheme_token) },
    SchemeRules,
    LilyPondRules
  )
});
