import XCTest
import SwiftTreeSitter
import TreeSitterLilypond
import TreeSitterLilypondScheme

final class TreeSitterLilypondTests: XCTestCase {
    func testCanLoadLilyPondGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_lilypond())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading LilyPond grammar")
    }

    func testCanLoadLilyPondSchemeGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_lilypond_scheme())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Lilypond Scheme grammar")
    }
}
