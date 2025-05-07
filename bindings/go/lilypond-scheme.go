package tree_sitter_lilypond_scheme

// #cgo CFLAGS: -std=c11 -fPIC
// #include "../../src/parser.c"
import "C"

import "unsafe"

// Get the tree-sitter Language for LilyPond Scheme.
func LanguageLilyPondScheme() unsafe.Pointer {
	return unsafe.Pointer(C.tree_sitter_lilypond_scheme())
}
