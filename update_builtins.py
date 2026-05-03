import pygments.lexers._lilypond_builtins as _lilypond_builtins
import pygments.lexers._scheme_builtins as _scheme_builtins
import re
from textwrap import dedent

# \include and \version are actually handled by LilyPond’s lexer as a preprocessing step.
for keyword in ["include", "version"]:
    _lilypond_builtins.keywords.remove(keyword)
# \inherit-acceptability and \language are actually music functions.
for keyword in ["inherit-acceptability", "language"]:
    _lilypond_builtins.keywords.remove(keyword)
# Add keywords that are not treated as such in Pygments.
keywords = [
    "alternative",
    "change",
    "override",
    "repeat",
    "revert",
    "set",
    "tempo",
    "unset",
]
_lilypond_builtins.keywords.extend(keywords)
_lilypond_builtins.keywords.extend([
    "default",
    "lyrics",
    "markup",
    "markuplist",
    "rest",
    "sequential",
    "simultaneous",
])

# Remove clefs that must be expressed as strings.
_lilypond_builtins.clefs = [clef for clef in _lilypond_builtins.clefs if not re.search(r"\d", clef)]

# Remove keywords from music functions.
for keyword in keywords:
    _lilypond_builtins.music_functions.remove(keyword)

# Combine music commands, articulations, and dynamics.
music_objects = set(_lilypond_builtins.music_commands)
music_objects.update(_lilypond_builtins.articulations)
music_objects.update(_lilypond_builtins.dynamics)
# Remove punctuation marks.
for item in ["!", "(", ")", "-", "<", ">", "[", "]", "^", "|", "~"]:
    music_objects.remove(item)

# Remove keywords from markup commands.
for keyword in ["markup", "markuplist", "override", "score"]:
    _lilypond_builtins.markup_commands.remove(keyword)

