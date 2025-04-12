package tree_sitter_lilypond

// #cgo CFLAGS: -std=c11 -fPIC
// #include "../../src/parser.c"
import "C"

import "unsafe"

// Get the tree-sitter Language for LilyPond.
func Language() unsafe.Pointer {
	return unsafe.Pointer(C.tree_sitter_lilypond())
}
