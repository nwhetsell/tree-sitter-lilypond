package tree_sitter_lilypond

// #cgo CFLAGS: -std=c11 -fPIC
// #include "../../lilypond/src/parser.c"
import "C"

import "unsafe"

// Get the tree-sitter Language for LilyPond.
func LanguageLilyPond() unsafe.Pointer {
	return unsafe.Pointer(C.tree_sitter_lilypond())
}
