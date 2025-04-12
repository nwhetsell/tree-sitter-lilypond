/// <reference types="node" />

const assert = require("node:assert");
const { test } = require("node:test");

const Parser = require('tree-sitter');

test("can load LilyPond grammar", () => {
  const parser = new Parser();
  assert.doesNotThrow(() => parser.setLanguage(require("./lilypond")));
});

test("can load LilyPond Scheme grammar", () => {
  const parser = new Parser();
  assert.doesNotThrow(() => parser.setLanguage(require("./lilypond-scheme")));
});
