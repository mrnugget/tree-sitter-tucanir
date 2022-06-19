#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_block_funk = 1,
  anon_sym_LPARENnode_id_COLON = 2,
  anon_sym_COMMAentry_COLON = 3,
  anon_sym_RPAREN = 4,
  anon_sym_block = 5,
  anon_sym_COLON = 6,
  anon_sym_ = 7,
  anon_sym_LT_DASH = 8,
  anon_sym_terminator_COLON = 9,
  anon_sym_goto = 10,
  anon_sym_LPAREN = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_COMMA = 13,
  sym_number = 14,
  sym_id = 15,
  sym_register = 16,
  sym_source_file = 17,
  sym_block_funk = 18,
  sym_block = 19,
  sym__instruction = 20,
  sym_move = 21,
  sym__terminator = 22,
  sym_goto_terminator = 23,
  sym__operand = 24,
  sym_successors = 25,
  sym_predecessors = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_block_repeat1 = 28,
  aux_sym_successors_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_block_funk] = "block_funk",
  [anon_sym_LPARENnode_id_COLON] = "(node_id:",
  [anon_sym_COMMAentry_COLON] = ", entry:",
  [anon_sym_RPAREN] = ")",
  [anon_sym_block] = "block",
  [anon_sym_COLON] = ":",
  [anon_sym_] = "  ",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_terminator_COLON] = "terminator:",
  [anon_sym_goto] = "goto",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [sym_number] = "number",
  [sym_id] = "id",
  [sym_register] = "register",
  [sym_source_file] = "source_file",
  [sym_block_funk] = "block_funk",
  [sym_block] = "block",
  [sym__instruction] = "_instruction",
  [sym_move] = "move",
  [sym__terminator] = "_terminator",
  [sym_goto_terminator] = "goto_terminator",
  [sym__operand] = "_operand",
  [sym_successors] = "successors",
  [sym_predecessors] = "predecessors",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_successors_repeat1] = "successors_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_block_funk] = anon_sym_block_funk,
  [anon_sym_LPARENnode_id_COLON] = anon_sym_LPARENnode_id_COLON,
  [anon_sym_COMMAentry_COLON] = anon_sym_COMMAentry_COLON,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_] = anon_sym_,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_terminator_COLON] = anon_sym_terminator_COLON,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_number] = sym_number,
  [sym_id] = sym_id,
  [sym_register] = sym_register,
  [sym_source_file] = sym_source_file,
  [sym_block_funk] = sym_block_funk,
  [sym_block] = sym_block,
  [sym__instruction] = sym__instruction,
  [sym_move] = sym_move,
  [sym__terminator] = sym__terminator,
  [sym_goto_terminator] = sym_goto_terminator,
  [sym__operand] = sym__operand,
  [sym_successors] = sym_successors,
  [sym_predecessors] = sym_predecessors,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_successors_repeat1] = aux_sym_successors_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_block_funk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPARENnode_id_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAentry_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_terminator_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block_funk] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_move] = {
    .visible = true,
    .named = true,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_goto_terminator] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym_successors] = {
    .visible = true,
    .named = true,
  },
  [sym_predecessors] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_successors_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_block_funk_id = 1,
  field_block_id = 2,
  field_blocks = 3,
  field_entry_block_id = 4,
  field_node_id = 5,
  field_operand = 6,
  field_predecessors = 7,
  field_successors = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_block_funk_id] = "block_funk_id",
  [field_block_id] = "block_id",
  [field_blocks] = "blocks",
  [field_entry_block_id] = "entry_block_id",
  [field_node_id] = "node_id",
  [field_operand] = "operand",
  [field_predecessors] = "predecessors",
  [field_successors] = "successors",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 4},
  [2] = {.index = 4, .length = 1},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 3},
  [6] = {.index = 12, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_block_funk_id, 1},
    {field_blocks, 7},
    {field_entry_block_id, 5},
    {field_node_id, 3},
  [4] =
    {field_block_id, 1},
  [5] =
    {field_block_id, 1},
    {field_successors, 2},
  [7] =
    {field_block_id, 1},
    {field_predecessors, 2},
  [9] =
    {field_block_id, 1},
    {field_predecessors, 2},
    {field_successors, 3},
  [12] =
    {field_operand, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'g') ADVANCE(36);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(57);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(69);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'k') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'k') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 'k') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(53)
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == ',') ADVANCE(3);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_block_funk);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPARENnode_id_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COMMAentry_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_terminator_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 54},
  [2] = {.lex_state = 53},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 54},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 54},
  [28] = {.lex_state = 54},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 54},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 54},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 54},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_block_funk] = ACTIONS(1),
    [anon_sym_LPARENnode_id_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_terminator_COLON] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym_block_funk] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_block_funk] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      anon_sym_block_funk,
    ACTIONS(11), 1,
      anon_sym_,
    STATE(2), 2,
      sym__instruction,
      aux_sym_block_repeat1,
  [14] = 4,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    ACTIONS(16), 1,
      anon_sym_block_funk,
    ACTIONS(18), 1,
      anon_sym_,
    STATE(8), 2,
      sym__instruction,
      aux_sym_block_repeat1,
  [28] = 4,
    ACTIONS(18), 1,
      anon_sym_,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      anon_sym_block_funk,
    STATE(6), 2,
      sym__instruction,
      aux_sym_block_repeat1,
  [42] = 4,
    ACTIONS(18), 1,
      anon_sym_,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      anon_sym_block_funk,
    STATE(2), 2,
      sym__instruction,
      aux_sym_block_repeat1,
  [56] = 4,
    ACTIONS(18), 1,
      anon_sym_,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      anon_sym_block_funk,
    STATE(2), 2,
      sym__instruction,
      aux_sym_block_repeat1,
  [70] = 4,
    ACTIONS(18), 1,
      anon_sym_,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_block_funk,
    STATE(2), 2,
      sym__instruction,
      aux_sym_block_repeat1,
  [84] = 4,
    ACTIONS(18), 1,
      anon_sym_,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      anon_sym_block_funk,
    STATE(2), 2,
      sym__instruction,
      aux_sym_block_repeat1,
  [98] = 4,
    ACTIONS(18), 1,
      anon_sym_,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      anon_sym_block_funk,
    STATE(5), 2,
      sym__instruction,
      aux_sym_block_repeat1,
  [112] = 4,
    ACTIONS(18), 1,
      anon_sym_,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_block_funk,
    STATE(7), 2,
      sym__instruction,
      aux_sym_block_repeat1,
  [126] = 3,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_block_funk,
    STATE(11), 2,
      sym_block_funk,
      aux_sym_source_file_repeat1,
  [137] = 4,
    ACTIONS(53), 1,
      anon_sym_COLON,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_predecessors,
    STATE(36), 1,
      sym_successors,
  [150] = 3,
    ACTIONS(57), 1,
      anon_sym_terminator_COLON,
    ACTIONS(59), 1,
      sym_register,
    STATE(21), 2,
      sym_move,
      sym__terminator,
  [161] = 3,
    ACTIONS(5), 1,
      anon_sym_block_funk,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_block_funk,
      aux_sym_source_file_repeat1,
  [172] = 2,
    STATE(24), 1,
      sym__operand,
    ACTIONS(63), 2,
      sym_number,
      sym_register,
  [180] = 2,
    ACTIONS(67), 1,
      anon_sym_block_funk,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_,
  [188] = 2,
    ACTIONS(71), 1,
      anon_sym_block_funk,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_,
  [196] = 3,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_successors_repeat1,
  [206] = 3,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_successors_repeat1,
  [216] = 3,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_successors,
  [226] = 2,
    ACTIONS(85), 1,
      anon_sym_block_funk,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_,
  [234] = 3,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      aux_sym_successors_repeat1,
  [244] = 3,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_successors_repeat1,
  [254] = 2,
    ACTIONS(93), 1,
      anon_sym_block_funk,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_,
  [262] = 3,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_successors_repeat1,
  [272] = 1,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [277] = 1,
    ACTIONS(102), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [282] = 1,
    ACTIONS(104), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [287] = 1,
    ACTIONS(95), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [292] = 2,
    ACTIONS(106), 1,
      anon_sym_goto,
    STATE(16), 1,
      sym_goto_terminator,
  [299] = 1,
    ACTIONS(108), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [304] = 2,
    ACTIONS(110), 1,
      anon_sym_block,
    STATE(26), 1,
      sym_block,
  [311] = 2,
    ACTIONS(112), 1,
      anon_sym_LT_DASH,
    ACTIONS(114), 1,
      anon_sym_DASH_GT,
  [318] = 2,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 1,
      sym_id,
  [325] = 2,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    ACTIONS(122), 1,
      sym_id,
  [332] = 1,
    ACTIONS(124), 1,
      anon_sym_COLON,
  [336] = 1,
    ACTIONS(126), 1,
      anon_sym_COLON,
  [340] = 1,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
  [344] = 1,
    ACTIONS(130), 1,
      sym_id,
  [348] = 1,
    ACTIONS(114), 1,
      anon_sym_DASH_GT,
  [352] = 1,
    ACTIONS(132), 1,
      anon_sym_COLON,
  [356] = 1,
    ACTIONS(134), 1,
      sym_id,
  [360] = 1,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
  [364] = 1,
    ACTIONS(138), 1,
      anon_sym_COLON,
  [368] = 1,
    ACTIONS(140), 1,
      sym_id,
  [372] = 1,
    ACTIONS(142), 1,
      anon_sym_COMMAentry_COLON,
  [376] = 1,
    ACTIONS(144), 1,
      sym_id,
  [380] = 1,
    ACTIONS(146), 1,
      sym_id,
  [384] = 1,
    ACTIONS(148), 1,
      sym_id,
  [388] = 1,
    ACTIONS(150), 1,
      anon_sym_LT_DASH,
  [392] = 1,
    ACTIONS(152), 1,
      anon_sym_LPARENnode_id_COLON,
  [396] = 1,
    ACTIONS(154), 1,
      anon_sym_COLON,
  [400] = 1,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
  [404] = 1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 70,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 112,
  [SMALL_STATE(11)] = 126,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 150,
  [SMALL_STATE(14)] = 161,
  [SMALL_STATE(15)] = 172,
  [SMALL_STATE(16)] = 180,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 196,
  [SMALL_STATE(19)] = 206,
  [SMALL_STATE(20)] = 216,
  [SMALL_STATE(21)] = 226,
  [SMALL_STATE(22)] = 234,
  [SMALL_STATE(23)] = 244,
  [SMALL_STATE(24)] = 254,
  [SMALL_STATE(25)] = 262,
  [SMALL_STATE(26)] = 272,
  [SMALL_STATE(27)] = 277,
  [SMALL_STATE(28)] = 282,
  [SMALL_STATE(29)] = 287,
  [SMALL_STATE(30)] = 292,
  [SMALL_STATE(31)] = 299,
  [SMALL_STATE(32)] = 304,
  [SMALL_STATE(33)] = 311,
  [SMALL_STATE(34)] = 318,
  [SMALL_STATE(35)] = 325,
  [SMALL_STATE(36)] = 332,
  [SMALL_STATE(37)] = 336,
  [SMALL_STATE(38)] = 340,
  [SMALL_STATE(39)] = 344,
  [SMALL_STATE(40)] = 348,
  [SMALL_STATE(41)] = 352,
  [SMALL_STATE(42)] = 356,
  [SMALL_STATE(43)] = 360,
  [SMALL_STATE(44)] = 364,
  [SMALL_STATE(45)] = 368,
  [SMALL_STATE(46)] = 372,
  [SMALL_STATE(47)] = 376,
  [SMALL_STATE(48)] = 380,
  [SMALL_STATE(49)] = 384,
  [SMALL_STATE(50)] = 388,
  [SMALL_STATE(51)] = 392,
  [SMALL_STATE(52)] = 396,
  [SMALL_STATE(53)] = 400,
  [SMALL_STATE(54)] = 404,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 4),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 4),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 3),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 3),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 3),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5, .production_id = 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, .production_id = 5),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6, .production_id = 5),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 4),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5, .production_id = 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 5),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5, .production_id = 5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__terminator, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__terminator, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_terminator, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_terminator, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 3, .production_id = 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_move, 3, .production_id = 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_successors_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_successors_repeat1, 2), SHIFT_REPEAT(42),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_funk, 8, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predecessors, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predecessors, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predecessors, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [158] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tucanir(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
