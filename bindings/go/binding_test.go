package tree_sitter_lilypond_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-lilypond"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_lilypond.Language())
	if language == nil {
		t.Errorf("Error loading LilyPond grammar")
	}
}