with open("queries/highlights-builtins.scm", "w") as file:
    for list_and_selector in [
        (_lilypond_builtins.keywords, "keyword"),
        (_lilypond_builtins.music_functions, "identifier.core.function"),
        (music_objects, "identifier.core.global"),
        (_lilypond_builtins.markup_commands, "identifier.core.function.markup"),
    ]:
        file.write(dedent(f"""\
        (
          (escaped_word) @{list_and_selector[1]}
          (#any-of? @{list_and_selector[1]}
            {"\n            ".join(['"\\\\' + str + '"' for str in sorted(list_and_selector[0])])}
          )
        )

        """))

    for list_and_selector in [
        (_lilypond_builtins.grobs, "identifier.core.type.graphical_object"),
        (_lilypond_builtins.contexts, "identifier.core.type.context"),
        (_lilypond_builtins.translators, "identifier.core.type.translator"),
        (_lilypond_builtins.context_properties, "identifier.core.property.context"),
    ]:
        file.write(dedent(f"""\
        (
          (symbol) @{list_and_selector[1]}
          (#any-of? @{list_and_selector[1]}
            {"\n            ".join(['"' + str + '"' for str in list_and_selector[0]])}
          )
        )

        """))

    file.write(dedent(f"""\
    (
      (
        (escaped_word) @identifier.core.function
        (#eq? @identifier.core.function "\\\\tweak")
      )
      .
      (
        (symbol) @identifier.core.property.graphical_object
        (#any-of? @identifier.core.property.graphical_object
          {"\n          ".join(['"' + str + '"' for str in _lilypond_builtins.grob_properties])}
        )
      )
    )

    (property_expression
      (
        (symbol) @identifier.core.property.graphical_object
        (#any-of? @identifier.core.property.graphical_object
          {"\n          ".join(['"' + str + '"' for str in _lilypond_builtins.grob_properties])}
        )
      )
    )

    (
      (
        (escaped_word) @identifier.core.function
        (#eq? @identifier.core.function "\\\\clef")
      )
      .
      (
        (symbol) @identifier.core.constant.clef
        (#any-of? @identifier.core.constant.clef
          {"\n          ".join(['"' + str + '"' for str in _lilypond_builtins.clefs])}
        )
      )
    )

    (
      (
        (escaped_word) @identifier.core.function
        (#eq? @identifier.core.function "\\\\key")
      )
      .
      (symbol)
      .
      (
        (escaped_word) @identifier.core.constant.scale
        (#any-of? @identifier.core.constant.scale
          {"\n          ".join(['"\\\\' + str + '"' for str in sorted(_lilypond_builtins.scales)])}
        )
      )
    )

    (
      (
        (escaped_word) @identifier.core.function
        (#eq? @identifier.core.function "\\\\repeat")
      )
      .
      (
        (symbol) @identifier.core.constant.repeat_type
        (#any-of? @identifier.core.constant.repeat_type
          {"\n          ".join(['"' + str + '"' for str in _lilypond_builtins.repeat_types])}
        )
      )
    )

    (
      (
        (escaped_word) @keyword
        (#eq? @keyword "\\\\paper")
      )
      .
      (expression_block
        (
          (escaped_word) @identifier.core.constant.unit
          (#any-of? @identifier.core.constant.unit
            {"\n            ".join(['"\\\\' + str + '"' for str in sorted(_lilypond_builtins.units)])}
          )
        )
      )
    )

    (
      (
        (escaped_word) @keyword
        (#eq? @keyword "\\\\chordmode")
      )
      .
      (expression_block
        (
          (symbol) @keyword.operator
          (#any-of? @keyword.operator
            {"\n            ".join(['"' + str + '"' for str in _lilypond_builtins.chord_modifiers])}
          )
        )
      )
    )

    (
      (
        (escaped_word) @identifier.core.function
        (#eq? @identifier.core.function "\\\\language")
      )
      .
      (
        (symbol) @identifier.core.constant.language
        (#any-of? @identifier.core.constant.language
          {"\n          ".join(['"' + str + '"' for str in _lilypond_builtins.pitch_language_names])}
        )
      )
    )

    (
      (
        (escaped_word) @keyword
        (#eq? @keyword "\\\\paper")
      )
      .
      (expression_block
        (assignment_lhs
          [
            (
              (symbol) @identifier.core.variable
              (#any-of? @identifier.core.variable
                {"\n                ".join(['"' + str + '"' for str in _lilypond_builtins.paper_variables])}
              )
            )

            (property_expression
              (
                (symbol) @identifier.core.variable
                (#any-of? @identifier.core.variable
                  {"\n                  ".join(['"' + str + '"' for str in _lilypond_builtins.paper_variables])}
                )
              )
            )
          ]
        )
      )
    )

    (
      (
        (escaped_word) @keyword
        (#eq? @keyword "\\\\paper")
      )
      .
      (expression_block
        (
          (escaped_word) @identifier.core.variable
          (#any-of? @identifier.core.variable
            {"\n            ".join(['"\\\\' + str + '"' for str in sorted(_lilypond_builtins.paper_variables)])}
          )
        )
      )
    )

    (
      (
        (escaped_word) @keyword
        (#eq? @keyword "\\\\header")
      )
      .
      (expression_block
        (assignment_lhs
          (symbol) @identifier.core.variable
          (#any-of? @identifier.core.variable
            {"\n            ".join(['"' + str + '"' for str in _lilypond_builtins.header_variables])}
          )
        )
      )
    )
    """))

with open("queries/highlights-scheme-builtins.scm", "w") as file:
    file.write(dedent(f"""\
    (
      (scheme_symbol) @keyword
      (#any-of? @keyword
        {"\n        ".join(['"' + str + '"' for str in sorted(_scheme_builtins.scheme_keywords)])}
      )
    )
    """))

    # Remove operator-like functions.
    for item in ["*", "+", "-", "/", "<", "<=", "=", ">", ">="]:
        _scheme_builtins.scheme_builtins.remove(item)
    file.write(dedent(f"""\
    (
      (scheme_symbol) @identifier.core.function
      (#any-of? @identifier.core.function
        {"\n        ".join(['"' + str + '"' for str in sorted(_scheme_builtins.scheme_builtins)])}
      )
    )
    """))

with open("queries/highlights-scheme-lilypond-builtins.scm", "w") as file:
    file.write(dedent(f"""\
    (
      (scheme_symbol) @identifier.core.function
      (#any-of? @identifier.core.function
        {"\n        ".join(['"' + str + '"' for str in _lilypond_builtins.scheme_functions])}
      )
    )
    """))
