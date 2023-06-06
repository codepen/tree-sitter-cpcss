#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  aux_sym__url_token1 = 10,
  anon_sym_RPAREN = 11,
  sym_import_reference = 12,
  anon_sym_SQUOTE = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_less_keyword_token1 = 15,
  anon_sym_LPAREN = 16,
  sym_string = 17,
  anon_sym_SLASH_STAR = 18,
  aux_sym__comment_block_token1 = 19,
  anon_sym_SLASH = 20,
  sym__comment_line = 21,
  sym_doc = 22,
  sym__tbd = 23,
  sym_import_statement = 24,
  sym__imported = 25,
  sym__url = 26,
  sym_url = 27,
  sym__quoted_import_reference = 28,
  sym_less_keyword = 29,
  sym_less_keywords = 30,
  sym__comment_block = 31,
  sym_comment = 32,
  aux_sym_doc_repeat1 = 33,
  aux_sym__tbd_repeat1 = 34,
  aux_sym_import_statement_repeat1 = 35,
  aux_sym_less_keywords_repeat1 = 36,
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
  [aux_sym__url_token1] = "import_reference",
  [anon_sym_RPAREN] = ")",
  [sym_import_reference] = "import_reference",
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
  [sym__quoted_import_reference] = "_quoted_import_reference",
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
  [aux_sym__url_token1] = sym_import_reference,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_import_reference] = sym_import_reference,
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
  [sym__quoted_import_reference] = sym__quoted_import_reference,
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
  [aux_sym__url_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_import_reference] = {
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
  [sym__quoted_import_reference] = {
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
  [16] = 16,
  [17] = 10,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 23,
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
  [37] = 13,
  [38] = 34,
  [39] = 32,
  [40] = 31,
  [41] = 41,
  [42] = 36,
  [43] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(85);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 32:
      if (lookahead == 'q') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 44:
      if (lookahead == 'w') ADVANCE(10);
      END_STATE();
    case 45:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(2);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_ATimport);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_ATdocument);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_ATuse);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_ATforward);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ATrequire);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_url_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__url_token1);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__url_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_import_reference);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_import_reference);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(68);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(68);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_less_keyword_token1);
      if (lookahead == '(') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_less_keyword_token1);
      if (lookahead == 'l') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_less_keyword_token1);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_less_keyword_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__comment_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 49},
  [7] = {.lex_state = 49},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 67},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 67},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 70},
  [36] = {.lex_state = 70},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 70},
  [43] = {.lex_state = 70},
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
    [sym_doc] = STATE(41),
    [sym__tbd] = STATE(3),
    [sym_import_statement] = STATE(3),
    [sym__url] = STATE(14),
    [sym_url] = STATE(3),
    [sym__comment_block] = STATE(15),
    [sym_comment] = STATE(3),
    [aux_sym_doc_repeat1] = STATE(3),
    [aux_sym__tbd_repeat1] = STATE(11),
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
    [sym__tbd] = STATE(2),
    [sym_import_statement] = STATE(2),
    [sym__url] = STATE(14),
    [sym_url] = STATE(2),
    [sym__comment_block] = STATE(15),
    [sym_comment] = STATE(2),
    [aux_sym_doc_repeat1] = STATE(2),
    [aux_sym__tbd_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym__tbd_token1] = ACTIONS(19),
    [anon_sym_ATimport] = ACTIONS(22),
    [anon_sym_ATnamespace] = ACTIONS(22),
    [anon_sym_ATdocument] = ACTIONS(22),
    [anon_sym_ATuse] = ACTIONS(22),
    [anon_sym_ATforward] = ACTIONS(22),
    [anon_sym_ATrequire] = ACTIONS(22),
    [anon_sym_url_LPAREN] = ACTIONS(25),
    [sym_string] = ACTIONS(28),
    [anon_sym_SLASH_STAR] = ACTIONS(31),
    [sym__comment_line] = ACTIONS(34),
  },
  [3] = {
    [sym__tbd] = STATE(2),
    [sym_import_statement] = STATE(2),
    [sym__url] = STATE(14),
    [sym_url] = STATE(2),
    [sym__comment_block] = STATE(15),
    [sym_comment] = STATE(2),
    [aux_sym_doc_repeat1] = STATE(2),
    [aux_sym__tbd_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym__tbd_token1] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATnamespace] = ACTIONS(7),
    [anon_sym_ATdocument] = ACTIONS(7),
    [anon_sym_ATuse] = ACTIONS(7),
    [anon_sym_ATforward] = ACTIONS(7),
    [anon_sym_ATrequire] = ACTIONS(7),
    [anon_sym_url_LPAREN] = ACTIONS(9),
    [sym_string] = ACTIONS(39),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [sym__comment_line] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    STATE(5), 1,
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
  [46] = 4,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
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
    STATE(8), 1,
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
  [115] = 4,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      aux_sym__tbd_token1,
    STATE(9), 1,
      aux_sym__tbd_repeat1,
    ACTIONS(67), 10,
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
  [137] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 12,
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
  [155] = 4,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      aux_sym__tbd_token1,
    STATE(9), 1,
      aux_sym__tbd_repeat1,
    ACTIONS(77), 10,
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
  [177] = 2,
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
  [195] = 2,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 12,
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
  [213] = 2,
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
  [230] = 2,
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
  [247] = 2,
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
  [264] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 11,
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
  [281] = 6,
    ACTIONS(95), 1,
      anon_sym_url_LPAREN,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_less_keywords,
    STATE(4), 3,
      sym__imported,
      sym__url,
      sym__quoted_import_reference,
  [302] = 4,
    ACTIONS(95), 1,
      anon_sym_url_LPAREN,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(6), 3,
      sym__imported,
      sym__url,
      sym__quoted_import_reference,
  [317] = 4,
    ACTIONS(95), 1,
      anon_sym_url_LPAREN,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(12), 3,
      sym__imported,
      sym__url,
      sym__quoted_import_reference,
  [332] = 3,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      aux_sym_less_keyword_token1,
    STATE(24), 2,
      sym_less_keyword,
      aux_sym_less_keywords_repeat1,
  [343] = 3,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(109), 1,
      aux_sym_less_keyword_token1,
    STATE(22), 2,
      sym_less_keyword,
      aux_sym_less_keywords_repeat1,
  [354] = 4,
    ACTIONS(112), 1,
      aux_sym__url_token1,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym__quoted_import_reference,
  [367] = 3,
    ACTIONS(105), 1,
      aux_sym_less_keyword_token1,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(22), 2,
      sym_less_keyword,
      aux_sym_less_keywords_repeat1,
  [378] = 4,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym__url_token1,
    STATE(34), 1,
      sym__quoted_import_reference,
  [391] = 2,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(124), 2,
      anon_sym_RPAREN,
      aux_sym_less_keyword_token1,
  [399] = 1,
    ACTIONS(126), 3,
      anon_sym_url_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [405] = 1,
    ACTIONS(128), 3,
      anon_sym_url_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [411] = 1,
    ACTIONS(130), 2,
      anon_sym_RPAREN,
      aux_sym_less_keyword_token1,
  [416] = 1,
    ACTIONS(132), 1,
      aux_sym__comment_block_token1,
  [420] = 1,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
  [424] = 1,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
  [428] = 1,
    ACTIONS(136), 1,
      anon_sym_SLASH,
  [432] = 1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
  [436] = 1,
    ACTIONS(140), 1,
      sym_import_reference,
  [440] = 1,
    ACTIONS(142), 1,
      sym_import_reference,
  [444] = 1,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
  [448] = 1,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
  [452] = 1,
    ACTIONS(146), 1,
      anon_sym_SQUOTE,
  [456] = 1,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
  [460] = 1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
  [464] = 1,
    ACTIONS(150), 1,
      sym_import_reference,
  [468] = 1,
    ACTIONS(152), 1,
      sym_import_reference,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 23,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 155,
  [SMALL_STATE(12)] = 177,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 213,
  [SMALL_STATE(15)] = 230,
  [SMALL_STATE(16)] = 247,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 281,
  [SMALL_STATE(19)] = 302,
  [SMALL_STATE(20)] = 317,
  [SMALL_STATE(21)] = 332,
  [SMALL_STATE(22)] = 343,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 367,
  [SMALL_STATE(25)] = 378,
  [SMALL_STATE(26)] = 391,
  [SMALL_STATE(27)] = 399,
  [SMALL_STATE(28)] = 405,
  [SMALL_STATE(29)] = 411,
  [SMALL_STATE(30)] = 416,
  [SMALL_STATE(31)] = 420,
  [SMALL_STATE(32)] = 424,
  [SMALL_STATE(33)] = 428,
  [SMALL_STATE(34)] = 432,
  [SMALL_STATE(35)] = 436,
  [SMALL_STATE(36)] = 440,
  [SMALL_STATE(37)] = 444,
  [SMALL_STATE(38)] = 448,
  [SMALL_STATE(39)] = 452,
  [SMALL_STATE(40)] = 456,
  [SMALL_STATE(41)] = 460,
  [SMALL_STATE(42)] = 464,
  [SMALL_STATE(43)] = 468,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(11),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(18),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(25),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(30),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(20),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tbd_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__tbd_repeat1, 2), SHIFT_REPEAT(9),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tbd_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tbd, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tbd, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_import_reference, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_import_reference, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_block, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_less_keywords_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_less_keywords_repeat1, 2), SHIFT_REPEAT(26),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keyword, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keywords, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keywords, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keyword, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [148] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
