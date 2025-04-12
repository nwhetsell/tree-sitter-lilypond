"LilyPond and LilyPond Scheme grammars for tree-sitter"

from importlib.resources import files as _files

from ._binding import language_lilypond, language_lilypond_scheme

def _get_query(name, file):
    query = _files(f"{__package__}.queries") / file
    globals()[name] = query.read_text()
    return globals()[name]

def __getattr__(name):
    if name == "HIGHLIGHTS_QUERY":
        return _get_query("HIGHLIGHTS_QUERY", "highlights.scm")

    raise AttributeError(f"module {__name__!r} has no attribute {name!r}")
