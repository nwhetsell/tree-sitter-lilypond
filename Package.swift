// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterLilyPond",
    products: [
        .library(name: "TreeSitterLilyPond", targets: ["TreeSitterLilyPond", "TreeSitterLilyPondScheme"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.9.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterLilyPond",
            dependencies: [],
            path: ".",
            sources: [
                "lilypond/src/parser.c"
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift/lilypond",
            cSettings: [.headerSearchPath("lilypond/src")]
        ),
        .target(
            name: "TreeSitterLilyPondScheme",
            path: ".",
            sources: [
                "lilypond-scheme/src/parser.c"
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift/lilypond-scheme",
            cSettings: [.headerSearchPath("lilypond-scheme/src")]
        ),
        .testTarget(
            name: "TreeSitterLilyPondTests",
            dependencies: [
                .product(name: "SwiftTreeSitter", package: "swift-tree-sitter"),
                "TreeSitterLilyPond",
                "TreeSitterLilyPondScheme",
            ],
            path: "bindings/swift/TreeSitterLilypondTests")
    ],
    cLanguageStandard: .c11
)
