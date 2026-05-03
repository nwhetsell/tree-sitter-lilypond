[
  (scheme_comment)
] @comment

(
  (scheme_symbol) @operator
  (#any-of? @operator
    "*"
    "+"
    "/"
    "="
    "<"
    ">"
    "-"
    "<="
    ">="
  )
)

(
  (scheme_string
    "\"" @string.delimiter.left
    [
      (scheme_string_fragment)?
      (scheme_escape_sequence)? @string.escape
    ]
    "\"" @string.delimiter.right
  )
) @string

(scheme_keyword
  "#:" @punctuation
  (scheme_keyword_name) @string.special.symbol
)

(scheme_boolean) @boolean

(scheme_number) @number

(scheme_character) @string.special

(scheme_quote . "'" @operator)
(scheme_quasiquote . "`" @operator)
(scheme_unquote . "," @operator)
(scheme_unquote_splicing . ",@" @operator)

[
  "(" ")"
  "#{" "#}"
] @punctuation.bracket
