const root = require("path").join(__dirname, "..", "..");

module.exports = require("node-gyp-build")(root);

try {
  module.exports.lilypond.nodeTypeInfo = require("../../lilypond/src/node-types.json");
  module.exports.lilypond_scheme.nodeTypeInfo = require("../../lilypond-scheme/src/node-types.json");
} catch (_) {}
