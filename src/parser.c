#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 224
#define LARGE_STATE_COUNT 24
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  sym_comment = 1,
  anon_sym_EQ = 2,
  anon_sym_BSLASHnew = 3,
  anon_sym_BSLASHcontext = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LT_LT = 7,
  anon_sym_BSLASH_BSLASH = 8,
  anon_sym_GT_GT = 9,
  anon_sym_LT = 10,
  anon_sym_DASH = 11,
  anon_sym_GT = 12,
  sym_escaped_word = 13,
  sym_symbol = 14,
  anon_sym_DOT = 15,
  sym_fraction = 16,
  sym_unsigned_integer = 17,
  anon_sym_SQUOTE = 18,
  anon_sym_COMMA = 19,
  anon_sym_QMARK = 20,
  anon_sym_BANG = 21,
  anon_sym_STAR = 22,
  anon_sym_CARET = 23,
  anon_sym__ = 24,
  anon_sym_PLUS = 25,
  anon_sym_TILDE = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_BSLASH_LPAREN = 29,
  anon_sym_BSLASH_RPAREN = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  anon_sym_COLON = 33,
  anon_sym_SLASH = 34,
  anon_sym_PIPE = 35,
  anon_sym_BSLASH_LT = 36,
  anon_sym_BSLASH_GT = 37,
  anon_sym_BSLASH_BANG = 38,
  anon_sym_BSLASH_LBRACK = 39,
  anon_sym_BSLASH_RBRACK = 40,
  sym_instrument_string_number = 41,
  anon_sym_DQUOTE = 42,
  aux_sym_string_fragment_token1 = 43,
  sym_escape_sequence = 44,
  anon_sym_POUND = 45,
  anon_sym_POUND_LBRACE = 46,
  anon_sym_POUND_RBRACE = 47,
  aux_sym_scheme_comment_token1 = 48,
  anon_sym_POUND_PIPE = 49,
  aux_sym__scheme_block_comment_token1 = 50,
  aux_sym__scheme_block_comment_token2 = 51,
  anon_sym_PIPE_POUND = 52,
  sym_scheme_boolean = 53,
  sym_scheme_character = 54,
  aux_sym_scheme_number_token1 = 55,
  anon_sym_POUND_COLON = 56,
  sym_scheme_keyword_name = 57,
  sym_scheme_escape_sequence = 58,
  sym_scheme_symbol = 59,
  anon_sym_BQUOTE = 60,
  anon_sym_COMMA_AT = 61,
  anon_sym_POUND_LPAREN = 62,
  anon_sym_POUNDvu8_LPAREN = 63,
  sym_lilypond_program = 64,
  sym__expression_component = 65,
  sym__assignment = 66,
  sym_assignment_lhs = 67,
  sym_named_context = 68,
  sym_expression_block = 69,
  sym_parallel_music = 70,
  sym_chord = 71,
  sym_property_expression = 72,
  sym_punctuation = 73,
  sym_dynamic = 74,
  sym_ligature = 75,
  sym_string = 76,
  sym_string_fragment = 77,
  sym__octave_check = 78,
  sym_embedded_scheme = 79,
  sym_embedded_scheme_text = 80,
  sym_scheme_embedded_lilypond = 81,
  sym__scheme_token = 82,
  sym_scheme_comment = 83,
  sym__scheme_block_comment = 84,
  sym__scheme_datum = 85,
  sym__scheme_simple_datum = 86,
  sym_scheme_number = 87,
  sym_scheme_keyword = 88,
  sym_scheme_string = 89,
  sym_scheme_string_fragment = 90,
  sym__scheme_compound_datum = 91,
  sym_scheme_list = 92,
  sym_scheme_quote = 93,
  sym_scheme_quasiquote = 94,
  sym_scheme_unquote = 95,
  sym_scheme_unquote_splicing = 96,
  sym_scheme_vector = 97,
  sym_scheme_byte_vector = 98,
  aux_sym_lilypond_program_repeat1 = 99,
  aux_sym_parallel_music_repeat1 = 100,
  aux_sym_chord_repeat1 = 101,
  aux_sym_string_repeat1 = 102,
  aux_sym__octave_check_repeat1 = 103,
  aux_sym__octave_check_repeat2 = 104,
  aux_sym_embedded_scheme_text_repeat1 = 105,
  aux_sym__scheme_block_comment_repeat1 = 106,
  aux_sym_scheme_string_repeat1 = 107,
  aux_sym_scheme_list_repeat1 = 108,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [anon_sym_BSLASHnew] = "escaped_word",
  [anon_sym_BSLASHcontext] = "escaped_word",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_BSLASH_BSLASH] = "parallel_music_separator",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT] = "<",
  [anon_sym_DASH] = "-",
  [anon_sym_GT] = ">",
  [sym_escaped_word] = "escaped_word",
  [sym_symbol] = "symbol",
  [anon_sym_DOT] = ".",
  [sym_fraction] = "fraction",
  [sym_unsigned_integer] = "unsigned_integer",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_COMMA] = ",",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_CARET] = "^",
  [anon_sym__] = "_",
  [anon_sym_PLUS] = "+",
  [anon_sym_TILDE] = "~",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BSLASH_LPAREN] = "\\(",
  [anon_sym_BSLASH_RPAREN] = "\\)",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
  [anon_sym_BSLASH_LT] = "\\<",
  [anon_sym_BSLASH_GT] = "\\>",
  [anon_sym_BSLASH_BANG] = "\\!",
  [anon_sym_BSLASH_LBRACK] = "\\[",
  [anon_sym_BSLASH_RBRACK] = "\\]",
  [sym_instrument_string_number] = "instrument_string_number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_fragment_token1] = "string_fragment_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_POUND_RBRACE] = "#}",
  [aux_sym_scheme_comment_token1] = "scheme_comment_token1",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym__scheme_block_comment_token1] = "_scheme_block_comment_token1",
  [aux_sym__scheme_block_comment_token2] = "_scheme_block_comment_token2",
  [anon_sym_PIPE_POUND] = "|#",
  [sym_scheme_boolean] = "scheme_boolean",
  [sym_scheme_character] = "scheme_character",
  [aux_sym_scheme_number_token1] = "scheme_number_token1",
  [anon_sym_POUND_COLON] = "#:",
  [sym_scheme_keyword_name] = "scheme_keyword_name",
  [sym_scheme_escape_sequence] = "scheme_escape_sequence",
  [sym_scheme_symbol] = "scheme_symbol",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_POUNDvu8_LPAREN] = "#vu8(",
  [sym_lilypond_program] = "lilypond_program",
  [sym__expression_component] = "_expression_component",
  [sym__assignment] = "_assignment",
  [sym_assignment_lhs] = "assignment_lhs",
  [sym_named_context] = "named_context",
  [sym_expression_block] = "expression_block",
  [sym_parallel_music] = "parallel_music",
  [sym_chord] = "chord",
  [sym_property_expression] = "property_expression",
  [sym_punctuation] = "punctuation",
  [sym_dynamic] = "dynamic",
  [sym_ligature] = "ligature",
  [sym_string] = "string",
  [sym_string_fragment] = "string_fragment",
  [sym__octave_check] = "_octave_check",
  [sym_embedded_scheme] = "embedded_scheme",
  [sym_embedded_scheme_text] = "embedded_scheme_text",
  [sym_scheme_embedded_lilypond] = "scheme_embedded_lilypond",
  [sym__scheme_token] = "_scheme_token",
  [sym_scheme_comment] = "scheme_comment",
  [sym__scheme_block_comment] = "_scheme_block_comment",
  [sym__scheme_datum] = "_scheme_datum",
  [sym__scheme_simple_datum] = "_scheme_simple_datum",
  [sym_scheme_number] = "scheme_number",
  [sym_scheme_keyword] = "scheme_keyword",
  [sym_scheme_string] = "scheme_string",
  [sym_scheme_string_fragment] = "scheme_string_fragment",
  [sym__scheme_compound_datum] = "_scheme_compound_datum",
  [sym_scheme_list] = "scheme_list",
  [sym_scheme_quote] = "scheme_quote",
  [sym_scheme_quasiquote] = "scheme_quasiquote",
  [sym_scheme_unquote] = "scheme_unquote",
  [sym_scheme_unquote_splicing] = "scheme_unquote_splicing",
  [sym_scheme_vector] = "scheme_vector",
  [sym_scheme_byte_vector] = "scheme_byte_vector",
  [aux_sym_lilypond_program_repeat1] = "lilypond_program_repeat1",
  [aux_sym_parallel_music_repeat1] = "parallel_music_repeat1",
  [aux_sym_chord_repeat1] = "chord_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__octave_check_repeat1] = "_octave_check_repeat1",
  [aux_sym__octave_check_repeat2] = "_octave_check_repeat2",
  [aux_sym_embedded_scheme_text_repeat1] = "embedded_scheme_text_repeat1",
  [aux_sym__scheme_block_comment_repeat1] = "_scheme_block_comment_repeat1",
  [aux_sym_scheme_string_repeat1] = "scheme_string_repeat1",
  [aux_sym_scheme_list_repeat1] = "scheme_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BSLASHnew] = sym_escaped_word,
  [anon_sym_BSLASHcontext] = sym_escaped_word,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [sym_escaped_word] = sym_escaped_word,
  [sym_symbol] = sym_symbol,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_fraction] = sym_fraction,
  [sym_unsigned_integer] = sym_unsigned_integer,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym__] = anon_sym__,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BSLASH_LPAREN] = anon_sym_BSLASH_LPAREN,
  [anon_sym_BSLASH_RPAREN] = anon_sym_BSLASH_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_BSLASH_LT] = anon_sym_BSLASH_LT,
  [anon_sym_BSLASH_GT] = anon_sym_BSLASH_GT,
  [anon_sym_BSLASH_BANG] = anon_sym_BSLASH_BANG,
  [anon_sym_BSLASH_LBRACK] = anon_sym_BSLASH_LBRACK,
  [anon_sym_BSLASH_RBRACK] = anon_sym_BSLASH_RBRACK,
  [sym_instrument_string_number] = sym_instrument_string_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_fragment_token1] = aux_sym_string_fragment_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [aux_sym_scheme_comment_token1] = aux_sym_scheme_comment_token1,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym__scheme_block_comment_token1] = aux_sym__scheme_block_comment_token1,
  [aux_sym__scheme_block_comment_token2] = aux_sym__scheme_block_comment_token2,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [sym_scheme_boolean] = sym_scheme_boolean,
  [sym_scheme_character] = sym_scheme_character,
  [aux_sym_scheme_number_token1] = aux_sym_scheme_number_token1,
  [anon_sym_POUND_COLON] = anon_sym_POUND_COLON,
  [sym_scheme_keyword_name] = sym_scheme_keyword_name,
  [sym_scheme_escape_sequence] = sym_scheme_escape_sequence,
  [sym_scheme_symbol] = sym_scheme_symbol,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_POUNDvu8_LPAREN] = anon_sym_POUNDvu8_LPAREN,
  [sym_lilypond_program] = sym_lilypond_program,
  [sym__expression_component] = sym__expression_component,
  [sym__assignment] = sym__assignment,
  [sym_assignment_lhs] = sym_assignment_lhs,
  [sym_named_context] = sym_named_context,
  [sym_expression_block] = sym_expression_block,
  [sym_parallel_music] = sym_parallel_music,
  [sym_chord] = sym_chord,
  [sym_property_expression] = sym_property_expression,
  [sym_punctuation] = sym_punctuation,
  [sym_dynamic] = sym_dynamic,
  [sym_ligature] = sym_ligature,
  [sym_string] = sym_string,
  [sym_string_fragment] = sym_string_fragment,
  [sym__octave_check] = sym__octave_check,
  [sym_embedded_scheme] = sym_embedded_scheme,
  [sym_embedded_scheme_text] = sym_embedded_scheme_text,
  [sym_scheme_embedded_lilypond] = sym_scheme_embedded_lilypond,
  [sym__scheme_token] = sym__scheme_token,
  [sym_scheme_comment] = sym_scheme_comment,
  [sym__scheme_block_comment] = sym__scheme_block_comment,
  [sym__scheme_datum] = sym__scheme_datum,
  [sym__scheme_simple_datum] = sym__scheme_simple_datum,
  [sym_scheme_number] = sym_scheme_number,
  [sym_scheme_keyword] = sym_scheme_keyword,
  [sym_scheme_string] = sym_scheme_string,
  [sym_scheme_string_fragment] = sym_scheme_string_fragment,
  [sym__scheme_compound_datum] = sym__scheme_compound_datum,
  [sym_scheme_list] = sym_scheme_list,
  [sym_scheme_quote] = sym_scheme_quote,
  [sym_scheme_quasiquote] = sym_scheme_quasiquote,
  [sym_scheme_unquote] = sym_scheme_unquote,
  [sym_scheme_unquote_splicing] = sym_scheme_unquote_splicing,
  [sym_scheme_vector] = sym_scheme_vector,
  [sym_scheme_byte_vector] = sym_scheme_byte_vector,
  [aux_sym_lilypond_program_repeat1] = aux_sym_lilypond_program_repeat1,
  [aux_sym_parallel_music_repeat1] = aux_sym_parallel_music_repeat1,
  [aux_sym_chord_repeat1] = aux_sym_chord_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__octave_check_repeat1] = aux_sym__octave_check_repeat1,
  [aux_sym__octave_check_repeat2] = aux_sym__octave_check_repeat2,
  [aux_sym_embedded_scheme_text_repeat1] = aux_sym_embedded_scheme_text_repeat1,
  [aux_sym__scheme_block_comment_repeat1] = aux_sym__scheme_block_comment_repeat1,
  [aux_sym_scheme_string_repeat1] = aux_sym_scheme_string_repeat1,
  [aux_sym_scheme_list_repeat1] = aux_sym_scheme_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHnew] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASHcontext] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_escaped_word] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_fraction] = {
    .visible = true,
    .named = true,
  },
  [sym_unsigned_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_instrument_string_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_scheme_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__scheme_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__scheme_block_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_scheme_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_character] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_scheme_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_scheme_keyword_name] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDvu8_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_lilypond_program] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_component] = {
    .visible = false,
    .named = true,
  },
  [sym__assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_lhs] = {
    .visible = true,
    .named = true,
  },
  [sym_named_context] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_block] = {
    .visible = true,
    .named = true,
  },
  [sym_parallel_music] = {
    .visible = true,
    .named = true,
  },
  [sym_chord] = {
    .visible = true,
    .named = true,
  },
  [sym_property_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic] = {
    .visible = true,
    .named = true,
  },
  [sym_ligature] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__octave_check] = {
    .visible = false,
    .named = true,
  },
  [sym_embedded_scheme] = {
    .visible = true,
    .named = true,
  },
  [sym_embedded_scheme_text] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_embedded_lilypond] = {
    .visible = true,
    .named = true,
  },
  [sym__scheme_token] = {
    .visible = false,
    .named = true,
  },
  [sym_scheme_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__scheme_block_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__scheme_datum] = {
    .visible = false,
    .named = true,
  },
  [sym__scheme_simple_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_scheme_number] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_string] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__scheme_compound_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_scheme_list] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_unquote_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_byte_vector] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_lilypond_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parallel_music_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chord_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__octave_check_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__octave_check_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_embedded_scheme_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__scheme_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scheme_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scheme_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_punctuation,
  },
  [2] = {
    [0] = sym_punctuation,
    [1] = sym_punctuation,
  },
  [3] = {
    [0] = sym_punctuation,
  },
  [4] = {
    [2] = sym_punctuation,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 3,
  [6] = 6,
  [7] = 4,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 13,
  [14] = 10,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 16,
  [20] = 20,
  [21] = 20,
  [22] = 16,
  [23] = 11,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 28,
  [34] = 34,
  [35] = 35,
  [36] = 25,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 24,
  [42] = 27,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 47,
  [74] = 56,
  [75] = 43,
  [76] = 44,
  [77] = 64,
  [78] = 46,
  [79] = 39,
  [80] = 66,
  [81] = 30,
  [82] = 68,
  [83] = 69,
  [84] = 31,
  [85] = 37,
  [86] = 72,
  [87] = 70,
  [88] = 67,
  [89] = 65,
  [90] = 63,
  [91] = 61,
  [92] = 59,
  [93] = 48,
  [94] = 58,
  [95] = 40,
  [96] = 55,
  [97] = 29,
  [98] = 53,
  [99] = 62,
  [100] = 52,
  [101] = 57,
  [102] = 54,
  [103] = 60,
  [104] = 71,
  [105] = 32,
  [106] = 34,
  [107] = 35,
  [108] = 26,
  [109] = 38,
  [110] = 45,
  [111] = 51,
  [112] = 49,
  [113] = 50,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 118,
  [121] = 121,
  [122] = 122,
  [123] = 118,
  [124] = 121,
  [125] = 122,
  [126] = 119,
  [127] = 127,
  [128] = 117,
  [129] = 127,
  [130] = 119,
  [131] = 117,
  [132] = 121,
  [133] = 127,
  [134] = 122,
  [135] = 135,
  [136] = 135,
  [137] = 137,
  [138] = 138,
  [139] = 138,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 144,
  [146] = 143,
  [147] = 147,
  [148] = 138,
  [149] = 147,
  [150] = 147,
  [151] = 143,
  [152] = 144,
  [153] = 142,
  [154] = 141,
  [155] = 140,
  [156] = 135,
  [157] = 142,
  [158] = 137,
  [159] = 137,
  [160] = 141,
  [161] = 161,
  [162] = 161,
  [163] = 163,
  [164] = 30,
  [165] = 43,
  [166] = 67,
  [167] = 70,
  [168] = 72,
  [169] = 31,
  [170] = 69,
  [171] = 68,
  [172] = 66,
  [173] = 48,
  [174] = 47,
  [175] = 46,
  [176] = 44,
  [177] = 65,
  [178] = 40,
  [179] = 39,
  [180] = 37,
  [181] = 181,
  [182] = 63,
  [183] = 183,
  [184] = 45,
  [185] = 61,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 187,
  [190] = 188,
  [191] = 191,
  [192] = 192,
  [193] = 192,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 195,
  [198] = 196,
  [199] = 199,
  [200] = 196,
  [201] = 195,
  [202] = 194,
  [203] = 203,
  [204] = 181,
  [205] = 205,
  [206] = 205,
  [207] = 183,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 210,
  [212] = 212,
  [213] = 213,
  [214] = 212,
  [215] = 215,
  [216] = 216,
  [217] = 213,
  [218] = 215,
  [219] = 219,
  [220] = 220,
  [221] = 215,
  [222] = 216,
  [223] = 220,
};

