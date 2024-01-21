(comment) @comment

(
  (assignment_lhs)
  .
  (
    (punctuation) @operator
    (#match? @operator "^=$")
  )
)

(named_context
  (symbol)
  .
  (
    (punctuation) @operator
    (#match? @operator "^=$")
  )
  .
  [(symbol) (string)]
)

(chord
  .
  "<" @bracket
  ">" @bracket
  .
)
(chord
  ">>" @invalid
)

(
  (escaped_word) @processing
  (#match? @processing "^\\\\(?:include|maininput|version)$") ; These are handled directly by LilyPond’s lexer.
)
(
  (escaped_word) @value.number
  (#match? @value.number "^\\\\(?:breve|longa|maxima)$")
)
(
  (escaped_word) @identifier.core.function
  (#match? @identifier.core.function "^\\\\\\^$")
)
(escaped_word) @identifier.variable

(quoted_identifier
  "\"" @bracket
)

(
  (symbol) @keyword
  (#match? @keyword "^q$")
)

[
  (fraction)
  (unsigned_integer)
] @value.number

(punctuation) @punctuation

(dynamic) @identifier.core.global

(instrument_string_number) @identifier.core.function

(
  (string
    "\"" @string.delimiter.left
    [
      (string_fragment)?
      (escape_sequence)? @string.escape
    ]
    "\"" @string.delimiter.right
  )
) @string

[
  "{" "}"
  "<<" (parallel_music_separator) ">>"
  "#{" "#}"
] @bracket

(embedded_scheme_prefix) @processing
