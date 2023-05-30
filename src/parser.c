#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
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
  sym_comment_block = 15,
  sym_comment_line = 16,
  sym_doc = 17,
  sym__tbd = 18,
  sym_import_statement = 19,
  sym__imported = 20,
  sym__url = 21,
  sym__quoted_import_reference = 22,
  sym_less_keyword = 23,
  sym_less_keywords = 24,
  aux_sym_doc_repeat1 = 25,
  aux_sym__tbd_repeat1 = 26,
  aux_sym_import_statement_repeat1 = 27,
  aux_sym_less_keywords_repeat1 = 28,
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
  [sym_comment_block] = "comment_block",
  [sym_comment_line] = "comment_line",
  [sym_doc] = "doc",
  [sym__tbd] = "_tbd",
  [sym_import_statement] = "import_statement",
  [sym__imported] = "_imported",
  [sym__url] = "_url",
  [sym__quoted_import_reference] = "_quoted_import_reference",
  [sym_less_keyword] = "less_keyword",
  [sym_less_keywords] = "less_keywords",
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
  [sym_comment_block] = sym_comment_block,
  [sym_comment_line] = sym_comment_line,
  [sym_doc] = sym_doc,
  [sym__tbd] = sym__tbd,
  [sym_import_statement] = sym_import_statement,
  [sym__imported] = sym__imported,
  [sym__url] = sym__url,
  [sym__quoted_import_reference] = sym__quoted_import_reference,
  [sym_less_keyword] = sym_less_keyword,
  [sym_less_keywords] = sym_less_keywords,
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
  [sym_comment_block] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_line] = {
    .visible = true,
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
  [32] = 13,
  [33] = 28,
  [34] = 27,
  [35] = 30,
  [36] = 25,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'q') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 'w') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(2);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(32);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__tbd_token1);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_ATimport);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_ATuse);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ATforward);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_ATrequire);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_url);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_import_reference);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_import_reference);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_less_keyword_token1);
      if (lookahead == 'l') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_less_keyword_token1);
      if (lookahead == 'r') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_less_keyword_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment_block);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 52},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 52},
  [36] = {.lex_state = 52},
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
    [sym_comment_block] = ACTIONS(1),
    [sym_comment_line] = ACTIONS(1),
  },
  [1] = {
    [sym_doc] = STATE(29),
    [sym__tbd] = STATE(2),
    [sym_import_statement] = STATE(2),
    [aux_sym_doc_repeat1] = STATE(2),
    [aux_sym__tbd_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__tbd_token1] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATuse] = ACTIONS(7),
    [anon_sym_ATforward] = ACTIONS(7),
    [anon_sym_ATrequire] = ACTIONS(7),
    [sym_string] = ACTIONS(9),
    [sym_comment_block] = ACTIONS(9),
    [sym_comment_line] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      aux_sym__tbd_token1,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym__tbd_repeat1,
    ACTIONS(13), 3,
      sym_string,
      sym_comment_block,
      sym_comment_line,
    STATE(3), 3,
      sym__tbd,
      sym_import_statement,
      aux_sym_doc_repeat1,
    ACTIONS(7), 4,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
  [26] = 6,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym__tbd_token1,
    STATE(9), 1,
      aux_sym__tbd_repeat1,
    ACTIONS(23), 3,
      sym_string,
      sym_comment_block,
      sym_comment_line,
    STATE(3), 3,
      sym__tbd,
      sym_import_statement,
      aux_sym_doc_repeat1,
    ACTIONS(20), 4,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
  [52] = 4,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(28), 8,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      sym_comment_block,
      sym_comment_line,
  [72] = 4,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(34), 8,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      sym_comment_block,
      sym_comment_line,
  [92] = 4,
    ACTIONS(30), 1,
      anon_sym_COMMA,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(41), 8,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      sym_comment_block,
      sym_comment_line,
  [112] = 4,
    ACTIONS(30), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(45), 8,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      sym_comment_block,
      sym_comment_line,
  [132] = 4,
    ACTIONS(30), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(45), 8,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      sym_comment_block,
      sym_comment_line,
  [152] = 4,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym__tbd_token1,
    STATE(12), 1,
      aux_sym__tbd_repeat1,
    ACTIONS(51), 7,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      sym_comment_block,
      sym_comment_line,
  [171] = 2,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 9,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_COMMA,
      sym_string,
      sym_comment_block,
      sym_comment_line,
  [186] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 9,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_COMMA,
      sym_string,
      sym_comment_block,
      sym_comment_line,
  [201] = 4,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      aux_sym__tbd_token1,
    STATE(12), 1,
      aux_sym__tbd_repeat1,
    ACTIONS(62), 7,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      sym_string,
      sym_comment_block,
      sym_comment_line,
  [220] = 2,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 9,
      aux_sym__tbd_token1,
      anon_sym_ATimport,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_ATrequire,
      anon_sym_COMMA,
      sym_string,
      sym_comment_block,
      sym_comment_line,
  [235] = 6,
    ACTIONS(68), 1,
      anon_sym_url,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_less_keywords,
    STATE(6), 3,
      sym__imported,
      sym__url,
      sym__quoted_import_reference,
  [256] = 4,
    ACTIONS(68), 1,
      anon_sym_url,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    STATE(8), 3,
      sym__imported,
      sym__url,
      sym__quoted_import_reference,
  [271] = 4,
    ACTIONS(68), 1,
      anon_sym_url,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    STATE(10), 3,
      sym__imported,
      sym__url,
      sym__quoted_import_reference,
  [286] = 3,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    ACTIONS(78), 1,
      aux_sym_less_keyword_token1,
    STATE(18), 2,
      sym_less_keyword,
      aux_sym_less_keywords_repeat1,
  [297] = 3,
    ACTIONS(78), 1,
      aux_sym_less_keyword_token1,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(19), 2,
      sym_less_keyword,
      aux_sym_less_keywords_repeat1,
  [308] = 3,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    ACTIONS(84), 1,
      aux_sym_less_keyword_token1,
    STATE(19), 2,
      sym_less_keyword,
      aux_sym_less_keywords_repeat1,
  [319] = 3,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym__quoted_import_reference,
  [329] = 1,
    ACTIONS(91), 3,
      anon_sym_url,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [335] = 2,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(95), 2,
      anon_sym_RPAREN,
      aux_sym_less_keyword_token1,
  [343] = 1,
    ACTIONS(97), 3,
      anon_sym_url,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [349] = 1,
    ACTIONS(99), 2,
      anon_sym_RPAREN,
      aux_sym_less_keyword_token1,
  [354] = 1,
    ACTIONS(101), 1,
      sym_import_reference,
  [358] = 1,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
  [362] = 1,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
  [366] = 1,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
  [370] = 1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
  [374] = 1,
    ACTIONS(109), 1,
      sym_import_reference,
  [378] = 1,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
  [382] = 1,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
  [386] = 1,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
  [390] = 1,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
  [394] = 1,
    ACTIONS(115), 1,
      sym_import_reference,
  [398] = 1,
    ACTIONS(117), 1,
      sym_import_reference,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 152,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 201,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 235,
  [SMALL_STATE(15)] = 256,
  [SMALL_STATE(16)] = 271,
  [SMALL_STATE(17)] = 286,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 308,
  [SMALL_STATE(20)] = 319,
  [SMALL_STATE(21)] = 329,
  [SMALL_STATE(22)] = 335,
  [SMALL_STATE(23)] = 343,
  [SMALL_STATE(24)] = 349,
  [SMALL_STATE(25)] = 354,
  [SMALL_STATE(26)] = 358,
  [SMALL_STATE(27)] = 362,
  [SMALL_STATE(28)] = 366,
  [SMALL_STATE(29)] = 370,
  [SMALL_STATE(30)] = 374,
  [SMALL_STATE(31)] = 378,
  [SMALL_STATE(32)] = 382,
  [SMALL_STATE(33)] = 386,
  [SMALL_STATE(34)] = 390,
  [SMALL_STATE(35)] = 394,
  [SMALL_STATE(36)] = 398,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(9),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(14),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tbd, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tbd, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url, 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tbd_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__tbd_repeat1, 2), SHIFT_REPEAT(12),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tbd_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_import_reference, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_import_reference, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_less_keywords_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_less_keywords_repeat1, 2), SHIFT_REPEAT(22),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keywords, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keyword, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keywords, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_keyword, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
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
