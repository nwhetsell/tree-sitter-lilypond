from unittest import TestCase

import tree_sitter, tree_sitter_lilypond


class TestLanguage(TestCase):
    def test_can_load_lilypond_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_lilypond.language_lilypond())
        except Exception:
            self.fail("Error loading LilyPond grammar")

    def test_can_load_lilypond_scheme_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_lilypond.language_lilypond_scheme())
        except Exception:
            self.fail("Error loading LilyPond Scheme grammar")
