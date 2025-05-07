// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterLilyPond",
    products: [
        .library(name: "TreeSitterLilyPond", targets: ["TreeSitterLilyPond", "TreeSitterLilyPondScheme"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterLilyPond",
                path: ".",
                sources: [
                    "lilypond/src/parser.c"
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift/lilypond",
                cSettings: [.headerSearchPath("lilypond/src")]),
        .target(name: "TreeSitterLilyPondScheme",
                path: ".",
                sources: [
                    "lilypond-scheme/src/parser.c"
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift/lilypond-scheme",
                cSettings: [.headerSearchPath("lilypond-scheme/src")]),
        .testTarget(name: "TreeSitterLilyPondTests",
                path: ".",
                dependencies: [
                    "SwiftTreeSitter",
                    "TreeSitterLilyPond",
                    "TreeSitterLilyPondScheme",
                ],
                path: "bindings/swift/TreeSitterLilyPondTests")
    ],
    cLanguageStandard: .c11
)
