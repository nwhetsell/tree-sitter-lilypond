//! This crate provides LilyPond and LilyPond Scheme language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language][language func] function to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! let code = r#"
//! "#;
//! let mut parser = tree_sitter::Parser::new();
//! let language = tree_sitter_lilypond::LANGUAGE;
//! parser
//!     .set_language(&language.into())
//!     .expect("Error loading LilyPond parser");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_lilypond() -> *const ();
    fn tree_sitter_lilypond_scheme() -> *const ();
}

/// The tree-sitter [`LanguageFn`] for LilyPond.
pub const LANGUAGE_LILYPOND: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_lilypond) };

/// The tree-sitter [`LanguageFn`] for LilyPond Scheme.
pub const LANGUAGE_LILYPOND_SCHEME: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_lilypond_scheme) };

/// The content of the [`node-types.json`][] file for LilyPond.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const LILYPOND_NODE_TYPES: &str = include_str!("../../lilypond/src/node-types.json");

/// The content of the [`node-types.json`][] file for LilyPond Scheme.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const LILYPOND_SCHEM_NODE_TYPES: &str = include_str!("../../lilypond-scheme/src/node-types.json");

pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/highlights.scm");
pub const INJECTIONS_QUERY: &str = include_str!("../../queries/injections.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_lilypond_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading LilyPond parser");
    }

    #[test]
    fn test_can_load_lilypond_scheme_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading LilyPond Scheme parser");
    }
}
