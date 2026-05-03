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

(
  (escaped_word) @keyword.directive
  (#any-of? @keyword.directive
    ; These are handled directly by LilyPond’s lexer.
    "\\include"
    "\\maininput"
    "\\version"
  )
)
(
  (escaped_word) @constant.builtin
  (#any-of? @constant.builtin
    "\\breve"
    "\\longa"
    "\\maxima"
  )
)
(
  (escaped_word) @function.builtin
  (#eq? @function.builtin "\\^")
)

(quoted_identifier
  "\"" @punctuation.bracket
)

(
  (symbol) @keyword
  (#eq? @keyword "q")
)

[
  (fraction)
  (decimal_number)
  (unsigned_integer)
] @number

(dynamic) @variable.builtin

(instrument_string_number) @function.builtin

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

(embedded_scheme_prefix) @keyword.directive
