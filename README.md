# tree-sitter-lilypond

[LilyPond](https://lilypond.org) and
[LilyPond Scheme](https://lilypond.org/doc/Documentation/extending) grammars for
[Tree-sitter](https://github.com/tree-sitter/tree-sitter).
The LilyPond Scheme grammar is based on
https://github.com/6cdh/tree-sitter-scheme and
[Pygments](https://github.com/pygments/pygments/blob/04a75bd5a75bfe27f0b582dd83c85e62f9475581/pygments/lexers/lisp.py).

To rebuild the grammars:

```sh
for folder in lilypond lilypond-scheme; do tree-sitter generate $folder/grammar.js --abi 14 && rm -fR $folder/src && mv src $folder/; done
```

## Syntax Highlighting

This repository includes [syntax highlighting queries](https://tree-sitter.github.io/tree-sitter/3-syntax-highlighting.html#queries)
that may achieve a basic level of syntax highlighting in many text editors.
However, text editors vary widely in how they use Tree-sitter for syntax
highlighting. For example, here are highlight names for Booleans in a few text
editors:

* Helix: [`constant.builtin.boolean`](https://docs.nova.app/extensions/themes/#styling-syntax-highlighting)
* Nova: [`value.boolean`](https://docs.nova.app/extensions/themes/#styling-syntax-highlighting)
* Sublime Text: [`constant.language`](https://www.sublimetext.com/docs/scope_naming.html#constant)
* Zed: [`boolean`](https://zed.dev/docs/extensions/languages#syntax-highlighting)

Because of this, while the syntax highlighting queries in this repository may
be a start, you’ll probably have to write syntax highlighting queries specific
to your text editor when using these grammars.