static inline bool sym_comment_character_set_1(int32_t c) {
  return (c < '`'
    ? (c < '\''
      ? (c < ' '
        ? (c < 11
          ? c == '\t'
          : c <= '\f')
        : (c <= ' ' || (c >= '"' && c <= '#')))
      : (c <= ')' || (c < ';'
        ? c == ','
        : (c <= ';' || (c >= '[' && c <= ']')))))
    : (c <= '`' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? c == '}'
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static inline bool sym_comment_character_set_2(int32_t c) {
  return (c < '{'
    ? (c < '\''
      ? (c < ' '
        ? (c < 11
          ? c == '\t'
          : c <= '\r')
        : (c <= ' ' || (c >= '"' && c <= '#')))
      : (c <= ')' || (c < '['
        ? (c < ';'
          ? c == ','
          : c <= ';')
        : (c <= ']' || c == '`'))))
    : (c <= '{' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? c == '}'
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static inline bool sym_scheme_character_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static inline bool sym_scheme_keyword_name_character_set_1(int32_t c) {
  return (c < '{'
    ? (c < ','
      ? (c < '"'
        ? (c < 11
          ? c == 0
          : c <= 11)
        : (c <= '#' || (c >= '\'' && c <= ')')))
      : (c <= ',' || (c < '['
        ? c == ';'
        : (c <= ']' || c == '`'))))
    : (c <= '{' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? c == '}'
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static inline bool sym_scheme_symbol_character_set_1(int32_t c) {
  return (c < 5760
    ? (c < '{'
      ? (c < 11
        ? c == 0
        : (c <= 11 || (c >= '[' && c <= ']')))
      : (c <= '{' || (c < 160
        ? c == '}'
        : c <= 160)))
    : (c <= 5760 || (c < 8239
      ? (c < 8232
        ? (c >= 8192 && c <= 8202)
        : c <= 8233)
      : (c <= 8239 || (c < 12288
        ? c == 8287
        : c <= 12288)))));
}

static inline bool sym_scheme_symbol_character_set_2(int32_t c) {
  return (c < '{'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || c == '"'))
      : (c <= ')' || (c < '['
        ? (c < ';'
          ? c == ','
          : c <= ';')
        : (c <= ']' || c == '`'))))
    : (c <= '{' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? c == '}'
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static inline bool sym_scheme_symbol_character_set_3(int32_t c) {
  return (c < '{'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || (c >= '"' && c <= '#')))
      : (c <= ')' || (c < '['
        ? (c < ';'
          ? c == ','
          : c <= ';')
        : (c <= ']' || c == '`'))))
    : (c <= '{' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? c == '}'
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(171);
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '%') ADVANCE(174);
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == '(') ADVANCE(214);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == '*') ADVANCE(209);
      if (lookahead == '+') ADVANCE(212);
      if (lookahead == ',') ADVANCE(206);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '<') ADVANCE(185);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '?') ADVANCE(207);
      if (lookahead == '[') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(219);
      if (lookahead == '^') ADVANCE(210);
      if (lookahead == '_') ADVANCE(211);
      if (lookahead == '`') ADVANCE(393);
      if (lookahead == '{') ADVANCE(180);
      if (lookahead == '|') ADVANCE(222);
      if (lookahead == '}') ADVANCE(181);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(168)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(200);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(355);
      if (lookahead == '!') ADVANCE(225);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '>') ADVANCE(224);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == 'x') ADVANCE(239);
      if (lookahead == '=' ||
          lookahead == '^') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(240);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(225);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '>') ADVANCE(224);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == '=' ||
          lookahead == '^') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(225);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == '<') ADVANCE(223);
      if (lookahead == '>') ADVANCE(224);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == '=' ||
          lookahead == '^') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '%') ADVANCE(173);
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == '(') ADVANCE(214);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == ',') ADVANCE(206);
      if (lookahead == '.') ADVANCE(384);
      if (lookahead == ';') ADVANCE(246);
      if (lookahead == '`') ADVANCE(393);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (!sym_scheme_symbol_character_set_1(lookahead)) ADVANCE(392);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '%') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '%') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(290);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '%') ADVANCE(174);
      if (lookahead == '|') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(252);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(313);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (!sym_scheme_keyword_name_character_set_1(lookahead)) ADVANCE(354);
      END_STATE();
    case 32:
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == ';') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == 'v') ADVANCE(53);
      if (lookahead == '{') ADVANCE(244);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(7);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(21);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(254);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 33:
      if (lookahead == '(') ADVANCE(396);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(345);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == '0') ADVANCE(279);
      END_STATE();
    case 46:
      if (lookahead == '0') ADVANCE(338);
      END_STATE();
    case 47:
      if (lookahead == '0') ADVANCE(94);
      END_STATE();
    case 48:
      if (lookahead == '0') ADVANCE(335);
      END_STATE();
    case 49:
      if (lookahead == '0') ADVANCE(339);
      END_STATE();
    case 50:
      if (lookahead == '0') ADVANCE(340);
      END_STATE();
    case 51:
      if (lookahead == '8') ADVANCE(33);
      END_STATE();
    case 52:
      if (lookahead == ';') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'x') ADVANCE(160);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 55:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(290);
      END_STATE();
    case 56:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(313);
      END_STATE();
    case 57:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 58:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 59:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(319);
      END_STATE();
    case 60:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      END_STATE();
    case 61:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 62:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 63:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 64:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(258);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(259);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(275);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(272);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(273);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(268);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(260);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(274);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(277);
      if (!sym_scheme_character_character_set_1(lookahead)) ADVANCE(256);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(55);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(35);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 86:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 87:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 88:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 89:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 90:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 91:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 92:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(342);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(298);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(319);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(14);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(315);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(347);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 105:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(256);
      END_STATE();
    case 106:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(128);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 112:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(256);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 123:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 124:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 125:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(256);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 128:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 134:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 135:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(110);
      END_STATE();
    case 136:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(256);
      END_STATE();
    case 137:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(303);
      END_STATE();
    case 138:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(307);
      END_STATE();
    case 139:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(309);
      END_STATE();
    case 140:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(16);
      END_STATE();
    case 141:
      if (lookahead == 'B' ||
          lookahead == 'X' ||
          lookahead == 'b' ||
          lookahead == 'x') ADVANCE(256);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 146:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(256);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(317);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(310);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(17);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(331);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 165:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(200);
      END_STATE();
    case 166:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 167:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 168:
      if (eof) ADVANCE(171);
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '%') ADVANCE(174);
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == '(') ADVANCE(214);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == '*') ADVANCE(209);
      if (lookahead == '+') ADVANCE(212);
      if (lookahead == ',') ADVANCE(206);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '<') ADVANCE(185);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '?') ADVANCE(207);
      if (lookahead == '[') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(219);
      if (lookahead == '^') ADVANCE(210);
      if (lookahead == '_') ADVANCE(211);
      if (lookahead == '`') ADVANCE(393);
      if (lookahead == '{') ADVANCE(180);
      if (lookahead == '|') ADVANCE(222);
      if (lookahead == '}') ADVANCE(181);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(168)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(200);
      END_STATE();
    case 169:
      if (eof) ADVANCE(171);
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '%') ADVANCE(174);
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == '(') ADVANCE(214);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == '*') ADVANCE(209);
      if (lookahead == '+') ADVANCE(212);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '<') ADVANCE(185);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(188);
      if (lookahead == '?') ADVANCE(207);
      if (lookahead == '[') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(219);
      if (lookahead == '^') ADVANCE(210);
      if (lookahead == '_') ADVANCE(211);
      if (lookahead == '{') ADVANCE(180);
      if (lookahead == '|') ADVANCE(222);
      if (lookahead == '}') ADVANCE(181);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(169)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(200);
      END_STATE();
    case 170:
      if (eof) ADVANCE(171);
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '%') ADVANCE(174);
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == '(') ADVANCE(214);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == '*') ADVANCE(209);
      if (lookahead == '+') ADVANCE(212);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '<') ADVANCE(185);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead == '?') ADVANCE(207);
      if (lookahead == '[') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(219);
      if (lookahead == '^') ADVANCE(210);
      if (lookahead == '_') ADVANCE(211);
      if (lookahead == '{') ADVANCE(180);
      if (lookahead == '|') ADVANCE(222);
      if (lookahead == '}') ADVANCE(181);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(200);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(30);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_comment);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BSLASHnew);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BSLASHcontext);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(182);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(184);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_escaped_word);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_escaped_word);
      if (lookahead == ';') ADVANCE(355);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_escaped_word);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_escaped_word);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_escaped_word);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_escaped_word);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_escaped_word);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_escaped_word);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_escaped_word);
      if (lookahead == 'w') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_escaped_word);
      if (lookahead == 'x') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_escaped_word);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_fraction);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_unsigned_integer);
      if (lookahead == '/') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(394);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_BSLASH_LPAREN);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BSLASH_RPAREN);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_BSLASH_LT);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_BSLASH_GT);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_BSLASH_BANG);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_instrument_string_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_string_fragment_token1);
      if (lookahead == '\n') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_string_fragment_token1);
      if (lookahead == '%') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_string_fragment_token1);
      if (lookahead == '%') ADVANCE(232);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_string_fragment_token1);
      if (lookahead == '%') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_string_fragment_token1);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(230);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_string_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(199);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '{') ADVANCE(244);
      if (lookahead == '}') ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '}') ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_scheme_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__scheme_block_comment_token1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__scheme_block_comment_token2);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__scheme_block_comment_token2);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '%') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__scheme_block_comment_token2);
      if (lookahead == '|') ADVANCE(247);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_scheme_boolean);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_scheme_boolean);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_scheme_boolean);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_scheme_character);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'P' ||
          lookahead == 'l' ||
          lookahead == 'p') ADVANCE(256);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(256);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(256);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(256);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(256);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(256);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'F' ||
          lookahead == 'S' ||
          lookahead == 'f' ||
          lookahead == 's') ADVANCE(256);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'I' ||
          lookahead == 'S' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(256);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(263);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(74);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_scheme_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_scheme_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '/') ADVANCE(384);
      if (lookahead == '@') ADVANCE(361);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(364);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (!sym_scheme_symbol_character_set_2(lookahead)) ADVANCE(392);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '@') ADVANCE(361);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(364);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (!sym_scheme_symbol_character_set_2(lookahead)) ADVANCE(392);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead == '@') ADVANCE(361);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (!sym_scheme_symbol_character_set_2(lookahead)) ADVANCE(392);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(62);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '@') ADVANCE(361);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (!sym_scheme_symbol_character_set_2(lookahead)) ADVANCE(392);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(62);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(388);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (!sym_scheme_symbol_character_set_2(lookahead)) ADVANCE(392);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(156);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(156);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(63);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(300);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (!sym_scheme_symbol_character_set_2(lookahead)) ADVANCE(392);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(300);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(63);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(300);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '/') ADVANCE(139);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(314);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(314);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '/') ADVANCE(149);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '/') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(322);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(322);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(328);
      if (lookahead == '/') ADVANCE(163);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(328);
      if (lookahead == '/') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(361);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(361);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(361);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(375);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(376);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_POUND_COLON);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_scheme_keyword_name);
      if (lookahead == '{') ADVANCE(30);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_scheme_keyword_name);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_scheme_keyword_name);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_scheme_escape_sequence);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(357);
      if (lookahead == '/') ADVANCE(389);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (!sym_scheme_symbol_character_set_2(lookahead)) ADVANCE(392);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (!sym_scheme_symbol_character_set_2(lookahead)) ADVANCE(392);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(366);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(367);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(388);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(388);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(365);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(389);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '0') ADVANCE(350);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '0') ADVANCE(333);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '0') ADVANCE(379);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(358);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(360);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(363);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (!sym_scheme_symbol_character_set_3(lookahead)) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_POUNDvu8_LPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 170},
  [2] = {.lex_state = 170},
  [3] = {.lex_state = 169},
  [4] = {.lex_state = 169},
  [5] = {.lex_state = 169},
  [6] = {.lex_state = 169},
  [7] = {.lex_state = 169},
  [8] = {.lex_state = 169},
  [9] = {.lex_state = 169},
  [10] = {.lex_state = 170},
  [11] = {.lex_state = 170},
  [12] = {.lex_state = 170},
  [13] = {.lex_state = 169},
  [14] = {.lex_state = 170},
  [15] = {.lex_state = 170},
  [16] = {.lex_state = 170},
  [17] = {.lex_state = 170},
  [18] = {.lex_state = 170},
  [19] = {.lex_state = 170},
  [20] = {.lex_state = 169},
  [21] = {.lex_state = 169},
  [22] = {.lex_state = 170},
  [23] = {.lex_state = 170},
  [24] = {.lex_state = 170},
  [25] = {.lex_state = 170},
  [26] = {.lex_state = 169},
  [27] = {.lex_state = 170},
  [28] = {.lex_state = 170},
  [29] = {.lex_state = 169},
  [30] = {.lex_state = 170},
  [31] = {.lex_state = 170},
  [32] = {.lex_state = 170},
  [33] = {.lex_state = 169},
  [34] = {.lex_state = 170},
  [35] = {.lex_state = 170},
  [36] = {.lex_state = 169},
  [37] = {.lex_state = 170},
  [38] = {.lex_state = 170},
  [39] = {.lex_state = 170},
  [40] = {.lex_state = 170},
  [41] = {.lex_state = 169},
  [42] = {.lex_state = 169},
  [43] = {.lex_state = 170},
  [44] = {.lex_state = 170},
  [45] = {.lex_state = 170},
  [46] = {.lex_state = 170},
  [47] = {.lex_state = 170},
  [48] = {.lex_state = 170},
  [49] = {.lex_state = 170},
  [50] = {.lex_state = 170},
  [51] = {.lex_state = 170},
  [52] = {.lex_state = 170},
  [53] = {.lex_state = 170},
  [54] = {.lex_state = 170},
  [55] = {.lex_state = 170},
  [56] = {.lex_state = 170},
  [57] = {.lex_state = 170},
  [58] = {.lex_state = 170},
  [59] = {.lex_state = 170},
  [60] = {.lex_state = 170},
  [61] = {.lex_state = 170},
  [62] = {.lex_state = 170},
  [63] = {.lex_state = 170},
  [64] = {.lex_state = 170},
  [65] = {.lex_state = 170},
  [66] = {.lex_state = 170},
  [67] = {.lex_state = 170},
  [68] = {.lex_state = 170},
  [69] = {.lex_state = 170},
  [70] = {.lex_state = 170},
  [71] = {.lex_state = 170},
  [72] = {.lex_state = 170},
  [73] = {.lex_state = 169},
  [74] = {.lex_state = 169},
  [75] = {.lex_state = 169},
  [76] = {.lex_state = 169},
  [77] = {.lex_state = 169},
  [78] = {.lex_state = 169},
  [79] = {.lex_state = 169},
  [80] = {.lex_state = 169},
  [81] = {.lex_state = 169},
  [82] = {.lex_state = 169},
  [83] = {.lex_state = 169},
  [84] = {.lex_state = 169},
  [85] = {.lex_state = 169},
  [86] = {.lex_state = 169},
  [87] = {.lex_state = 169},
  [88] = {.lex_state = 169},
  [89] = {.lex_state = 169},
  [90] = {.lex_state = 169},
  [91] = {.lex_state = 169},
  [92] = {.lex_state = 169},
  [93] = {.lex_state = 169},
  [94] = {.lex_state = 169},
  [95] = {.lex_state = 169},
  [96] = {.lex_state = 169},
  [97] = {.lex_state = 169},
  [98] = {.lex_state = 169},
  [99] = {.lex_state = 169},
  [100] = {.lex_state = 169},
  [101] = {.lex_state = 169},
  [102] = {.lex_state = 169},
  [103] = {.lex_state = 169},
  [104] = {.lex_state = 169},
  [105] = {.lex_state = 169},
  [106] = {.lex_state = 169},
  [107] = {.lex_state = 169},
  [108] = {.lex_state = 169},
  [109] = {.lex_state = 169},
  [110] = {.lex_state = 169},
  [111] = {.lex_state = 169},
  [112] = {.lex_state = 169},
  [113] = {.lex_state = 169},
  [114] = {.lex_state = 169},
  [115] = {.lex_state = 169},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 19},
  [188] = {.lex_state = 19},
  [189] = {.lex_state = 19},
  [190] = {.lex_state = 19},
  [191] = {.lex_state = 19},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 19},
  [205] = {.lex_state = 170},
  [206] = {.lex_state = 170},
  [207] = {.lex_state = 19},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 31},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 31},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 31},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BSLASHnew] = ACTIONS(1),
    [anon_sym_BSLASHcontext] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_escaped_word] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_fraction] = ACTIONS(1),
    [sym_unsigned_integer] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(1),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_BSLASH_LT] = ACTIONS(1),
    [anon_sym_BSLASH_GT] = ACTIONS(1),
    [anon_sym_BSLASH_BANG] = ACTIONS(1),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(1),
    [sym_instrument_string_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_POUND_RBRACE] = ACTIONS(1),
    [sym_scheme_character] = ACTIONS(1),
    [sym_scheme_escape_sequence] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_lilypond_program] = STATE(219),
    [sym__expression_component] = STATE(15),
    [sym__assignment] = STATE(15),
    [sym_assignment_lhs] = STATE(217),
    [sym_named_context] = STATE(15),
    [sym_expression_block] = STATE(15),
    [sym_parallel_music] = STATE(15),
    [sym_chord] = STATE(15),
    [sym_property_expression] = STATE(32),
    [sym_punctuation] = STATE(15),
    [sym_dynamic] = STATE(15),
    [sym_ligature] = STATE(15),
    [sym_string] = STATE(15),
    [sym__octave_check] = STATE(15),
    [sym_embedded_scheme] = STATE(15),
    [aux_sym_lilypond_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_BSLASHnew] = ACTIONS(9),
    [anon_sym_BSLASHcontext] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [sym_escaped_word] = ACTIONS(17),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_fraction] = ACTIONS(21),
    [sym_unsigned_integer] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_BSLASH_LT] = ACTIONS(23),
    [anon_sym_BSLASH_GT] = ACTIONS(23),
    [anon_sym_BSLASH_BANG] = ACTIONS(23),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(25),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(25),
    [sym_instrument_string_number] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
  },
  [2] = {
    [sym__expression_component] = STATE(2),
    [sym__assignment] = STATE(2),
    [sym_assignment_lhs] = STATE(217),
    [sym_named_context] = STATE(2),
    [sym_expression_block] = STATE(2),
    [sym_parallel_music] = STATE(2),
    [sym_chord] = STATE(2),
    [sym_property_expression] = STATE(32),
    [sym_punctuation] = STATE(2),
    [sym_dynamic] = STATE(2),
    [sym_ligature] = STATE(2),
    [sym_string] = STATE(2),
    [sym__octave_check] = STATE(2),
    [sym_embedded_scheme] = STATE(2),
    [aux_sym_lilypond_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_BSLASHnew] = ACTIONS(36),
    [anon_sym_BSLASHcontext] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_LT_LT] = ACTIONS(42),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [sym_escaped_word] = ACTIONS(48),
    [sym_symbol] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(33),
    [sym_fraction] = ACTIONS(54),
    [sym_unsigned_integer] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_CARET] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(33),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_BSLASH_LT] = ACTIONS(57),
    [anon_sym_BSLASH_GT] = ACTIONS(57),
    [anon_sym_BSLASH_BANG] = ACTIONS(57),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(60),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(60),
    [sym_instrument_string_number] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_POUND_RBRACE] = ACTIONS(31),
  },
  [3] = {
    [sym__expression_component] = STATE(7),
    [sym__assignment] = STATE(7),
    [sym_assignment_lhs] = STATE(213),
    [sym_named_context] = STATE(7),
    [sym_expression_block] = STATE(7),
    [sym_parallel_music] = STATE(7),
    [sym_chord] = STATE(7),
    [sym_property_expression] = STATE(105),
    [sym_punctuation] = STATE(7),
    [sym_dynamic] = STATE(7),
    [sym_ligature] = STATE(7),
    [sym_string] = STATE(7),
    [sym__octave_check] = STATE(7),
    [sym_embedded_scheme] = STATE(7),
    [aux_sym_parallel_music_repeat1] = STATE(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_BSLASHnew] = ACTIONS(71),
    [anon_sym_BSLASHcontext] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(83),
    [sym_escaped_word] = ACTIONS(85),
    [sym_symbol] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_fraction] = ACTIONS(77),
    [sym_unsigned_integer] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_BSLASH_LT] = ACTIONS(89),
    [anon_sym_BSLASH_GT] = ACTIONS(89),
    [anon_sym_BSLASH_BANG] = ACTIONS(89),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(91),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(91),
    [sym_instrument_string_number] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
  },
  [4] = {
    [sym__expression_component] = STATE(6),
    [sym__assignment] = STATE(6),
    [sym_assignment_lhs] = STATE(213),
    [sym_named_context] = STATE(6),
    [sym_expression_block] = STATE(6),
    [sym_parallel_music] = STATE(6),
    [sym_chord] = STATE(6),
    [sym_property_expression] = STATE(105),
    [sym_punctuation] = STATE(6),
    [sym_dynamic] = STATE(6),
    [sym_ligature] = STATE(6),
    [sym_string] = STATE(6),
    [sym__octave_check] = STATE(6),
    [sym_embedded_scheme] = STATE(6),
    [aux_sym_parallel_music_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_BSLASHnew] = ACTIONS(71),
    [anon_sym_BSLASHcontext] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(83),
    [sym_escaped_word] = ACTIONS(101),
    [sym_symbol] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_fraction] = ACTIONS(97),
    [sym_unsigned_integer] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_BSLASH_LT] = ACTIONS(89),
    [anon_sym_BSLASH_GT] = ACTIONS(89),
    [anon_sym_BSLASH_BANG] = ACTIONS(89),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(91),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(91),
    [sym_instrument_string_number] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
  },
  [5] = {
    [sym__expression_component] = STATE(4),
    [sym__assignment] = STATE(4),
    [sym_assignment_lhs] = STATE(213),
    [sym_named_context] = STATE(4),
    [sym_expression_block] = STATE(4),
    [sym_parallel_music] = STATE(4),
    [sym_chord] = STATE(4),
    [sym_property_expression] = STATE(105),
    [sym_punctuation] = STATE(4),
    [sym_dynamic] = STATE(4),
    [sym_ligature] = STATE(4),
    [sym_string] = STATE(4),
    [sym__octave_check] = STATE(4),
    [sym_embedded_scheme] = STATE(4),
    [aux_sym_parallel_music_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_BSLASHnew] = ACTIONS(71),
    [anon_sym_BSLASHcontext] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(83),
    [sym_escaped_word] = ACTIONS(107),
    [sym_symbol] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_fraction] = ACTIONS(103),
    [sym_unsigned_integer] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_BSLASH_LT] = ACTIONS(89),
    [anon_sym_BSLASH_GT] = ACTIONS(89),
    [anon_sym_BSLASH_BANG] = ACTIONS(89),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(91),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(91),
    [sym_instrument_string_number] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
  },
  [6] = {
    [sym__expression_component] = STATE(6),
    [sym__assignment] = STATE(6),
    [sym_assignment_lhs] = STATE(213),
    [sym_named_context] = STATE(6),
    [sym_expression_block] = STATE(6),
    [sym_parallel_music] = STATE(6),
    [sym_chord] = STATE(6),
    [sym_property_expression] = STATE(105),
    [sym_punctuation] = STATE(6),
    [sym_dynamic] = STATE(6),
    [sym_ligature] = STATE(6),
    [sym_string] = STATE(6),
    [sym__octave_check] = STATE(6),
    [sym_embedded_scheme] = STATE(6),
    [aux_sym_parallel_music_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_BSLASHnew] = ACTIONS(112),
    [anon_sym_BSLASHcontext] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_LT_LT] = ACTIONS(118),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(121),
    [anon_sym_GT_GT] = ACTIONS(124),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(129),
    [sym_escaped_word] = ACTIONS(132),
    [sym_symbol] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_fraction] = ACTIONS(121),
    [sym_unsigned_integer] = ACTIONS(132),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(109),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BSLASH_LT] = ACTIONS(138),
    [anon_sym_BSLASH_GT] = ACTIONS(138),
    [anon_sym_BSLASH_BANG] = ACTIONS(138),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(141),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(141),
    [sym_instrument_string_number] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [anon_sym_POUND] = ACTIONS(147),
  },
  [7] = {
    [sym__expression_component] = STATE(6),
    [sym__assignment] = STATE(6),
    [sym_assignment_lhs] = STATE(213),
    [sym_named_context] = STATE(6),
    [sym_expression_block] = STATE(6),
    [sym_parallel_music] = STATE(6),
    [sym_chord] = STATE(6),
    [sym_property_expression] = STATE(105),
    [sym_punctuation] = STATE(6),
    [sym_dynamic] = STATE(6),
    [sym_ligature] = STATE(6),
    [sym_string] = STATE(6),
    [sym__octave_check] = STATE(6),
    [sym_embedded_scheme] = STATE(6),
    [aux_sym_parallel_music_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_BSLASHnew] = ACTIONS(71),
    [anon_sym_BSLASHcontext] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(83),
    [sym_escaped_word] = ACTIONS(101),
    [sym_symbol] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_fraction] = ACTIONS(97),
    [sym_unsigned_integer] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_BSLASH_LT] = ACTIONS(89),
    [anon_sym_BSLASH_GT] = ACTIONS(89),
    [anon_sym_BSLASH_BANG] = ACTIONS(89),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(91),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(91),
    [sym_instrument_string_number] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
  },
  [8] = {
    [sym__expression_component] = STATE(21),
    [sym__assignment] = STATE(21),
    [sym_assignment_lhs] = STATE(213),
    [sym_named_context] = STATE(21),
    [sym_expression_block] = STATE(21),
    [sym_parallel_music] = STATE(21),
    [sym_chord] = STATE(21),
    [sym_property_expression] = STATE(105),
    [sym_punctuation] = STATE(21),
    [sym_dynamic] = STATE(21),
    [sym_ligature] = STATE(21),
    [sym_string] = STATE(21),
    [sym__octave_check] = STATE(21),
    [sym_embedded_scheme] = STATE(21),
    [aux_sym_chord_repeat1] = STATE(21),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_BSLASHnew] = ACTIONS(71),
    [anon_sym_BSLASHcontext] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(152),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(156),
    [sym_escaped_word] = ACTIONS(158),
    [sym_symbol] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_fraction] = ACTIONS(152),
    [sym_unsigned_integer] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_BSLASH_LT] = ACTIONS(89),
    [anon_sym_BSLASH_GT] = ACTIONS(89),
    [anon_sym_BSLASH_BANG] = ACTIONS(89),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(91),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(91),
    [sym_instrument_string_number] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
  },
  [9] = {
    [sym__expression_component] = STATE(20),
    [sym__assignment] = STATE(20),
    [sym_assignment_lhs] = STATE(213),
    [sym_named_context] = STATE(20),
    [sym_expression_block] = STATE(20),
    [sym_parallel_music] = STATE(20),
    [sym_chord] = STATE(20),
    [sym_property_expression] = STATE(105),
    [sym_punctuation] = STATE(20),
    [sym_dynamic] = STATE(20),
    [sym_ligature] = STATE(20),
    [sym_string] = STATE(20),
    [sym__octave_check] = STATE(20),
    [sym_embedded_scheme] = STATE(20),
    [aux_sym_chord_repeat1] = STATE(20),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_BSLASHnew] = ACTIONS(71),
    [anon_sym_BSLASHcontext] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(160),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(162),
    [sym_escaped_word] = ACTIONS(164),
    [sym_symbol] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_fraction] = ACTIONS(160),
    [sym_unsigned_integer] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_BSLASH_LT] = ACTIONS(89),
    [anon_sym_BSLASH_GT] = ACTIONS(89),
    [anon_sym_BSLASH_BANG] = ACTIONS(89),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(91),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(91),
    [sym_instrument_string_number] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
  },
  [10] = {
    [sym__expression_component] = STATE(2),
    [sym__assignment] = STATE(2),
    [sym_assignment_lhs] = STATE(217),
    [sym_named_context] = STATE(2),
    [sym_expression_block] = STATE(2),
    [sym_parallel_music] = STATE(2),
    [sym_chord] = STATE(2),
    [sym_property_expression] = STATE(32),
    [sym_punctuation] = STATE(2),
    [sym_dynamic] = STATE(2),
    [sym_ligature] = STATE(2),
    [sym_string] = STATE(2),
    [sym__octave_check] = STATE(2),
    [sym_embedded_scheme] = STATE(2),
    [aux_sym_lilypond_program_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_BSLASHnew] = ACTIONS(9),
    [anon_sym_BSLASHcontext] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [sym_escaped_word] = ACTIONS(166),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_fraction] = ACTIONS(168),
    [sym_unsigned_integer] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_BSLASH_LT] = ACTIONS(23),
    [anon_sym_BSLASH_GT] = ACTIONS(23),
    [anon_sym_BSLASH_BANG] = ACTIONS(23),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(25),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(25),
    [sym_instrument_string_number] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(170),
    [anon_sym_POUND_RBRACE] = ACTIONS(172),
  },
  [11] = {
    [sym__expression_component] = STATE(17),
    [sym__assignment] = STATE(17),
    [sym_assignment_lhs] = STATE(217),
    [sym_named_context] = STATE(17),
    [sym_expression_block] = STATE(17),
    [sym_parallel_music] = STATE(17),
    [sym_chord] = STATE(17),
    [sym_property_expression] = STATE(32),
    [sym_punctuation] = STATE(17),
    [sym_dynamic] = STATE(17),
    [sym_ligature] = STATE(17),
    [sym_string] = STATE(17),
    [sym__octave_check] = STATE(17),
    [sym_embedded_scheme] = STATE(17),
    [aux_sym_lilypond_program_repeat1] = STATE(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_BSLASHnew] = ACTIONS(9),
    [anon_sym_BSLASHcontext] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [sym_escaped_word] = ACTIONS(176),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_fraction] = ACTIONS(178),
    [sym_unsigned_integer] = ACTIONS(176),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_BSLASH_LT] = ACTIONS(23),
    [anon_sym_BSLASH_GT] = ACTIONS(23),
    [anon_sym_BSLASH_BANG] = ACTIONS(23),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(25),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(25),
    [sym_instrument_string_number] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
  },
  [12] = {
    [sym__expression_component] = STATE(2),
    [sym__assignment] = STATE(2),
    [sym_assignment_lhs] = STATE(217),
    [sym_named_context] = STATE(2),
    [sym_expression_block] = STATE(2),
    [sym_parallel_music] = STATE(2),
    [sym_chord] = STATE(2),
    [sym_property_expression] = STATE(32),
    [sym_punctuation] = STATE(2),
    [sym_dynamic] = STATE(2),
    [sym_ligature] = STATE(2),
    [sym_string] = STATE(2),
    [sym__octave_check] = STATE(2),
    [sym_embedded_scheme] = STATE(2),
    [aux_sym_lilypond_program_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_BSLASHnew] = ACTIONS(9),
    [anon_sym_BSLASHcontext] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [sym_escaped_word] = ACTIONS(166),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_fraction] = ACTIONS(168),
    [sym_unsigned_integer] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_BSLASH_LT] = ACTIONS(23),
    [anon_sym_BSLASH_GT] = ACTIONS(23),
    [anon_sym_BSLASH_BANG] = ACTIONS(23),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(25),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(25),
    [sym_instrument_string_number] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(170),
    [anon_sym_POUND_RBRACE] = ACTIONS(180),
  },
  [13] = {
    [sym__expression_component] = STATE(13),
    [sym__assignment] = STATE(13),
    [sym_assignment_lhs] = STATE(213),
    [sym_named_context] = STATE(13),
    [sym_expression_block] = STATE(13),
    [sym_parallel_music] = STATE(13),
    [sym_chord] = STATE(13),
    [sym_property_expression] = STATE(105),
    [sym_punctuation] = STATE(13),
    [sym_dynamic] = STATE(13),
    [sym_ligature] = STATE(13),
    [sym_string] = STATE(13),
    [sym__octave_check] = STATE(13),
    [sym_embedded_scheme] = STATE(13),
    [aux_sym_chord_repeat1] = STATE(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_BSLASHnew] = ACTIONS(185),
    [anon_sym_BSLASHcontext] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(194),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_GT] = ACTIONS(203),
    [sym_escaped_word] = ACTIONS(206),
    [sym_symbol] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(182),
    [sym_fraction] = ACTIONS(194),
    [sym_unsigned_integer] = ACTIONS(206),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(182),
    [anon_sym_BANG] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_CARET] = ACTIONS(182),
    [anon_sym__] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_TILDE] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(182),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_RBRACK] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_BSLASH_LT] = ACTIONS(212),
    [anon_sym_BSLASH_GT] = ACTIONS(212),
    [anon_sym_BSLASH_BANG] = ACTIONS(212),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(215),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(215),
    [sym_instrument_string_number] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(218),
    [anon_sym_POUND] = ACTIONS(221),
  },
  [14] = {
    [sym__expression_component] = STATE(2),
    [sym__assignment] = STATE(2),
    [sym_assignment_lhs] = STATE(217),
    [sym_named_context] = STATE(2),
    [sym_expression_block] = STATE(2),
    [sym_parallel_music] = STATE(2),
    [sym_chord] = STATE(2),
    [sym_property_expression] = STATE(32),
    [sym_punctuation] = STATE(2),
    [sym_dynamic] = STATE(2),
    [sym_ligature] = STATE(2),
    [sym_string] = STATE(2),
    [sym__octave_check] = STATE(2),
    [sym_embedded_scheme] = STATE(2),
    [aux_sym_lilypond_program_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_BSLASHnew] = ACTIONS(9),
    [anon_sym_BSLASHcontext] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [sym_escaped_word] = ACTIONS(166),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_fraction] = ACTIONS(168),
    [sym_unsigned_integer] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_BSLASH_LT] = ACTIONS(23),
    [anon_sym_BSLASH_GT] = ACTIONS(23),
    [anon_sym_BSLASH_BANG] = ACTIONS(23),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(25),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(25),
    [sym_instrument_string_number] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(170),
    [anon_sym_POUND_RBRACE] = ACTIONS(224),
  },
  [15] = {
    [sym__expression_component] = STATE(2),
    [sym__assignment] = STATE(2),
    [sym_assignment_lhs] = STATE(217),
    [sym_named_context] = STATE(2),
    [sym_expression_block] = STATE(2),
    [sym_parallel_music] = STATE(2),
    [sym_chord] = STATE(2),
    [sym_property_expression] = STATE(32),
    [sym_punctuation] = STATE(2),
    [sym_dynamic] = STATE(2),
    [sym_ligature] = STATE(2),
    [sym_string] = STATE(2),
    [sym__octave_check] = STATE(2),
    [sym_embedded_scheme] = STATE(2),
    [aux_sym_lilypond_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_BSLASHnew] = ACTIONS(9),
    [anon_sym_BSLASHcontext] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [sym_escaped_word] = ACTIONS(166),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_fraction] = ACTIONS(168),
    [sym_unsigned_integer] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_BSLASH_LT] = ACTIONS(23),
    [anon_sym_BSLASH_GT] = ACTIONS(23),
    [anon_sym_BSLASH_BANG] = ACTIONS(23),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(25),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(25),
    [sym_instrument_string_number] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
  },
  [16] = {
    [sym__expression_component] = STATE(10),
    [sym__assignment] = STATE(10),
    [sym_assignment_lhs] = STATE(217),
    [sym_named_context] = STATE(10),
    [sym_expression_block] = STATE(10),
    [sym_parallel_music] = STATE(10),
    [sym_chord] = STATE(10),
    [sym_property_expression] = STATE(32),
    [sym_punctuation] = STATE(10),
    [sym_dynamic] = STATE(10),
    [sym_ligature] = STATE(10),
    [sym_string] = STATE(10),
    [sym__octave_check] = STATE(10),
    [sym_embedded_scheme] = STATE(10),
    [aux_sym_lilypond_program_repeat1] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_BSLASHnew] = ACTIONS(9),
    [anon_sym_BSLASHcontext] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [sym_escaped_word] = ACTIONS(228),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_fraction] = ACTIONS(230),
    [sym_unsigned_integer] = ACTIONS(228),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_BSLASH_LT] = ACTIONS(23),
    [anon_sym_BSLASH_GT] = ACTIONS(23),
    [anon_sym_BSLASH_BANG] = ACTIONS(23),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(25),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(25),
    [sym_instrument_string_number] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(170),
    [anon_sym_POUND_RBRACE] = ACTIONS(232),
  },
  [17] = {
    [sym__expression_component] = STATE(2),
    [sym__assignment] = STATE(2),
    [sym_assignment_lhs] = STATE(217),
    [sym_named_context] = STATE(2),
    [sym_expression_block] = STATE(2),
    [sym_parallel_music] = STATE(2),
    [sym_chord] = STATE(2),
    [sym_property_expression] = STATE(32),
    [sym_punctuation] = STATE(2),
    [sym_dynamic] = STATE(2),
    [sym_ligature] = STATE(2),
    [sym_string] = STATE(2),
    [sym__octave_check] = STATE(2),
    [sym_embedded_scheme] = STATE(2),
    [aux_sym_lilypond_program_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_BSLASHnew] = ACTIONS(9),
    [anon_sym_BSLASHcontext] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(234),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [sym_escaped_word] = ACTIONS(166),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_fraction] = ACTIONS(168),
    [sym_unsigned_integer] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_BSLASH_LT] = ACTIONS(23),
    [anon_sym_BSLASH_GT] = ACTIONS(23),
    [anon_sym_BSLASH_BANG] = ACTIONS(23),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(25),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(25),
    [sym_instrument_string_number] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
  },
  [18] = {
    [sym__expression_component] = STATE(2),
    [sym__assignment] = STATE(2),
    [sym_assignment_lhs] = STATE(217),
    [sym_named_context] = STATE(2),
    [sym_expression_block] = STATE(2),
    [sym_parallel_music] = STATE(2),
    [sym_chord] = STATE(2),
    [sym_property_expression] = STATE(32),
    [sym_punctuation] = STATE(2),
    [sym_dynamic] = STATE(2),
    [sym_ligature] = STATE(2),
    [sym_string] = STATE(2),
    [sym__octave_check] = STATE(2),
    [sym_embedded_scheme] = STATE(2),
    [aux_sym_lilypond_program_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_BSLASHnew] = ACTIONS(9),
    [anon_sym_BSLASHcontext] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(236),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [sym_escaped_word] = ACTIONS(166),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_fraction] = ACTIONS(168),
    [sym_unsigned_integer] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_BSLASH_LT] = ACTIONS(23),
    [anon_sym_BSLASH_GT] = ACTIONS(23),
    [anon_sym_BSLASH_BANG] = ACTIONS(23),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(25),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(25),
    [sym_instrument_string_number] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
  },
  [19] = {
    [sym__expression_component] = STATE(14),
    [sym__assignment] = STATE(14),
    [sym_assignment_lhs] = STATE(217),
    [sym_named_context] = STATE(14),
    [sym_expression_block] = STATE(14),
    [sym_parallel_music] = STATE(14),
    [sym_chord] = STATE(14),
    [sym_property_expression] = STATE(32),
    [sym_punctuation] = STATE(14),
    [sym_dynamic] = STATE(14),
    [sym_ligature] = STATE(14),
    [sym_string] = STATE(14),
    [sym__octave_check] = STATE(14),
    [sym_embedded_scheme] = STATE(14),
    [aux_sym_lilypond_program_repeat1] = STATE(14),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_BSLASHnew] = ACTIONS(9),
    [anon_sym_BSLASHcontext] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [sym_escaped_word] = ACTIONS(238),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_fraction] = ACTIONS(240),
    [sym_unsigned_integer] = ACTIONS(238),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_BSLASH_LT] = ACTIONS(23),
    [anon_sym_BSLASH_GT] = ACTIONS(23),
    [anon_sym_BSLASH_BANG] = ACTIONS(23),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(25),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(25),
    [sym_instrument_string_number] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(170),
    [anon_sym_POUND_RBRACE] = ACTIONS(242),
  },
  [20] = {
    [sym__expression_component] = STATE(13),
    [sym__assignment] = STATE(13),
    [sym_assignment_lhs] = STATE(213),
    [sym_named_context] = STATE(13),
    [sym_expression_block] = STATE(13),
    [sym_parallel_music] = STATE(13),
    [sym_chord] = STATE(13),
    [sym_property_expression] = STATE(105),
    [sym_punctuation] = STATE(13),
    [sym_dynamic] = STATE(13),
    [sym_ligature] = STATE(13),
    [sym_string] = STATE(13),
    [sym__octave_check] = STATE(13),
    [sym_embedded_scheme] = STATE(13),
    [aux_sym_chord_repeat1] = STATE(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_BSLASHnew] = ACTIONS(71),
    [anon_sym_BSLASHcontext] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(246),
    [sym_escaped_word] = ACTIONS(248),
    [sym_symbol] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_fraction] = ACTIONS(244),
    [sym_unsigned_integer] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_BSLASH_LT] = ACTIONS(89),
    [anon_sym_BSLASH_GT] = ACTIONS(89),
    [anon_sym_BSLASH_BANG] = ACTIONS(89),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(91),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(91),
    [sym_instrument_string_number] = ACTIONS(244),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
  },
  [21] = {
    [sym__expression_component] = STATE(13),
    [sym__assignment] = STATE(13),
    [sym_assignment_lhs] = STATE(213),
    [sym_named_context] = STATE(13),
    [sym_expression_block] = STATE(13),
    [sym_parallel_music] = STATE(13),
    [sym_chord] = STATE(13),
    [sym_property_expression] = STATE(105),
    [sym_punctuation] = STATE(13),
    [sym_dynamic] = STATE(13),
    [sym_ligature] = STATE(13),
    [sym_string] = STATE(13),
    [sym__octave_check] = STATE(13),
    [sym_embedded_scheme] = STATE(13),
    [aux_sym_chord_repeat1] = STATE(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_BSLASHnew] = ACTIONS(71),
    [anon_sym_BSLASHcontext] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(250),
    [sym_escaped_word] = ACTIONS(248),
    [sym_symbol] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_fraction] = ACTIONS(244),
    [sym_unsigned_integer] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(69),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_BSLASH_LT] = ACTIONS(89),
    [anon_sym_BSLASH_GT] = ACTIONS(89),
    [anon_sym_BSLASH_BANG] = ACTIONS(89),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(91),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(91),
    [sym_instrument_string_number] = ACTIONS(244),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
  },
  [22] = {
    [sym__expression_component] = STATE(12),
    [sym__assignment] = STATE(12),
    [sym_assignment_lhs] = STATE(217),
    [sym_named_context] = STATE(12),
    [sym_expression_block] = STATE(12),
    [sym_parallel_music] = STATE(12),
    [sym_chord] = STATE(12),
    [sym_property_expression] = STATE(32),
    [sym_punctuation] = STATE(12),
    [sym_dynamic] = STATE(12),
    [sym_ligature] = STATE(12),
    [sym_string] = STATE(12),
    [sym__octave_check] = STATE(12),
    [sym_embedded_scheme] = STATE(12),
    [aux_sym_lilypond_program_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_BSLASHnew] = ACTIONS(9),
    [anon_sym_BSLASHcontext] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [sym_escaped_word] = ACTIONS(252),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_fraction] = ACTIONS(254),
    [sym_unsigned_integer] = ACTIONS(252),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_BSLASH_LT] = ACTIONS(23),
    [anon_sym_BSLASH_GT] = ACTIONS(23),
    [anon_sym_BSLASH_BANG] = ACTIONS(23),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(25),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(25),
    [sym_instrument_string_number] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(170),
    [anon_sym_POUND_RBRACE] = ACTIONS(256),
  },
  [23] = {
    [sym__expression_component] = STATE(18),
    [sym__assignment] = STATE(18),
    [sym_assignment_lhs] = STATE(217),
    [sym_named_context] = STATE(18),
    [sym_expression_block] = STATE(18),
    [sym_parallel_music] = STATE(18),
    [sym_chord] = STATE(18),
    [sym_property_expression] = STATE(32),
    [sym_punctuation] = STATE(18),
    [sym_dynamic] = STATE(18),
    [sym_ligature] = STATE(18),
    [sym_string] = STATE(18),
    [sym__octave_check] = STATE(18),
    [sym_embedded_scheme] = STATE(18),
    [aux_sym_lilypond_program_repeat1] = STATE(18),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_BSLASHnew] = ACTIONS(9),
    [anon_sym_BSLASHcontext] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(258),
    [anon_sym_LT_LT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [sym_escaped_word] = ACTIONS(260),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_fraction] = ACTIONS(262),
    [sym_unsigned_integer] = ACTIONS(260),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(7),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_BSLASH_LT] = ACTIONS(23),
    [anon_sym_BSLASH_GT] = ACTIONS(23),
    [anon_sym_BSLASH_BANG] = ACTIONS(23),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(25),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(25),
    [sym_instrument_string_number] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      aux_sym__octave_check_repeat1,
    ACTIONS(266), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(264), 35,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [55] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym__octave_check_repeat1,
    ACTIONS(273), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(271), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [108] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_GT_GT,
    ACTIONS(275), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_POUND_RBRACE,
    ACTIONS(280), 7,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(277), 32,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
  [163] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym__octave_check_repeat2,
    ACTIONS(287), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(285), 35,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym__octave_check_repeat2,
    ACTIONS(273), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(271), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [271] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_GT_GT,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_POUND_RBRACE,
    ACTIONS(297), 7,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(294), 32,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
  [326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(300), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(304), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [426] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_EQ,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(312), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(308), 34,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym__octave_check_repeat2,
    ACTIONS(273), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(271), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(316), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(320), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym__octave_check_repeat1,
    ACTIONS(273), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(271), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(324), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(328), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(332), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(336), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [884] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      aux_sym__octave_check_repeat1,
    ACTIONS(266), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(264), 34,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [938] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym__octave_check_repeat2,
    ACTIONS(287), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(285), 34,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(346), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(350), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(354), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(358), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(362), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(366), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(370), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(374), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(378), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(382), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(386), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1542] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(312), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(308), 34,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(393), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(397), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(283), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(403), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(407), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(411), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(415), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(419), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [1996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(423), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [2046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(427), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [2096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(431), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [2146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(435), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [2196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(439), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [2246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(443), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [2296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(447), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [2346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(451), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [2396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(455), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [2446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
      anon_sym_POUND,
    ACTIONS(459), 36,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT_LT,
      anon_sym_DASH,
      anon_sym_GT,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND_RBRACE,
  [2496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(362), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [2545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(397), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [2594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(346), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [2643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(350), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [2692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(427), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [2741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(358), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [2790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(332), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [2839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(435), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [2888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(300), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [2937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(443), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [2986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(447), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(304), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(324), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(459), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(451), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(439), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(431), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(423), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(415), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(407), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(366), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(403), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(336), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(393), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(297), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(294), 34,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(386), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(419), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(382), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(283), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_EQ,
    ACTIONS(466), 1,
      anon_sym_DOT,
    ACTIONS(312), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(308), 33,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [3972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(411), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [4021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(455), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [4070] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_EQ,
    ACTIONS(466), 1,
      anon_sym_DOT,
    ACTIONS(312), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(308), 33,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [4123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(316), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [4172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(320), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [4221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(280), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(277), 34,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [4272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(328), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [4321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(354), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [4370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(378), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [4419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(370), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [4468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(374), 35,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_BSLASH_BSLASH,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [4517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_GT,
    ACTIONS(401), 5,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(283), 34,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [4567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 6,
      anon_sym_BSLASHnew,
      anon_sym_BSLASHcontext,
      anon_sym_LT,
      anon_sym_GT,
      sym_escaped_word,
      sym_unsigned_integer,
    ACTIONS(471), 34,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DASH,
      sym_symbol,
      anon_sym_DOT,
      sym_fraction,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASH_GT,
      anon_sym_BSLASH_BANG,
      anon_sym_BSLASH_LBRACK,
      anon_sym_BSLASH_RBRACK,
      sym_instrument_string_number,
      anon_sym_DQUOTE,
      anon_sym_POUND,
  [4615] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_SQUOTE,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(492), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(495), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(501), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(504), 1,
      anon_sym_POUND_COLON,
    ACTIONS(507), 1,
      sym_scheme_symbol,
    ACTIONS(510), 1,
      anon_sym_BQUOTE,
    ACTIONS(513), 1,
      anon_sym_COMMA_AT,
    ACTIONS(516), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(519), 1,
      anon_sym_POUNDvu8_LPAREN,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(498), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(116), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [4690] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(544), 1,
      sym_scheme_symbol,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(538), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(116), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [4765] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    ACTIONS(558), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(556), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(131), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [4840] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    ACTIONS(564), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(562), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(121), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [4915] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    ACTIONS(570), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(568), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(128), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [4990] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(544), 1,
      sym_scheme_symbol,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(538), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(116), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [5065] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    ACTIONS(578), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(576), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(127), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [5140] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    ACTIONS(584), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(582), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(117), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [5215] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(544), 1,
      sym_scheme_symbol,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(538), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(116), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [5290] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    ACTIONS(592), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(590), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(133), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [5365] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    ACTIONS(598), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(596), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(132), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [5440] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(544), 1,
      sym_scheme_symbol,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(538), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(116), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [5515] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(544), 1,
      sym_scheme_symbol,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(538), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(116), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [5590] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(544), 1,
      sym_scheme_symbol,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(538), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(116), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [5665] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(608), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(124), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [5740] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(544), 1,
      sym_scheme_symbol,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(538), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(116), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [5815] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(544), 1,
      sym_scheme_symbol,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(538), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(116), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [5890] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(544), 1,
      sym_scheme_symbol,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(538), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(116), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [5965] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    ACTIONS(622), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(620), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(129), 17,
      sym_scheme_embedded_lilypond,
      sym__scheme_token,
      sym_scheme_comment,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
      aux_sym_scheme_list_repeat1,
  [6040] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(636), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(638), 1,
      anon_sym_POUND_COLON,
    ACTIONS(640), 1,
      sym_scheme_symbol,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(644), 1,
      anon_sym_COMMA_AT,
    ACTIONS(646), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(648), 1,
      anon_sym_POUNDvu8_LPAREN,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(634), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(147), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(84), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [6113] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(662), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(664), 1,
      anon_sym_POUND_COLON,
    ACTIONS(666), 1,
      sym_scheme_symbol,
    ACTIONS(668), 1,
      anon_sym_BQUOTE,
    ACTIONS(670), 1,
      anon_sym_COMMA_AT,
    ACTIONS(672), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(674), 1,
      anon_sym_POUNDvu8_LPAREN,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(660), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(149), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(31), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [6186] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(636), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(638), 1,
      anon_sym_POUND_COLON,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(644), 1,
      anon_sym_COMMA_AT,
    ACTIONS(646), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(648), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(678), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(676), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(93), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [6259] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(636), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(638), 1,
      anon_sym_POUND_COLON,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(644), 1,
      anon_sym_COMMA_AT,
    ACTIONS(646), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(648), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(682), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(680), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(79), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [6332] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(686), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(684), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(179), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [6405] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(662), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(664), 1,
      anon_sym_POUND_COLON,
    ACTIONS(668), 1,
      anon_sym_BQUOTE,
    ACTIONS(670), 1,
      anon_sym_COMMA_AT,
    ACTIONS(672), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(674), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(690), 1,
      sym_scheme_symbol,
    STATE(49), 1,
      sym_embedded_scheme_text,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(688), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(161), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(50), 13,
      sym_scheme_embedded_lilypond,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [6480] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(636), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(638), 1,
      anon_sym_POUND_COLON,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(644), 1,
      anon_sym_COMMA_AT,
    ACTIONS(646), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(648), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(694), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(692), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(73), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [6553] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(636), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(638), 1,
      anon_sym_POUND_COLON,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(644), 1,
      anon_sym_COMMA_AT,
    ACTIONS(646), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(648), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(698), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(696), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(138), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(83), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [6626] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(702), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(700), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(154), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(182), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [6699] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(706), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(704), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(159), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(185), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [6772] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(662), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(664), 1,
      anon_sym_POUND_COLON,
    ACTIONS(668), 1,
      anon_sym_BQUOTE,
    ACTIONS(670), 1,
      anon_sym_COMMA_AT,
    ACTIONS(672), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(674), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(710), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(708), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(158), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(61), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [6845] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(662), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(664), 1,
      anon_sym_POUND_COLON,
    ACTIONS(668), 1,
      anon_sym_BQUOTE,
    ACTIONS(670), 1,
      anon_sym_COMMA_AT,
    ACTIONS(672), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(674), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(714), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(712), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(160), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(63), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [6918] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(636), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(638), 1,
      anon_sym_POUND_COLON,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(644), 1,
      anon_sym_COMMA_AT,
    ACTIONS(646), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(648), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(718), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(716), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(95), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [6991] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(662), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(664), 1,
      anon_sym_POUND_COLON,
    ACTIONS(668), 1,
      anon_sym_BQUOTE,
    ACTIONS(670), 1,
      anon_sym_COMMA_AT,
    ACTIONS(672), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(674), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(722), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(720), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(39), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [7064] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(662), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(664), 1,
      anon_sym_POUND_COLON,
    ACTIONS(668), 1,
      anon_sym_BQUOTE,
    ACTIONS(670), 1,
      anon_sym_COMMA_AT,
    ACTIONS(672), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(674), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(726), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(724), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(40), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [7137] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(730), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(728), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(178), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [7210] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(636), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(638), 1,
      anon_sym_POUND_COLON,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(644), 1,
      anon_sym_COMMA_AT,
    ACTIONS(646), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(648), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(734), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(732), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(141), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(90), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [7283] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(636), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(638), 1,
      anon_sym_POUND_COLON,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(644), 1,
      anon_sym_COMMA_AT,
    ACTIONS(646), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(648), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(738), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(736), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(137), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(91), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [7356] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(662), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(664), 1,
      anon_sym_POUND_COLON,
    ACTIONS(668), 1,
      anon_sym_BQUOTE,
    ACTIONS(670), 1,
      anon_sym_COMMA_AT,
    ACTIONS(672), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(674), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(742), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(740), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(148), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(69), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [7429] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(746), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(744), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(174), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [7502] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(636), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(638), 1,
      anon_sym_POUND_COLON,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(644), 1,
      anon_sym_COMMA_AT,
    ACTIONS(646), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(648), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(750), 1,
      sym_scheme_symbol,
    STATE(112), 1,
      sym_embedded_scheme_text,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(748), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(162), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(113), 13,
      sym_scheme_embedded_lilypond,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [7577] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(754), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(752), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(150), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(169), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [7650] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(758), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(756), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(139), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(170), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [7723] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(662), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(664), 1,
      anon_sym_POUND_COLON,
    ACTIONS(668), 1,
      anon_sym_BQUOTE,
    ACTIONS(670), 1,
      anon_sym_COMMA_AT,
    ACTIONS(672), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(674), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(762), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(760), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(48), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [7796] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(540), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(542), 1,
      anon_sym_POUND_COLON,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_COMMA_AT,
    ACTIONS(550), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(552), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(766), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(764), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(173), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [7869] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(662), 1,
      aux_sym_scheme_number_token1,
    ACTIONS(664), 1,
      anon_sym_POUND_COLON,
    ACTIONS(668), 1,
      anon_sym_BQUOTE,
    ACTIONS(670), 1,
      anon_sym_COMMA_AT,
    ACTIONS(672), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(674), 1,
      anon_sym_POUNDvu8_LPAREN,
    ACTIONS(770), 1,
      sym_scheme_symbol,
    STATE(186), 1,
      sym__scheme_block_comment,
    ACTIONS(768), 2,
      sym_scheme_boolean,
      sym_scheme_character,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(47), 14,
      sym_scheme_embedded_lilypond,
      sym__scheme_datum,
      sym__scheme_simple_datum,
      sym_scheme_number,
      sym_scheme_keyword,
      sym_scheme_string,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [7942] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
    ACTIONS(668), 1,
      anon_sym_BQUOTE,
    ACTIONS(670), 1,
      anon_sym_COMMA_AT,
    ACTIONS(672), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(674), 1,
      anon_sym_POUNDvu8_LPAREN,
    STATE(186), 1,
      sym__scheme_block_comment,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(64), 8,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [7990] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(536), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(644), 1,
      anon_sym_COMMA_AT,
    ACTIONS(646), 1,
      anon_sym_POUND_LPAREN,
    ACTIONS(648), 1,
      anon_sym_POUNDvu8_LPAREN,
    STATE(186), 1,
      sym__scheme_block_comment,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    STATE(77), 8,
      sym__scheme_compound_datum,
      sym_scheme_list,
      sym_scheme_quote,
      sym_scheme_quasiquote,
      sym_scheme_unquote,
      sym_scheme_unquote_splicing,
      sym_scheme_vector,
      sym_scheme_byte_vector,
  [8038] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(779), 1,
      anon_sym_POUND_PIPE,
    STATE(186), 1,
      sym__scheme_block_comment,
    STATE(163), 2,
      sym_scheme_comment,
      aux_sym_embedded_scheme_text_repeat1,
    ACTIONS(774), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(772), 11,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(300), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(346), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(439), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(451), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(459), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(304), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(447), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(443), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(435), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(366), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(362), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(358), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(350), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(431), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(336), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(332), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(324), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(782), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(423), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(786), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(354), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(415), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 3,
      anon_sym_COMMA,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
    ACTIONS(790), 14,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [8648] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(800), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(798), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(190), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [8666] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(804), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(802), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(191), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [8684] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(808), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(806), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(188), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [8702] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(810), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(802), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(191), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [8720] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(818), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(815), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(191), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [8738] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_DQUOTE,
    ACTIONS(822), 1,
      aux_sym_string_fragment_token1,
    ACTIONS(824), 1,
      sym_escape_sequence,
    STATE(199), 2,
      sym_string_fragment,
      aux_sym_string_repeat1,
  [8755] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(822), 1,
      aux_sym_string_fragment_token1,
    ACTIONS(824), 1,
      sym_escape_sequence,
    ACTIONS(826), 1,
      anon_sym_DQUOTE,
    STATE(199), 2,
      sym_string_fragment,
      aux_sym_string_repeat1,
  [8772] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(822), 1,
      aux_sym_string_fragment_token1,
    ACTIONS(828), 1,
      anon_sym_DQUOTE,
    ACTIONS(830), 1,
      sym_escape_sequence,
    STATE(193), 2,
      sym_string_fragment,
      aux_sym_string_repeat1,
  [8789] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_DQUOTE,
    ACTIONS(834), 1,
      aux_sym_string_fragment_token1,
    ACTIONS(836), 1,
      sym_scheme_escape_sequence,
    STATE(203), 2,
      sym_scheme_string_fragment,
      aux_sym_scheme_string_repeat1,
  [8806] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(834), 1,
      aux_sym_string_fragment_token1,
    ACTIONS(838), 1,
      anon_sym_DQUOTE,
    ACTIONS(840), 1,
      sym_scheme_escape_sequence,
    STATE(201), 2,
      sym_scheme_string_fragment,
      aux_sym_scheme_string_repeat1,
  [8823] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(834), 1,
      aux_sym_string_fragment_token1,
    ACTIONS(836), 1,
      sym_scheme_escape_sequence,
    ACTIONS(842), 1,
      anon_sym_DQUOTE,
    STATE(203), 2,
      sym_scheme_string_fragment,
      aux_sym_scheme_string_repeat1,
  [8840] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(834), 1,
      aux_sym_string_fragment_token1,
    ACTIONS(844), 1,
      anon_sym_DQUOTE,
    ACTIONS(846), 1,
      sym_scheme_escape_sequence,
    STATE(197), 2,
      sym_scheme_string_fragment,
      aux_sym_scheme_string_repeat1,
  [8857] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_DQUOTE,
    ACTIONS(850), 1,
      aux_sym_string_fragment_token1,
    ACTIONS(853), 1,
      sym_escape_sequence,
    STATE(199), 2,
      sym_string_fragment,
      aux_sym_string_repeat1,
  [8874] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(834), 1,
      aux_sym_string_fragment_token1,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      sym_scheme_escape_sequence,
    STATE(195), 2,
      sym_scheme_string_fragment,
      aux_sym_scheme_string_repeat1,
  [8891] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(834), 1,
      aux_sym_string_fragment_token1,
    ACTIONS(836), 1,
      sym_scheme_escape_sequence,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
    STATE(203), 2,
      sym_scheme_string_fragment,
      aux_sym_scheme_string_repeat1,
  [8908] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(822), 1,
      aux_sym_string_fragment_token1,
    ACTIONS(862), 1,
      anon_sym_DQUOTE,
    ACTIONS(864), 1,
      sym_escape_sequence,
    STATE(192), 2,
      sym_string_fragment,
      aux_sym_string_repeat1,
  [8925] = 5,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_DQUOTE,
    ACTIONS(868), 1,
      aux_sym_string_fragment_token1,
    ACTIONS(871), 1,
      sym_scheme_escape_sequence,
    STATE(203), 2,
      sym_scheme_string_fragment,
      aux_sym_scheme_string_repeat1,
  [8942] = 2,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(784), 4,
      anon_sym_POUND_PIPE,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
      anon_sym_PIPE_POUND,
  [8952] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_SQUOTE,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym__octave_check_repeat1,
    STATE(28), 1,
      aux_sym__octave_check_repeat2,
  [8968] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_SQUOTE,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym__octave_check_repeat2,
    STATE(36), 1,
      aux_sym__octave_check_repeat1,
  [8984] = 2,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(788), 4,
      anon_sym_POUND_PIPE,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
      anon_sym_PIPE_POUND,
  [8994] = 3,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_DQUOTE,
    ACTIONS(884), 2,
      aux_sym_string_fragment_token1,
      sym_scheme_escape_sequence,
  [9005] = 3,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(888), 2,
      aux_sym_string_fragment_token1,
      sym_escape_sequence,
  [9016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(890), 1,
      sym_symbol,
    STATE(99), 1,
      sym_string,
  [9029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(892), 1,
      sym_symbol,
    STATE(62), 1,
      sym_string,
  [9042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_symbol,
  [9049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_EQ,
  [9056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym_symbol,
  [9063] = 2,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_scheme_keyword_name,
  [9070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_EQ,
  [9077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_EQ,
  [9084] = 2,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_scheme_keyword_name,
  [9091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      ts_builtin_sym_end,
  [9098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_symbol,
  [9105] = 2,
    ACTIONS(794), 1,
      sym_comment,
    ACTIONS(912), 1,
      sym_scheme_keyword_name,
  [9112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_EQ,
  [9119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(24)] = 0,
  [SMALL_STATE(25)] = 55,
  [SMALL_STATE(26)] = 108,
  [SMALL_STATE(27)] = 163,
  [SMALL_STATE(28)] = 218,
  [SMALL_STATE(29)] = 271,
  [SMALL_STATE(30)] = 326,
  [SMALL_STATE(31)] = 376,
  [SMALL_STATE(32)] = 426,
  [SMALL_STATE(33)] = 480,
  [SMALL_STATE(34)] = 532,
  [SMALL_STATE(35)] = 582,
  [SMALL_STATE(36)] = 632,
  [SMALL_STATE(37)] = 684,
  [SMALL_STATE(38)] = 734,
  [SMALL_STATE(39)] = 784,
  [SMALL_STATE(40)] = 834,
  [SMALL_STATE(41)] = 884,
  [SMALL_STATE(42)] = 938,
  [SMALL_STATE(43)] = 992,
  [SMALL_STATE(44)] = 1042,
  [SMALL_STATE(45)] = 1092,
  [SMALL_STATE(46)] = 1142,
  [SMALL_STATE(47)] = 1192,
  [SMALL_STATE(48)] = 1242,
  [SMALL_STATE(49)] = 1292,
  [SMALL_STATE(50)] = 1342,
  [SMALL_STATE(51)] = 1392,
  [SMALL_STATE(52)] = 1442,
  [SMALL_STATE(53)] = 1492,
  [SMALL_STATE(54)] = 1542,
  [SMALL_STATE(55)] = 1596,
  [SMALL_STATE(56)] = 1646,
  [SMALL_STATE(57)] = 1696,
  [SMALL_STATE(58)] = 1746,
  [SMALL_STATE(59)] = 1796,
  [SMALL_STATE(60)] = 1846,
  [SMALL_STATE(61)] = 1896,
  [SMALL_STATE(62)] = 1946,
  [SMALL_STATE(63)] = 1996,
  [SMALL_STATE(64)] = 2046,
  [SMALL_STATE(65)] = 2096,
  [SMALL_STATE(66)] = 2146,
  [SMALL_STATE(67)] = 2196,
  [SMALL_STATE(68)] = 2246,
  [SMALL_STATE(69)] = 2296,
  [SMALL_STATE(70)] = 2346,
  [SMALL_STATE(71)] = 2396,
  [SMALL_STATE(72)] = 2446,
  [SMALL_STATE(73)] = 2496,
  [SMALL_STATE(74)] = 2545,
  [SMALL_STATE(75)] = 2594,
  [SMALL_STATE(76)] = 2643,
  [SMALL_STATE(77)] = 2692,
  [SMALL_STATE(78)] = 2741,
  [SMALL_STATE(79)] = 2790,
  [SMALL_STATE(80)] = 2839,
  [SMALL_STATE(81)] = 2888,
  [SMALL_STATE(82)] = 2937,
  [SMALL_STATE(83)] = 2986,
  [SMALL_STATE(84)] = 3035,
  [SMALL_STATE(85)] = 3084,
  [SMALL_STATE(86)] = 3133,
  [SMALL_STATE(87)] = 3182,
  [SMALL_STATE(88)] = 3231,
  [SMALL_STATE(89)] = 3280,
  [SMALL_STATE(90)] = 3329,
  [SMALL_STATE(91)] = 3378,
  [SMALL_STATE(92)] = 3427,
  [SMALL_STATE(93)] = 3476,
  [SMALL_STATE(94)] = 3525,
  [SMALL_STATE(95)] = 3574,
  [SMALL_STATE(96)] = 3623,
  [SMALL_STATE(97)] = 3672,
  [SMALL_STATE(98)] = 3723,
  [SMALL_STATE(99)] = 3772,
  [SMALL_STATE(100)] = 3821,
  [SMALL_STATE(101)] = 3870,
  [SMALL_STATE(102)] = 3919,
  [SMALL_STATE(103)] = 3972,
  [SMALL_STATE(104)] = 4021,
  [SMALL_STATE(105)] = 4070,
  [SMALL_STATE(106)] = 4123,
  [SMALL_STATE(107)] = 4172,
  [SMALL_STATE(108)] = 4221,
  [SMALL_STATE(109)] = 4272,
  [SMALL_STATE(110)] = 4321,
  [SMALL_STATE(111)] = 4370,
  [SMALL_STATE(112)] = 4419,
  [SMALL_STATE(113)] = 4468,
  [SMALL_STATE(114)] = 4517,
  [SMALL_STATE(115)] = 4567,
  [SMALL_STATE(116)] = 4615,
  [SMALL_STATE(117)] = 4690,
  [SMALL_STATE(118)] = 4765,
  [SMALL_STATE(119)] = 4840,
  [SMALL_STATE(120)] = 4915,
  [SMALL_STATE(121)] = 4990,
  [SMALL_STATE(122)] = 5065,
  [SMALL_STATE(123)] = 5140,
  [SMALL_STATE(124)] = 5215,
  [SMALL_STATE(125)] = 5290,
  [SMALL_STATE(126)] = 5365,
  [SMALL_STATE(127)] = 5440,
  [SMALL_STATE(128)] = 5515,
  [SMALL_STATE(129)] = 5590,
  [SMALL_STATE(130)] = 5665,
  [SMALL_STATE(131)] = 5740,
  [SMALL_STATE(132)] = 5815,
  [SMALL_STATE(133)] = 5890,
  [SMALL_STATE(134)] = 5965,
  [SMALL_STATE(135)] = 6040,
  [SMALL_STATE(136)] = 6113,
  [SMALL_STATE(137)] = 6186,
  [SMALL_STATE(138)] = 6259,
  [SMALL_STATE(139)] = 6332,
  [SMALL_STATE(140)] = 6405,
  [SMALL_STATE(141)] = 6480,
  [SMALL_STATE(142)] = 6553,
  [SMALL_STATE(143)] = 6626,
  [SMALL_STATE(144)] = 6699,
  [SMALL_STATE(145)] = 6772,
  [SMALL_STATE(146)] = 6845,
  [SMALL_STATE(147)] = 6918,
  [SMALL_STATE(148)] = 6991,
  [SMALL_STATE(149)] = 7064,
  [SMALL_STATE(150)] = 7137,
  [SMALL_STATE(151)] = 7210,
  [SMALL_STATE(152)] = 7283,
  [SMALL_STATE(153)] = 7356,
  [SMALL_STATE(154)] = 7429,
  [SMALL_STATE(155)] = 7502,
  [SMALL_STATE(156)] = 7577,
  [SMALL_STATE(157)] = 7650,
  [SMALL_STATE(158)] = 7723,
  [SMALL_STATE(159)] = 7796,
  [SMALL_STATE(160)] = 7869,
  [SMALL_STATE(161)] = 7942,
  [SMALL_STATE(162)] = 7990,
  [SMALL_STATE(163)] = 8038,
  [SMALL_STATE(164)] = 8073,
  [SMALL_STATE(165)] = 8098,
  [SMALL_STATE(166)] = 8123,
  [SMALL_STATE(167)] = 8148,
  [SMALL_STATE(168)] = 8173,
  [SMALL_STATE(169)] = 8198,
  [SMALL_STATE(170)] = 8223,
  [SMALL_STATE(171)] = 8248,
  [SMALL_STATE(172)] = 8273,
  [SMALL_STATE(173)] = 8298,
  [SMALL_STATE(174)] = 8323,
  [SMALL_STATE(175)] = 8348,
  [SMALL_STATE(176)] = 8373,
  [SMALL_STATE(177)] = 8398,
  [SMALL_STATE(178)] = 8423,
  [SMALL_STATE(179)] = 8448,
  [SMALL_STATE(180)] = 8473,
  [SMALL_STATE(181)] = 8498,
  [SMALL_STATE(182)] = 8523,
  [SMALL_STATE(183)] = 8548,
  [SMALL_STATE(184)] = 8573,
  [SMALL_STATE(185)] = 8598,
  [SMALL_STATE(186)] = 8623,
  [SMALL_STATE(187)] = 8648,
  [SMALL_STATE(188)] = 8666,
  [SMALL_STATE(189)] = 8684,
  [SMALL_STATE(190)] = 8702,
  [SMALL_STATE(191)] = 8720,
  [SMALL_STATE(192)] = 8738,
  [SMALL_STATE(193)] = 8755,
  [SMALL_STATE(194)] = 8772,
  [SMALL_STATE(195)] = 8789,
  [SMALL_STATE(196)] = 8806,
  [SMALL_STATE(197)] = 8823,
  [SMALL_STATE(198)] = 8840,
  [SMALL_STATE(199)] = 8857,
  [SMALL_STATE(200)] = 8874,
  [SMALL_STATE(201)] = 8891,
  [SMALL_STATE(202)] = 8908,
  [SMALL_STATE(203)] = 8925,
  [SMALL_STATE(204)] = 8942,
  [SMALL_STATE(205)] = 8952,
  [SMALL_STATE(206)] = 8968,
  [SMALL_STATE(207)] = 8984,
  [SMALL_STATE(208)] = 8994,
  [SMALL_STATE(209)] = 9005,
  [SMALL_STATE(210)] = 9016,
  [SMALL_STATE(211)] = 9029,
  [SMALL_STATE(212)] = 9042,
  [SMALL_STATE(213)] = 9049,
  [SMALL_STATE(214)] = 9056,
  [SMALL_STATE(215)] = 9063,
  [SMALL_STATE(216)] = 9070,
  [SMALL_STATE(217)] = 9077,
  [SMALL_STATE(218)] = 9084,
  [SMALL_STATE(219)] = 9091,
  [SMALL_STATE(220)] = 9098,
  [SMALL_STATE(221)] = 9105,
  [SMALL_STATE(222)] = 9112,
  [SMALL_STATE(223)] = 9119,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lilypond_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lilypond_program_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_program_repeat1, 2), SHIFT_REPEAT(57),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lilypond_program_repeat1, 2), SHIFT_REPEAT(220),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_program_repeat1, 2), SHIFT_REPEAT(23),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_program_repeat1, 2), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lilypond_program_repeat1, 2), SHIFT_REPEAT(8),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lilypond_program_repeat1, 2), SHIFT_REPEAT(2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_program_repeat1, 2), SHIFT_REPEAT(54),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_program_repeat1, 2), SHIFT_REPEAT(2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_program_repeat1, 2), SHIFT_REPEAT(60),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_program_repeat1, 2), SHIFT_REPEAT(71),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_program_repeat1, 2), SHIFT_REPEAT(194),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_lilypond_program_repeat1, 2), SHIFT_REPEAT(140),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parallel_music_repeat1, 2), SHIFT_REPEAT(101),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parallel_music_repeat1, 2), SHIFT_REPEAT(223),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parallel_music_repeat1, 2), SHIFT_REPEAT(11),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parallel_music_repeat1, 2), SHIFT_REPEAT(3),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parallel_music_repeat1, 2), SHIFT_REPEAT(6),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parallel_music_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parallel_music_repeat1, 2), SHIFT_REPEAT(9),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parallel_music_repeat1, 2), SHIFT_REPEAT(101),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parallel_music_repeat1, 2), SHIFT_REPEAT(6),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parallel_music_repeat1, 2), SHIFT_REPEAT(102),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parallel_music_repeat1, 2), SHIFT_REPEAT(103),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parallel_music_repeat1, 2), SHIFT_REPEAT(104),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parallel_music_repeat1, 2), SHIFT_REPEAT(202),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parallel_music_repeat1, 2), SHIFT_REPEAT(155),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2), SHIFT_REPEAT(101),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chord_repeat1, 2), SHIFT_REPEAT(223),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2), SHIFT_REPEAT(11),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2), SHIFT_REPEAT(3),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2), SHIFT_REPEAT(13),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chord_repeat1, 2), SHIFT_REPEAT(9),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2), SHIFT_REPEAT(114),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chord_repeat1, 2), SHIFT_REPEAT(101),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chord_repeat1, 2), SHIFT_REPEAT(13),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2), SHIFT_REPEAT(102),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2), SHIFT_REPEAT(103),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2), SHIFT_REPEAT(104),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2), SHIFT_REPEAT(202),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2), SHIFT_REPEAT(155),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lilypond_program, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octave_check_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__octave_check_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octave_check_repeat1, 2), SHIFT_REPEAT(55),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octave_check, 3, .production_id = 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octave_check, 3, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_punctuation, 1), REDUCE(sym_chord, 2),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_punctuation, 1), REDUCE(sym_chord, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octave_check_repeat2, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__octave_check_repeat2, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octave_check_repeat2, 2), SHIFT_REPEAT(56),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord, 3),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_punctuation, 1), REDUCE(sym_chord, 3),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_punctuation, 1), REDUCE(sym_chord, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_vector, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_vector, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_quasiquote, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_quasiquote, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_component, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_lhs, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_component, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_block, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_block, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel_music, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel_music, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_byte_vector, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_byte_vector, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_unquote_splicing, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_unquote_splicing, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_quasiquote, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_quasiquote, 3),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octave_check_repeat1, 2), SHIFT_REPEAT(96),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octave_check_repeat2, 2), SHIFT_REPEAT(74),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_embedded_lilypond, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_embedded_lilypond, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_string, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_string, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_number, 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_number, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_list, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_list, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_unquote, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_unquote, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_quote, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_quote, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_scheme, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embedded_scheme, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_scheme_text, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embedded_scheme_text, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment, 2, .production_id = 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment, 2, .production_id = 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_block, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_block, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel_music, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel_music, 3),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assignment_lhs, 1), SHIFT(205),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octave_check_repeat1, 1, .production_id = 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__octave_check_repeat1, 1, .production_id = 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octave_check_repeat2, 1, .production_id = 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__octave_check_repeat2, 1, .production_id = 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_expression, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_expression, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_quote, 2),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_quote, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_context, 4, .production_id = 4),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_context, 4, .production_id = 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_unquote, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_unquote, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_scheme_text, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embedded_scheme_text, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_list, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_list, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_byte_vector, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_byte_vector, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_string, 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_string, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_vector, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_vector, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_unquote_splicing, 2),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_unquote_splicing, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_embedded_lilypond, 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_embedded_lilypond, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ligature, 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ligature, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_keyword, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_keyword, 2),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assignment_lhs, 1), SHIFT(206),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_punctuation, 1), SHIFT(115),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_repeat1, 2, .production_id = 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chord_repeat1, 2, .production_id = 2),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(144),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(143),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(120),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scheme_list_repeat1, 2),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(198),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(22),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(186),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(187),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(116),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(184),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(215),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(116),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(156),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(157),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(134),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_list_repeat1, 2), SHIFT_REPEAT(130),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_embedded_scheme_text_repeat1, 2),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_embedded_scheme_text_repeat1, 2),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_embedded_scheme_text_repeat1, 2), SHIFT_REPEAT(186),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_embedded_scheme_text_repeat1, 2), SHIFT_REPEAT(187),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scheme_block_comment, 2),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__scheme_block_comment, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scheme_block_comment, 3),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__scheme_block_comment, 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_comment, 1),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_comment, 1),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [812] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__scheme_block_comment_repeat1, 2), SHIFT_REPEAT(189),
  [815] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__scheme_block_comment_repeat1, 2), SHIFT_REPEAT(191),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__scheme_block_comment_repeat1, 2),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [850] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(209),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(199),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scheme_string_repeat1, 2),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_string_repeat1, 2), SHIFT_REPEAT(208),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_string_repeat1, 2), SHIFT_REPEAT(203),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_string_fragment, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_string_fragment, 1),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_fragment, 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_fragment, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [908] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lilypond(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
