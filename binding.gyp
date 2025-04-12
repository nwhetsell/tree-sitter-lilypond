{
  "targets": [
    {
      "target_name": "tree_sitter_lilypond_binding",
      "dependencies": [
        "<!(node -p \"require('node-addon-api').targets\"):node_addon_api_except",
      ],
      "include_dirs": [
        "lilypond/src",
      ],
      "sources": [
        "lilypond/src/parser.c",
        "lilypond-scheme/src/parser.c",
        "bindings/node/binding.cc"
      ],
      "conditions": [
        ["OS!='win'", {
          "cflags_c": [
            "-std=c11",
          ],
        }, { # OS == "win"
          "cflags_c": [
            "/std:c11",
            "/utf-8",
          ],
        }],
      ],
    }
  ]
}
