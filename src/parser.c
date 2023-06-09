#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__tbd_token1 = 1,
  anon_sym_ATimport = 2,
  anon_sym_ATnamespace = 3,
  anon_sym_ATdocument = 4,
  anon_sym_ATuse = 5,
  anon_sym_ATforward = 6,
  anon_sym_ATrequire = 7,
  anon_sym_COMMA = 8,
  anon_sym_url_LPAREN = 9,
  anon_sym_RPAREN = 10,
  sym_reference = 11,
  anon_sym_SQUOTE = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_less_keyword_token1 = 14,
  anon_sym_LPAREN = 15,
  sym_string = 16,
  anon_sym_SLASH_STAR = 17,
  aux_sym__comment_block_token1 = 18,
  anon_sym_SLASH = 19,
  sym__comment_line = 20,
  sym_doc = 21,
  sym__tbd = 22,
  sym_import_statement = 23,
  sym__imported = 24,
  sym__url = 25,
  sym_url = 26,
  sym__quoted_reference = 27,
  sym_less_keyword = 28,
  sym_less_keywords = 29,
  sym__comment_block = 30,
  sym_comment = 31,
  aux_sym_doc_repeat1 = 32,
  aux_sym__tbd_repeat1 = 33,
  aux_sym_import_statement_repeat1 = 34,
  aux_sym_less_keywords_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__tbd_token1] = "_tbd_token1",
  [anon_sym_ATimport] = "@import",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATdocument] = "@document",
  [anon_sym_ATuse] = "@use",
  [anon_sym_ATforward] = "@forward",
  [anon_sym_ATrequire] = "@require",
  [anon_sym_COMMA] = ",",
  [anon_sym_url_LPAREN] = "url(",
  [anon_sym_RPAREN] = ")",
  [sym_reference] = "reference",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_less_keyword_token1] = "less_keyword_token1",
  [anon_sym_LPAREN] = "(",
  [sym_string] = "string",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym__comment_block_token1] = "_comment_block_token1",
  [anon_sym_SLASH] = "/",
  [sym__comment_line] = "_comment_line",
  [sym_doc] = "doc",
  [sym__tbd] = "_tbd",
  [sym_import_statement] = "import_statement",
  [sym__imported] = "_imported",
  [sym__url] = "_url",
  [sym_url] = "url",
  [sym__quoted_reference] = "_quoted_reference",
  [sym_less_keyword] = "less_keyword",
  [sym_less_keywords] = "less_keywords",
  [sym__comment_block] = "_comment_block",
  [sym_comment] = "comment",
  [aux_sym_doc_repeat1] = "doc_repeat1",
  [aux_sym__tbd_repeat1] = "_tbd_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_less_keywords_repeat1] = "less_keywords_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__tbd_token1] = aux_sym__tbd_token1,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATdocument] = anon_sym_ATdocument,
  [anon_sym_ATuse] = anon_sym_ATuse,
  [anon_sym_ATforward] = anon_sym_ATforward,
  [anon_sym_ATrequire] = anon_sym_ATrequire,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_url_LPAREN] = anon_sym_url_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_reference] = sym_reference,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_less_keyword_token1] = aux_sym_less_keyword_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [sym_string] = sym_string,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym__comment_block_token1] = aux_sym__comment_block_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym__comment_line] = sym__comment_line,
  [sym_doc] = sym_doc,
  [sym__tbd] = sym__tbd,
  [sym_import_statement] = sym_import_statement,
  [sym__imported] = sym__imported,
  [sym__url] = sym__url,
  [sym_url] = sym_url,
  [sym__quoted_reference] = sym__quoted_reference,
  [sym_less_keyword] = sym_less_keyword,
  [sym_less_keywords] = sym_less_keywords,
  [sym__comment_block] = sym__comment_block,
  [sym_comment] = sym_comment,
  [aux_sym_doc_repeat1] = aux_sym_doc_repeat1,
  [aux_sym__tbd_repeat1] = aux_sym__tbd_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_less_keywords_repeat1] = aux_sym_less_keywords_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__tbd_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdocument] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATuse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATforward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATrequire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_less_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__comment_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__comment_line] = {
    .visible = false,
    .named = true,
  },
  [sym_doc] = {
    .visible = true,
    .named = true,
  },
  [sym__tbd] = {
    .visible = false,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__imported] = {
    .visible = false,
    .named = true,
  },
  [sym__url] = {
    .visible = false,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_reference] = {
    .visible = false,
    .named = true,
  },
  [sym_less_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_less_keywords] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_block] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_doc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tbd_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_less_keywords_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 11,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 10,
  [40] = 40,
  [41] = 36,
  [42] = 34,
  [43] = 33,
  [44] = 38,
  [45] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '@') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(82);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 33:
      if (lookahead == 'q') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 45:
      if (lookahead == 'w') ADVANCE(11);
      END_STATE();
    case 46:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(3);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ATimport);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_ATdocument);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_ATuse);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ATforward);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_ATrequire);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_url_LPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ')') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ')') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_less_keyword_token1);
      if (lookahead == '(') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_less_keyword_token1);
      if (lookahead == 'l') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_less_keyword_token1);
      if (lookahead == 'r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_less_keyword_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__comment_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 49},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 50},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 50},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 50},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATdocument] = ACTIONS(1),
    [anon_sym_ATuse] = ACTIONS(1),
    [anon_sym_ATforward] = ACTIONS(1),
    [anon_sym_ATrequire] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_url_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_less_keyword_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_doc] = STATE(40),
    [sym__tbd] = STATE(2),
    [sym_import_statement] = STATE(2),
    [sym__url] = STATE(15),
    [sym_url] = STATE(2),
    [sym__comment_block] = STATE(18),
    [sym_comment] = STATE(2),
    [aux_sym_doc_repeat1] = STATE(2),
    [aux_sym__tbd_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__tbd_token1] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATnamespace] = ACTIONS(7),
    [anon_sym_ATdocument] = ACTIONS(7),
    [anon_sym_ATuse] = ACTIONS(7),
    [anon_sym_ATforward] = ACTIONS(7),
    [anon_sym_ATrequire] = ACTIONS(7),
    [anon_sym_url_LPAREN] = ACTIONS(9),
    [sym_string] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [sym__comment_line] = ACTIONS(15),
  },
  [2] = {
    [sym__tbd] = STATE(3),
    [sym_import_statement] = STATE(3),
    [sym__url] = STATE(15),
    [sym_url] = STATE(3),
    [sym__comment_block] = STATE(18),
    [sym_comment] = STATE(3),
    [aux_sym_doc_repeat1] = STATE(3),
    [aux_sym__tbd_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym__tbd_token1] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATnamespace] = ACTIONS(7),
    [anon_sym_ATdocument] = ACTIONS(7),
    [anon_sym_ATuse] = ACTIONS(7),
    [anon_sym_ATforward] = ACTIONS(7),
    [anon_sym_ATrequire] = ACTIONS(7),
    [anon_sym_url_LPAREN] = ACTIONS(9),
    [sym_string] = ACTIONS(19),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [sym__comment_line] = ACTIONS(15),
  },
  [3] = {
    [sym__tbd] = STATE(3),
    [sym_import_statement] = STATE(3),
    [sym__url] = STATE(15),
    [sym_url] = STATE(3),
    [sym__comment_block] = STATE(18),
    [sym_comment] = STATE(3),
    [aux_sym_doc_repeat1] = STATE(3),
    [aux_sym__tbd_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym__tbd_token1] = ACTIONS(23),
    [anon_sym_ATimport] = ACTIONS(26),
    [anon_sym_ATnamespace] = ACTIONS(26),
    [anon_sym_ATdocument] = ACTIONS(26),
    [anon_sym_ATuse] = ACTIONS(26),
    [anon_sym_ATforward] = ACTIONS(26),
    [anon_sym_ATrequire] = ACTIONS(26),
    [anon_sym_url_LPAREN] = ACTIONS(29),
    [sym_string] = ACTIONS(32),
    [anon_sym_SLASH_STAR] = ACTIONS(35),
    [sym__comment_line] = ACTIONS(38),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(43), 11,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [23] = 4,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(43), 11,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [46] = 4,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(49), 11,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [69] = 4,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(53), 11,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [92] = 4,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(57), 11,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [115] = 2,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 12,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_COMMA,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [133] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 12,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_COMMA,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [151] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 12,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_COMMA,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [169] = 4,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      aux_sym__tbd_token1,
    STATE(12), 1,
      aux_sym__tbd_repeat1,
    ACTIONS(75), 10,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [191] = 4,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      aux_sym__tbd_token1,
    STATE(12), 1,
      aux_sym__tbd_repeat1,
    ACTIONS(81), 10,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [213] = 2,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 12,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_COMMA,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [231] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 11,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [248] = 2,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 11,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [265] = 2,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 11,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [282] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 11,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [299] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 11,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATnamespace,
      anon_sym_ATdocument,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_url_LPAREN,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [316] = 6,
    ACTIONS(99), 1,
      anon_sym_url_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_less_keywords,
    STATE(7), 3,
      sym__imported,
      sym__url,
      sym__quoted_reference,
  [337] = 4,
    ACTIONS(99), 1,
      anon_sym_url_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    STATE(4), 3,
      sym__imported,
      sym__url,
      sym__quoted_reference,
  [352] = 4,
    ACTIONS(99), 1,
      anon_sym_url_LPAREN,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    STATE(9), 3,
      sym__imported,
      sym__url,
      sym__quoted_reference,
  [367] = 5,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(109), 1,
      sym_reference,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym__quoted_reference,
  [383] = 5,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(117), 1,
      sym_reference,
    STATE(36), 1,
      sym__quoted_reference,
  [399] = 3,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 1,
      aux_sym_less_keyword_token1,
    STATE(27), 2,
      sym_less_keyword,
      aux_sym_less_keywords_repeat1,
  [410] = 3,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 1,
      aux_sym_less_keyword_token1,
    STATE(26), 2,
      sym_less_keyword,
      aux_sym_less_keywords_repeat1,
  [421] = 3,
    ACTIONS(121), 1,
      aux_sym_less_keyword_token1,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(26), 2,
      sym_less_keyword,
      aux_sym_less_keywords_repeat1,
  [432] = 1,
    ACTIONS(130), 3,
      anon_sym_url_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [438] = 2,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(134), 2,
      anon_sym_RPAREN,
      aux_sym_less_keyword_token1,
  [446] = 1,
    ACTIONS(136), 3,
      anon_sym_url_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [452] = 1,
    ACTIONS(138), 2,
      anon_sym_RPAREN,
      aux_sym_less_keyword_token1,
  [457] = 1,
    ACTIONS(140), 1,
      aux_sym__comment_block_token1,
  [461] = 1,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
  [465] = 1,
    ACTIONS(142), 1,
      anon_sym_SQUOTE,
  [469] = 1,
    ACTIONS(144), 1,
      anon_sym_SLASH,
  [473] = 1,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
  [477] = 1,
    ACTIONS(148), 1,
      sym_reference,
  [481] = 1,
    ACTIONS(150), 1,
      sym_reference,
  [485] = 1,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
  [489] = 1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
  [493] = 1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
  [497] = 1,
    ACTIONS(156), 1,
      anon_sym_SQUOTE,
  [501] = 1,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
  [505] = 1,
    ACTIONS(158), 1,
      sym_reference,
  [509] = 1,
    ACTIONS(160), 1,
      sym_reference,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 23,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 133,
  [SMALL_STATE(11)] = 151,
  [SMALL_STATE(12)] = 169,
  [SMALL_STATE(13)] = 191,
  [SMALL_STATE(14)] = 213,
  [SMALL_STATE(15)] = 231,
  [SMALL_STATE(16)] = 248,
  [SMALL_STATE(17)] = 265,
  [SMALL_STATE(18)] = 282,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 316,
  [SMALL_STATE(21)] = 337,
  [SMALL_STATE(22)] = 352,
  [SMALL_STATE(23)] = 367,
  [SMALL_STATE(24)] = 383,
  [SMALL_STATE(25)] = 399,
  [SMALL_STATE(26)] = 410,
  [SMALL_STATE(27)] = 421,
  [SMALL_STATE(28)] = 432,
  [SMALL_STATE(29)] = 438,
  [SMALL_STATE(30)] = 446,
  [SMALL_STATE(31)] = 452,
  [SMALL_STATE(32)] = 457,
  [SMALL_STATE(33)] = 461,
  [SMALL_STATE(34)] = 465,
  [SMALL_STATE(35)] = 469,
  [SMALL_STATE(36)] = 473,
  [SMALL_STATE(37)] = 477,
  [SMALL_STATE(38)] = 481,
  [SMALL_STATE(39)] = 485,
  [SMALL_STATE(40)] = 489,
  [SMALL_STATE(41)] = 493,
  [SMALL_STATE(42)] = 497,
  [SMALL_STATE(43)] = 501,
  [SMALL_STATE(44)] = 505,
  [SMALL_STATE(45)] = 509,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(13),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(20),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(24),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(3),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(32),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(18),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(22),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_reference, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_reference, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tbd_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__tbd_repeat1, 2), SHIFT_REPEAT(12),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tbd_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tbd, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tbd, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_block, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_less_keywords_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_less_keywords_repeat1, 2), SHIFT_REPEAT(29),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keywords, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keyword, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keywords, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keyword, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [152] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cpcss(void) {
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
