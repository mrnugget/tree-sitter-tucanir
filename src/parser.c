#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 14

enum {
  anon_sym_block_funk = 1,
  anon_sym_LPARENnode_id_COLON = 2,
  anon_sym_COMMAentry_COLON = 3,
  anon_sym_RPAREN = 4,
  anon_sym_block = 5,
  anon_sym_COLON = 6,
  anon_sym_LT_DASH = 7,
  anon_sym_PLUS = 8,
  anon_sym_DASH = 9,
  anon_sym_GT = 10,
  anon_sym_LT = 11,
  anon_sym_LT_EQ = 12,
  anon_sym_EQ_GT = 13,
  anon_sym_EQ_EQ = 14,
  anon_sym_BANG_EQ = 15,
  anon_sym_terminator_COLON = 16,
  anon_sym_goto = 17,
  anon_sym_LPAREN = 18,
  anon_sym_DASH_GT = 19,
  anon_sym_COMMA = 20,
  sym_number = 21,
  sym_id = 22,
  sym_true = 23,
  sym_false = 24,
  sym_register = 25,
  sym_source_file = 26,
  sym_block_funk = 27,
  sym_block = 28,
  sym_instruction = 29,
  sym_move = 30,
  sym_bin_op = 31,
  sym_terminator = 32,
  sym_goto = 33,
  sym__operand = 34,
  sym_successors = 35,
  sym_predecessors = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_block_funk_repeat1 = 38,
  aux_sym_block_repeat1 = 39,
  aux_sym_successors_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_block_funk] = "block_funk",
  [anon_sym_LPARENnode_id_COLON] = "(node_id:",
  [anon_sym_COMMAentry_COLON] = ", entry:",
  [anon_sym_RPAREN] = ")",
  [anon_sym_block] = "block",
  [anon_sym_COLON] = ":",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_terminator_COLON] = "terminator:",
  [anon_sym_goto] = "goto",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [sym_number] = "number",
  [sym_id] = "id",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_register] = "register",
  [sym_source_file] = "source_file",
  [sym_block_funk] = "block_funk",
  [sym_block] = "block",
  [sym_instruction] = "instruction",
  [sym_move] = "move",
  [sym_bin_op] = "bin_op",
  [sym_terminator] = "terminator",
  [sym_goto] = "goto",
  [sym__operand] = "_operand",
  [sym_successors] = "successors",
  [sym_predecessors] = "predecessors",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_funk_repeat1] = "block_funk_repeat1",
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
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_terminator_COLON] = anon_sym_terminator_COLON,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_number] = sym_number,
  [sym_id] = sym_id,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_register] = sym_register,
  [sym_source_file] = sym_source_file,
  [sym_block_funk] = sym_block_funk,
  [sym_block] = sym_block,
  [sym_instruction] = sym_instruction,
  [sym_move] = sym_move,
  [sym_bin_op] = sym_bin_op,
  [sym_terminator] = sym_terminator,
  [sym_goto] = sym_goto,
  [sym__operand] = sym__operand,
  [sym_successors] = sym_successors,
  [sym_predecessors] = sym_predecessors,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_funk_repeat1] = aux_sym_block_funk_repeat1,
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
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
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
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_move] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_op] = {
    .visible = true,
    .named = true,
  },
  [sym_terminator] = {
    .visible = true,
    .named = true,
  },
  [sym_goto] = {
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
  [aux_sym_block_funk_repeat1] = {
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
  field_instructions = 5,
  field_lhs = 6,
  field_node_id = 7,
  field_operand = 8,
  field_operator = 9,
  field_predecessors = 10,
  field_rhs = 11,
  field_successors = 12,
  field_target = 13,
  field_terminator = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_block_funk_id] = "block_funk_id",
  [field_block_id] = "block_id",
  [field_blocks] = "blocks",
  [field_entry_block_id] = "entry_block_id",
  [field_instructions] = "instructions",
  [field_lhs] = "lhs",
  [field_node_id] = "node_id",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_predecessors] = "predecessors",
  [field_rhs] = "rhs",
  [field_successors] = "successors",
  [field_target] = "target",
  [field_terminator] = "terminator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 4},
  [3] = {.index = 7, .length = 2},
  [4] = {.index = 9, .length = 3},
  [5] = {.index = 12, .length = 3},
  [6] = {.index = 15, .length = 3},
  [7] = {.index = 18, .length = 1},
  [8] = {.index = 19, .length = 1},
  [9] = {.index = 20, .length = 4},
  [10] = {.index = 24, .length = 4},
  [11] = {.index = 28, .length = 4},
  [12] = {.index = 32, .length = 5},
  [13] = {.index = 37, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_block_funk_id, 1},
    {field_entry_block_id, 5},
    {field_node_id, 3},
  [3] =
    {field_block_funk_id, 1},
    {field_blocks, 7},
    {field_entry_block_id, 5},
    {field_node_id, 3},
  [7] =
    {field_block_id, 1},
    {field_terminator, 3},
  [9] =
    {field_block_id, 1},
    {field_instructions, 3},
    {field_terminator, 4},
  [12] =
    {field_block_id, 1},
    {field_successors, 2},
    {field_terminator, 4},
  [15] =
    {field_block_id, 1},
    {field_predecessors, 2},
    {field_terminator, 4},
  [18] =
    {field_target, 0},
  [19] =
    {field_operand, 0},
  [20] =
    {field_block_id, 1},
    {field_instructions, 4},
    {field_successors, 2},
    {field_terminator, 5},
  [24] =
    {field_block_id, 1},
    {field_instructions, 4},
    {field_predecessors, 2},
    {field_terminator, 5},
  [28] =
    {field_block_id, 1},
    {field_predecessors, 2},
    {field_successors, 3},
    {field_terminator, 5},
  [32] =
    {field_block_id, 1},
    {field_instructions, 5},
    {field_predecessors, 2},
    {field_successors, 3},
    {field_terminator, 6},
  [37] =
    {field_lhs, 0},
    {field_operator, 1},
    {field_rhs, 2},
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
      if (eof) ADVANCE(52);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(35);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(1);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '<') ADVANCE(65);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'k') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(7);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_block_funk);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPARENnode_id_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMAentry_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_terminator_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_terminator_COLON] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(57),
    [sym_block_funk] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_block_funk] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 2,
      anon_sym_terminator_COLON,
      sym_register,
    ACTIONS(7), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [17] = 3,
    STATE(2), 1,
      sym__operand,
    STATE(45), 2,
      sym_move,
      sym_bin_op,
    ACTIONS(13), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_register,
  [31] = 4,
    ACTIONS(15), 1,
      anon_sym_terminator_COLON,
    ACTIONS(17), 1,
      sym_register,
    STATE(33), 1,
      sym_terminator,
    STATE(18), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [45] = 2,
    STATE(38), 1,
      sym__operand,
    ACTIONS(19), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_register,
  [55] = 4,
    ACTIONS(15), 1,
      anon_sym_terminator_COLON,
    ACTIONS(17), 1,
      sym_register,
    STATE(24), 1,
      sym_terminator,
    STATE(18), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [69] = 4,
    ACTIONS(15), 1,
      anon_sym_terminator_COLON,
    ACTIONS(17), 1,
      sym_register,
    STATE(27), 1,
      sym_terminator,
    STATE(6), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [83] = 4,
    ACTIONS(15), 1,
      anon_sym_terminator_COLON,
    ACTIONS(17), 1,
      sym_register,
    STATE(28), 1,
      sym_terminator,
    STATE(18), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [97] = 4,
    ACTIONS(15), 1,
      anon_sym_terminator_COLON,
    ACTIONS(17), 1,
      sym_register,
    STATE(29), 1,
      sym_terminator,
    STATE(18), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [111] = 3,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
    STATE(11), 2,
      sym_block,
      aux_sym_block_funk_repeat1,
  [123] = 3,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
    STATE(12), 2,
      sym_block,
      aux_sym_block_funk_repeat1,
  [135] = 3,
    ACTIONS(29), 1,
      anon_sym_block,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
    STATE(12), 2,
      sym_block,
      aux_sym_block_funk_repeat1,
  [147] = 4,
    ACTIONS(15), 1,
      anon_sym_terminator_COLON,
    ACTIONS(17), 1,
      sym_register,
    STATE(25), 1,
      sym_terminator,
    STATE(4), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [161] = 4,
    ACTIONS(15), 1,
      anon_sym_terminator_COLON,
    ACTIONS(17), 1,
      sym_register,
    STATE(35), 1,
      sym_terminator,
    STATE(9), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [175] = 4,
    ACTIONS(15), 1,
      anon_sym_terminator_COLON,
    ACTIONS(17), 1,
      sym_register,
    STATE(32), 1,
      sym_terminator,
    STATE(8), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [189] = 3,
    ACTIONS(5), 1,
      anon_sym_block_funk,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(17), 2,
      sym_block_funk,
      aux_sym_source_file_repeat1,
  [200] = 3,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_block_funk,
    STATE(17), 2,
      sym_block_funk,
      aux_sym_source_file_repeat1,
  [211] = 3,
    ACTIONS(39), 1,
      anon_sym_terminator_COLON,
    ACTIONS(41), 1,
      sym_register,
    STATE(18), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [222] = 4,
    ACTIONS(44), 1,
      anon_sym_COLON,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_predecessors,
    STATE(47), 1,
      sym_successors,
  [235] = 2,
    ACTIONS(50), 1,
      anon_sym_block,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [243] = 3,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_successors_repeat1,
  [253] = 3,
    ACTIONS(56), 1,
      anon_sym_COLON,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_successors,
  [263] = 2,
    ACTIONS(62), 1,
      anon_sym_block,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [271] = 2,
    ACTIONS(66), 1,
      anon_sym_block,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [279] = 2,
    ACTIONS(70), 1,
      anon_sym_block,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [287] = 3,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_successors_repeat1,
  [297] = 2,
    ACTIONS(79), 1,
      anon_sym_block,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [305] = 2,
    ACTIONS(83), 1,
      anon_sym_block,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [313] = 2,
    ACTIONS(87), 1,
      anon_sym_block,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [321] = 3,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_successors_repeat1,
  [331] = 3,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_successors_repeat1,
  [341] = 2,
    ACTIONS(95), 1,
      anon_sym_block,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [349] = 2,
    ACTIONS(99), 1,
      anon_sym_block,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [357] = 3,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_successors_repeat1,
  [367] = 2,
    ACTIONS(105), 1,
      anon_sym_block,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [375] = 2,
    ACTIONS(107), 1,
      anon_sym_LT_DASH,
    ACTIONS(109), 1,
      anon_sym_DASH_GT,
  [382] = 2,
    ACTIONS(111), 1,
      anon_sym_goto,
    STATE(20), 1,
      sym_goto,
  [389] = 1,
    ACTIONS(113), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [394] = 1,
    ACTIONS(115), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [399] = 2,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      sym_id,
  [406] = 2,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      sym_id,
  [413] = 1,
    ACTIONS(125), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [418] = 1,
    ACTIONS(72), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [423] = 1,
    ACTIONS(127), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [428] = 1,
    ACTIONS(129), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [433] = 1,
    ACTIONS(131), 1,
      sym_id,
  [437] = 1,
    ACTIONS(133), 1,
      anon_sym_COLON,
  [441] = 1,
    ACTIONS(135), 1,
      sym_id,
  [445] = 1,
    ACTIONS(137), 1,
      sym_id,
  [449] = 1,
    ACTIONS(139), 1,
      anon_sym_COLON,
  [453] = 1,
    ACTIONS(141), 1,
      sym_id,
  [457] = 1,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
  [461] = 1,
    ACTIONS(145), 1,
      anon_sym_COLON,
  [465] = 1,
    ACTIONS(109), 1,
      anon_sym_DASH_GT,
  [469] = 1,
    ACTIONS(147), 1,
      anon_sym_LPARENnode_id_COLON,
  [473] = 1,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
  [477] = 1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [481] = 1,
    ACTIONS(153), 1,
      sym_id,
  [485] = 1,
    ACTIONS(155), 1,
      anon_sym_COMMAentry_COLON,
  [489] = 1,
    ACTIONS(157), 1,
      sym_id,
  [493] = 1,
    ACTIONS(159), 1,
      anon_sym_COLON,
  [497] = 1,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
  [501] = 1,
    ACTIONS(163), 1,
      anon_sym_LT_DASH,
  [505] = 1,
    ACTIONS(165), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 31,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 97,
  [SMALL_STATE(10)] = 111,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 135,
  [SMALL_STATE(13)] = 147,
  [SMALL_STATE(14)] = 161,
  [SMALL_STATE(15)] = 175,
  [SMALL_STATE(16)] = 189,
  [SMALL_STATE(17)] = 200,
  [SMALL_STATE(18)] = 211,
  [SMALL_STATE(19)] = 222,
  [SMALL_STATE(20)] = 235,
  [SMALL_STATE(21)] = 243,
  [SMALL_STATE(22)] = 253,
  [SMALL_STATE(23)] = 263,
  [SMALL_STATE(24)] = 271,
  [SMALL_STATE(25)] = 279,
  [SMALL_STATE(26)] = 287,
  [SMALL_STATE(27)] = 297,
  [SMALL_STATE(28)] = 305,
  [SMALL_STATE(29)] = 313,
  [SMALL_STATE(30)] = 321,
  [SMALL_STATE(31)] = 331,
  [SMALL_STATE(32)] = 341,
  [SMALL_STATE(33)] = 349,
  [SMALL_STATE(34)] = 357,
  [SMALL_STATE(35)] = 367,
  [SMALL_STATE(36)] = 375,
  [SMALL_STATE(37)] = 382,
  [SMALL_STATE(38)] = 389,
  [SMALL_STATE(39)] = 394,
  [SMALL_STATE(40)] = 399,
  [SMALL_STATE(41)] = 406,
  [SMALL_STATE(42)] = 413,
  [SMALL_STATE(43)] = 418,
  [SMALL_STATE(44)] = 423,
  [SMALL_STATE(45)] = 428,
  [SMALL_STATE(46)] = 433,
  [SMALL_STATE(47)] = 437,
  [SMALL_STATE(48)] = 441,
  [SMALL_STATE(49)] = 445,
  [SMALL_STATE(50)] = 449,
  [SMALL_STATE(51)] = 453,
  [SMALL_STATE(52)] = 457,
  [SMALL_STATE(53)] = 461,
  [SMALL_STATE(54)] = 465,
  [SMALL_STATE(55)] = 469,
  [SMALL_STATE(56)] = 473,
  [SMALL_STATE(57)] = 477,
  [SMALL_STATE(58)] = 481,
  [SMALL_STATE(59)] = 485,
  [SMALL_STATE(60)] = 489,
  [SMALL_STATE(61)] = 493,
  [SMALL_STATE(62)] = 497,
  [SMALL_STATE(63)] = 501,
  [SMALL_STATE(64)] = 505,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 1, .production_id = 8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_funk, 7, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_funk, 8, .production_id = 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_funk_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_funk_repeat1, 2), SHIFT_REPEAT(58),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(63),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminator, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_terminator, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7, .production_id = 12),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7, .production_id = 12),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_successors_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_successors_repeat1, 2), SHIFT_REPEAT(49),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, .production_id = 11),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6, .production_id = 11),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, .production_id = 10),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6, .production_id = 10),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, .production_id = 9),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6, .production_id = 9),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 6),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5, .production_id = 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5, .production_id = 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 5),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_op, 3, .production_id = 13),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predecessors, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predecessors, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predecessors, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 7),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [151] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 3),
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
