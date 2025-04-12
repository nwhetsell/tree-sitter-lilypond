package tree_sitter_lilypond_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_lilypond "github.com/tree-sitter/tree-sitter-lilypond/bindings/go"
	tree_sitter_lilypond_scheme "github.com/tree-sitter/tree-sitter-lilypond_scheme/bindings/go"
)

func TestCanLoadLilyPondGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_lilypond.Language())
	if language == nil {
		t.Errorf("Error loading LilyPond grammar")
	}
}

func TestCanLoadLilyPondSchemeGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_lilypond_scheme.Language())
	if language == nil {
		t.Errorf("Error loading Lilypond Scheme grammar")
	}
}
