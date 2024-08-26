import XCTest
import SwiftTreeSitter
import TreeSitterLilypond

final class TreeSitterLilypondTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_lilypond())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading LilyPond grammar")
    }
}
