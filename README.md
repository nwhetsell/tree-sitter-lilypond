# tree-sitter-lilypond

[LilyPond](https://lilypond.org) and [LilyPond Scheme](https://lilypond.org/doc/Documentation/extending) grammars for [Tree-sitter](https://github.com/tree-sitter/tree-sitter).
The LilyPond Scheme grammar is based on https://github.com/6cdh/tree-sitter-scheme and [Pygments](https://github.com/pygments/pygments/blob/04a75bd5a75bfe27f0b582dd83c85e62f9475581/pygments/lexers/lisp.py).

To rebuild the grammars:

```sh
for folder in lilypond lilypond-scheme; do ./node_modules/tree-sitter-cli/tree-sitter generate $folder/grammar.js --abi 14 && rm -fR $folder/src && mv src $folder/; done
```
