(comment) @comment

(punctuation) @punctuation

(
  (assignment_lhs)
  .
  (
    (punctuation) @operator
    (#eq? @operator "=")
  )
)

(named_context
  (symbol)
  .
  (
    (punctuation) @operator
    (#eq? @operator "=")
  )
  .
  [(symbol) (string)]
)

(chord
  .
  "<" @punctuation.bracket
  ">" @punctuation.bracket
  .
)

; This is needed for Panic Nova.
(
  (escaped_word) @identifier.variable
  (#not-any-of? @identifier.variable
    "\\include"
    "\\maininput"
    "\\version"
  )
)
(
  (escaped_word) @processing
  (#any-of? @processing
    ; These are handled directly by LilyPond’s lexer.
    "\\include"
    "\\maininput"
    "\\version"
  )
)
(
  (escaped_word) @value.number
  (#any-of? @value.number
    "\\breve"
    "\\longa"
    "\\maxima"
  )
)
(
  (escaped_word) @identifier.core.function
  (#eq? @identifier.core.function "\\^")
)

(quoted_identifier
  "\"" @bracket
)

(
  (symbol) @keyword
  (#eq? @keyword "q")
)

[
  (fraction)
  (decimal_number)
  (unsigned_integer)
] @value.number

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
  "<<" ">>"
  "#{" "#}"
] @punctuation.bracket

(parallel_music_separator) @punctuation.delimiter

(chord
  ">>" @invalid
)

(embedded_scheme_prefix) @processing
