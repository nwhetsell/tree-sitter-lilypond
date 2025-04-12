#include <napi.h>

typedef struct TSLanguage TSLanguage;

extern "C" TSLanguage *tree_sitter_lilypond();
extern "C" TSLanguage *tree_sitter_lilypond_scheme();

// "tree-sitter", "language" hashed with BLAKE2
const napi_type_tag LANGUAGE_TYPE_TAG = {
  0x8AF2E5212AD58ABF, 0xD5006CAD83ABBA16
};

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    auto lilypond = Napi::Object::New(env);
    lilypond["name"] = Napi::String::New(env, "lilypond");
    auto lilypond_language = Napi::External<TSLanguage>::New(env, tree_sitter_lilypond());
    lilypond_language.TypeTag(&LANGUAGE_TYPE_TAG);
    lilypond["language"] = lilypond_language;

    auto lilypond_scheme = Napi::Object::New(env);
    lilypond_scheme["name"] = Napi::String::New(env, "lilypond_scheme");
    auto lilypond_scheme_language = Napi::External<TSLanguage>::New(env, tree_sitter_lilypond_scheme());
    lilypond_scheme_language.TypeTag(&LANGUAGE_TYPE_TAG);
    lilypond_scheme["language"] = lilypond_scheme_language;

    exports["lilypond"] = lilypond;
    exports["lilypond_scheme"] = lilypond_scheme;
    return exports;
}

NODE_API_MODULE(tree_sitter_lilypond_binding, Init)
