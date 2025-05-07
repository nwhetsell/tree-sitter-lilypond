package tree_sitter_lilypond

// #cgo CFLAGS: -std=c11 -fPIC
// #include "../../lilypond-scheme/src/parser.c"
import "C"

import "unsafe"

// Get the tree-sitter Language for LilyPond Scheme.
func LanguageLilyPondScheme() unsafe.Pointer {
	return unsafe.Pointer(C.tree_sitter_lilypond_scheme())
}
