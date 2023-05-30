#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__tbd_token1 = 1,
  anon_sym_ATimport = 2,
  anon_sym_ATuse = 3,
  anon_sym_ATforward = 4,
  anon_sym_ATrequire = 5,
  anon_sym_COMMA = 6,
  anon_sym_url = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_import_reference = 10,
  anon_sym_SQUOTE = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_less_keyword_token1 = 13,
  sym_string = 14,
  anon_sym_SLASH_STAR = 15,
  aux_sym__comment_block_token1 = 16,
  anon_sym_SLASH = 17,
  sym__comment_line = 18,
  sym_doc = 19,
  sym__tbd = 20,
  sym_import_statement = 21,
  sym__imported = 22,
  sym__url = 23,
  sym__quoted_import_reference = 24,
  sym_less_keyword = 25,
  sym_less_keywords = 26,
  sym__comment_block = 27,
  sym_comment = 28,
  aux_sym_doc_repeat1 = 29,
  aux_sym__tbd_repeat1 = 30,
  aux_sym_import_statement_repeat1 = 31,
  aux_sym_less_keywords_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__tbd_token1] = "_tbd_token1",
  [anon_sym_ATimport] = "@import",
  [anon_sym_ATuse] = "@use",
  [anon_sym_ATforward] = "@forward",
  [anon_sym_ATrequire] = "@require",
  [anon_sym_COMMA] = ",",
  [anon_sym_url] = "url",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_import_reference] = "import_reference",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_less_keyword_token1] = "less_keyword_token1",
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
  [anon_sym_ATuse] = anon_sym_ATuse,
  [anon_sym_ATforward] = anon_sym_ATforward,
  [anon_sym_ATrequire] = anon_sym_ATrequire,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_import_reference] = sym_import_reference,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_less_keyword_token1] = aux_sym_less_keyword_token1,
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
  [anon_sym_url] = {
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
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
  [36] = 12,
  [37] = 29,
  [38] = 33,
  [39] = 32,
  [40] = 31,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '@') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(62);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'q') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'w') ADVANCE(7);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(2);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_ATimport);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_ATuse);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_ATforward);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ATrequire);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_url);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_import_reference);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_import_reference);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_less_keyword_token1);
      if (lookahead == 'l') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_less_keyword_token1);
      if (lookahead == 'r') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_less_keyword_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__comment_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 51},
  [32] = {.lex_state = 51},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 51},
  [40] = {.lex_state = 51},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_ATuse] = ACTIONS(1),
    [anon_sym_ATforward] = ACTIONS(1),
    [anon_sym_ATrequire] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_less_keyword_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_doc] = STATE(35),
    [sym__tbd] = STATE(2),
    [sym_import_statement] = STATE(2),
    [sym__comment_block] = STATE(14),
    [sym_comment] = STATE(2),
    [aux_sym_doc_repeat1] = STATE(2),
    [aux_sym__tbd_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__tbd_token1] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATuse] = ACTIONS(7),
    [anon_sym_ATforward] = ACTIONS(7),
    [anon_sym_ATrequire] = ACTIONS(7),
    [sym_string] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(11),
    [sym__comment_line] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      aux_sym__tbd_token1,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__comment_line,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_string,
    STATE(10), 1,
      aux_sym__tbd_repeat1,
    STATE(14), 1,
      sym__comment_block,
    ACTIONS(7), 4,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
    STATE(3), 4,
      sym__tbd,
      sym_import_statement,
      sym_comment,
      aux_sym_doc_repeat1,
  [34] = 9,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym__tbd_token1,
    ACTIONS(27), 1,
      sym_string,
    ACTIONS(30), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(33), 1,
      sym__comment_line,
    STATE(10), 1,
      aux_sym__tbd_repeat1,
    STATE(14), 1,
      sym__comment_block,
    ACTIONS(24), 4,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
    STATE(3), 4,
      sym__tbd,
      sym_import_statement,
      sym_comment,
      aux_sym_doc_repeat1,
  [68] = 4,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(38), 8,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [88] = 4,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(44), 8,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [108] = 4,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(51), 8,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [128] = 4,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(55), 8,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [148] = 4,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(55), 8,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [168] = 2,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 9,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_COMMA,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [183] = 4,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      aux_sym__tbd_token1,
    STATE(13), 1,
      aux_sym__tbd_repeat1,
    ACTIONS(65), 7,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [202] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 9,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_COMMA,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [217] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 9,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_COMMA,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [232] = 4,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      aux_sym__tbd_token1,
    STATE(13), 1,
      aux_sym__tbd_repeat1,
    ACTIONS(76), 7,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [251] = 2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 8,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [265] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 8,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      anon_sym_SLASH_STAR,
      sym__comment_line,
  [279] = 6,
    ACTIONS(86), 1,
      anon_sym_url,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_less_keywords,
    STATE(6), 3,
      sym__imported,
      sym__url,
      sym__quoted_import_reference,
  [300] = 4,
    ACTIONS(86), 1,
      anon_sym_url,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(11), 3,
      sym__imported,
      sym__url,
      sym__quoted_import_reference,
  [315] = 4,
    ACTIONS(86), 1,
      anon_sym_url,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(7), 3,
      sym__imported,
      sym__url,
      sym__quoted_import_reference,
  [330] = 3,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 1,
      aux_sym_less_keyword_token1,
    STATE(19), 2,
      sym_less_keyword,
      aux_sym_less_keywords_repeat1,
  [341] = 3,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 1,
      aux_sym_less_keyword_token1,
    STATE(21), 2,
      sym_less_keyword,
      aux_sym_less_keywords_repeat1,
  [352] = 3,
    ACTIONS(101), 1,
      aux_sym_less_keyword_token1,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(19), 2,
      sym_less_keyword,
      aux_sym_less_keywords_repeat1,
  [363] = 2,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(107), 2,
      anon_sym_RPAREN,
      aux_sym_less_keyword_token1,
  [371] = 1,
    ACTIONS(109), 3,
      anon_sym_url,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [377] = 1,
    ACTIONS(111), 3,
      anon_sym_url,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [383] = 3,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym__quoted_import_reference,
  [393] = 1,
    ACTIONS(117), 2,
      anon_sym_RPAREN,
      aux_sym_less_keyword_token1,
  [398] = 1,
    ACTIONS(119), 1,
      anon_sym_SLASH,
  [402] = 1,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
  [406] = 1,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
  [410] = 1,
    ACTIONS(125), 1,
      aux_sym__comment_block_token1,
  [414] = 1,
    ACTIONS(127), 1,
      sym_import_reference,
  [418] = 1,
    ACTIONS(129), 1,
      sym_import_reference,
  [422] = 1,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
  [426] = 1,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
  [430] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [434] = 1,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
  [438] = 1,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
  [442] = 1,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
  [446] = 1,
    ACTIONS(137), 1,
      sym_import_reference,
  [450] = 1,
    ACTIONS(139), 1,
      sym_import_reference,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 88,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 148,
  [SMALL_STATE(9)] = 168,
  [SMALL_STATE(10)] = 183,
  [SMALL_STATE(11)] = 202,
  [SMALL_STATE(12)] = 217,
  [SMALL_STATE(13)] = 232,
  [SMALL_STATE(14)] = 251,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 279,
  [SMALL_STATE(17)] = 300,
  [SMALL_STATE(18)] = 315,
  [SMALL_STATE(19)] = 330,
  [SMALL_STATE(20)] = 341,
  [SMALL_STATE(21)] = 352,
  [SMALL_STATE(22)] = 363,
  [SMALL_STATE(23)] = 371,
  [SMALL_STATE(24)] = 377,
  [SMALL_STATE(25)] = 383,
  [SMALL_STATE(26)] = 393,
  [SMALL_STATE(27)] = 398,
  [SMALL_STATE(28)] = 402,
  [SMALL_STATE(29)] = 406,
  [SMALL_STATE(30)] = 410,
  [SMALL_STATE(31)] = 414,
  [SMALL_STATE(32)] = 418,
  [SMALL_STATE(33)] = 422,
  [SMALL_STATE(34)] = 426,
  [SMALL_STATE(35)] = 430,
  [SMALL_STATE(36)] = 434,
  [SMALL_STATE(37)] = 438,
  [SMALL_STATE(38)] = 442,
  [SMALL_STATE(39)] = 446,
  [SMALL_STATE(40)] = 450,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(10),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(16),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(30),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(14),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url, 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tbd, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tbd, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_import_reference, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_import_reference, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tbd_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__tbd_repeat1, 2), SHIFT_REPEAT(13),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tbd_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_block, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_less_keywords_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_less_keywords_repeat1, 2), SHIFT_REPEAT(22),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keyword, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keywords, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keywords, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keyword, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [133] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
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
