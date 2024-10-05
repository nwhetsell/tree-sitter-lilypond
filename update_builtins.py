from pygments.regexopt import regex_opt
import pygments.lexers._lilypond_builtins as _lilypond_builtins
import re
from textwrap import dedent

# \include and \version are actually handled by LilyPond’s lexer as a preprocessing step.
for keyword in ['include', 'version']:
    _lilypond_builtins.keywords.remove(keyword)
# \inherit-acceptability and \language are actually music functions.
for keyword in ['inherit-acceptability', 'language']:
    _lilypond_builtins.keywords.remove(keyword)
# Add keywords that are not treated as such in Pygments.
keywords = [
    'alternative',
    'change',
    'override',
    'repeat',
    'revert',
    'set',
    'tempo',
    'unset',
]
_lilypond_builtins.keywords.extend(keywords)
_lilypond_builtins.keywords.extend([
    'default',
    'lyrics',
    'markup',
    'markuplist',
    'rest',
    'sequential',
    'simultaneous',
])

# Remove clefs that must be expressed as strings.
_lilypond_builtins.clefs = [clef for clef in _lilypond_builtins.clefs if not re.search(r'\d', clef)]

# Remove keywords from music functions.
for keyword in keywords:
    _lilypond_builtins.music_functions.remove(keyword)

# Combine music commands, articulations, and dynamics.
music_objects = set(_lilypond_builtins.music_commands)
music_objects.update(_lilypond_builtins.articulations)
music_objects.update(_lilypond_builtins.dynamics)
# Remove punctuation marks.
for item in ['!', '(', ')', '-', '<', '>', '[', ']', '^', '|', '~']:
    music_objects.remove(item)

# Remove keywords from markup commands.
for keyword in ['markup', 'markuplist', 'override', 'score']:
    _lilypond_builtins.markup_commands.remove(keyword)

with open('queries/highlights-builtins.scm', 'w') as file:
    backslash_prefix = r'^\\\\'
    for list_and_selector in [
        (_lilypond_builtins.keywords, 'keyword'),
        (_lilypond_builtins.music_functions, 'identifier.core.function'),
        (music_objects, 'identifier.core.global'),
        (_lilypond_builtins.markup_commands, 'identifier.core.function.markup'),
    ]:
        file.write(dedent(f'''\
        (
          (escaped_word) @{list_and_selector[1]}
          (#match? @{list_and_selector[1]} "{regex_opt(list_and_selector[0], backslash_prefix, '$').replace('\\-', '-')}")
        )

        '''))

    for list_and_selector in [
        (_lilypond_builtins.grobs, 'identifier.core.type.graphical_object'),
        (_lilypond_builtins.contexts, 'identifier.core.type.context'),
        (_lilypond_builtins.translators, 'identifier.core.type.translator'),
        (_lilypond_builtins.context_properties, 'identifier.core.property.context'),
    ]:
        file.write(dedent(f'''\
        (
          (symbol) @{list_and_selector[1]}
          (#match? @{list_and_selector[1]} "{regex_opt(list_and_selector[0], '^', '$')}")
        )

        '''))

    file.write(dedent(f'''\
    (
      (
        (escaped_word) @identifier.core.function
        (#match? @identifier.core.function "^\\\\\\\\tweak$")
      )
      .
      (
        (symbol) @identifier.core.property.graphical_object
        (#match? @identifier.core.property.graphical_object "{regex_opt(_lilypond_builtins.grob_properties, '^', '$')}")
      )
    )

    (property_expression
      (
        (symbol) @identifier.core.property.graphical_object
        (#match? @identifier.core.property.graphical_object "{regex_opt(_lilypond_builtins.grob_properties, '^', '$')}")
      )
    )

    (
      (
        (escaped_word) @identifier.core.function
        (#match? @identifier.core.function "^\\\\\\\\clef$")
      )
      .
      (
        (symbol) @identifier.core.constant.clef
        (#match? @identifier.core.constant.clef "{regex_opt(_lilypond_builtins.clefs, '^', '$')}")
      )
    )

    (
      (
        (escaped_word) @identifier.core.function
        (#match? @identifier.core.function "^\\\\\\\\key$")
      )
      .
      (symbol)
      .
      (
        (escaped_word) @identifier.core.constant.scale
        (#match? @identifier.core.constant.scale "{regex_opt(_lilypond_builtins.scales, backslash_prefix, '$')}")
      )
    )

    (
      (
        (escaped_word) @identifier.core.function
        (#match? @identifier.core.function "^\\\\\\\\repeat$")
      )
      .
      (
        (symbol) @identifier.core.constant.repeat_type
        (#match? @identifier.core.constant.repeat_type "{regex_opt(_lilypond_builtins.repeat_types, '^', '$')}")
      )
    )

    (
      (
        (escaped_word) @keyword
        (#match? @keyword "^\\\\\\\\paper$")
      )
      .
      (expression_block
        (
          (escaped_word) @identifier.core.constant.unit
          (#match? @identifier.core.constant.unit "{regex_opt(_lilypond_builtins.units, backslash_prefix, '$')}")
        )
      )
    )

    (
      (
        (escaped_word) @keyword
        (#match? @keyword "^\\\\\\\\chordmode$")
      )
      .
      (expression_block
        (
          (symbol) @keyword.operator
          (#match? @keyword.operator "{regex_opt(_lilypond_builtins.chord_modifiers, '^', '$')}")
        )
      )
    )

    (
      (
        (escaped_word) @identifier.core.function
        (#match? @identifier.core.function "^\\\\\\\\language$")
      )
      .
      (
        (symbol) @identifier.core.constant.language
        (#match? @identifier.core.constant.language "{regex_opt(_lilypond_builtins.pitch_language_names, '^', '$')}")
      )
    )

    (
      (
        (escaped_word) @keyword
        (#match? @keyword "^\\\\\\\\paper$")
      )
      .
      (expression_block
        (assignment_lhs
          [
            (
              (symbol) @identifier.core.variable
              (#match? @identifier.core.variable "{regex_opt(_lilypond_builtins.paper_variables, '^', '$')}")
            )

            (property_expression
              (
                (symbol) @identifier.core.variable
                (#match? @identifier.core.variable "{regex_opt(_lilypond_builtins.paper_variables, '^', '$')}")
              )
            )
          ]
        )
      )
    )

    (
      (
        (escaped_word) @keyword
        (#match? @keyword "^\\\\\\\\paper$")
      )
      .
      (expression_block
        (
          (escaped_word) @identifier.core.variable
          (#match? @identifier.core.variable "{regex_opt(_lilypond_builtins.paper_variables, backslash_prefix, '$')}")
        )
      )
    )

    (
      (
        (escaped_word) @keyword
        (#match? @keyword "^\\\\\\\\header$")
      )
      .
      (expression_block
        (assignment_lhs
          (symbol) @identifier.core.variable
          (#match? @identifier.core.variable "{regex_opt(_lilypond_builtins.header_variables, '^', '$')}")
        )
      )
    )
    '''))
