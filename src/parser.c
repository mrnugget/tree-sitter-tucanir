#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 17

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
  anon_sym_call = 16,
  anon_sym_COMMAargs_COLON = 17,
  anon_sym_LPAREN = 18,
  anon_sym_COMMA = 19,
  anon_sym_phi_LPAREN = 20,
  anon_sym_var = 21,
  anon_sym_terminator_COLON = 22,
  anon_sym_goto = 23,
  anon_sym_DASH_GT = 24,
  sym_number = 25,
  sym_id = 26,
  sym_true = 27,
  sym_false = 28,
  sym_register = 29,
  sym_identifier = 30,
  sym_source_file = 31,
  sym_block_funk = 32,
  sym_block = 33,
  sym_instruction = 34,
  sym_move = 35,
  sym_bin_op = 36,
  sym_call = 37,
  sym_args = 38,
  sym_phi = 39,
  sym__phi_operands = 40,
  sym_var = 41,
  sym_terminator = 42,
  sym_goto = 43,
  sym__operand = 44,
  sym_successors = 45,
  sym_predecessors = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_block_funk_repeat1 = 48,
  aux_sym_block_repeat1 = 49,
  aux_sym_args_repeat1 = 50,
  aux_sym__phi_operands_repeat1 = 51,
  aux_sym_successors_repeat1 = 52,
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
  [anon_sym_call] = "call",
  [anon_sym_COMMAargs_COLON] = ", args:",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_phi_LPAREN] = "phi(",
  [anon_sym_var] = "var",
  [anon_sym_terminator_COLON] = "terminator:",
  [anon_sym_goto] = "goto",
  [anon_sym_DASH_GT] = "->",
  [sym_number] = "number",
  [sym_id] = "id",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_register] = "register",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_block_funk] = "block_funk",
  [sym_block] = "block",
  [sym_instruction] = "instruction",
  [sym_move] = "move",
  [sym_bin_op] = "bin_op",
  [sym_call] = "call",
  [sym_args] = "args",
  [sym_phi] = "phi",
  [sym__phi_operands] = "_phi_operands",
  [sym_var] = "var",
  [sym_terminator] = "terminator",
  [sym_goto] = "goto",
  [sym__operand] = "_operand",
  [sym_successors] = "successors",
  [sym_predecessors] = "predecessors",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_funk_repeat1] = "block_funk_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
  [aux_sym__phi_operands_repeat1] = "_phi_operands_repeat1",
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
  [anon_sym_call] = anon_sym_call,
  [anon_sym_COMMAargs_COLON] = anon_sym_COMMAargs_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_phi_LPAREN] = anon_sym_phi_LPAREN,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_terminator_COLON] = anon_sym_terminator_COLON,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_number] = sym_number,
  [sym_id] = sym_id,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_register] = sym_register,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_block_funk] = sym_block_funk,
  [sym_block] = sym_block,
  [sym_instruction] = sym_instruction,
  [sym_move] = sym_move,
  [sym_bin_op] = sym_bin_op,
  [sym_call] = sym_call,
  [sym_args] = sym_args,
  [sym_phi] = sym_phi,
  [sym__phi_operands] = sym__phi_operands,
  [sym_var] = sym_var,
  [sym_terminator] = sym_terminator,
  [sym_goto] = sym_goto,
  [sym__operand] = sym__operand,
  [sym_successors] = sym_successors,
  [sym_predecessors] = sym_predecessors,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_funk_repeat1] = aux_sym_block_funk_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_args_repeat1] = aux_sym_args_repeat1,
  [aux_sym__phi_operands_repeat1] = aux_sym__phi_operands_repeat1,
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
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAargs_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phi_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
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
  [anon_sym_DASH_GT] = {
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
  [sym_identifier] = {
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
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_args] = {
    .visible = true,
    .named = true,
  },
  [sym_phi] = {
    .visible = true,
    .named = true,
  },
  [sym__phi_operands] = {
    .visible = false,
    .named = true,
  },
  [sym_var] = {
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
  [aux_sym_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__phi_operands_repeat1] = {
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
  field_operands = 9,
  field_operator = 10,
  field_predecessors = 11,
  field_rhs = 12,
  field_source = 13,
  field_successors = 14,
  field_target = 15,
  field_terminator = 16,
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
  [field_operands] = "operands",
  [field_operator] = "operator",
  [field_predecessors] = "predecessors",
  [field_rhs] = "rhs",
  [field_source] = "source",
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
  [12] = {.index = 32, .length = 1},
  [13] = {.index = 33, .length = 5},
  [14] = {.index = 38, .length = 3},
  [15] = {.index = 41, .length = 1},
  [16] = {.index = 42, .length = 2},
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
    {field_operands, 1},
  [33] =
    {field_block_id, 1},
    {field_instructions, 5},
    {field_predecessors, 2},
    {field_successors, 3},
    {field_terminator, 6},
  [38] =
    {field_lhs, 0},
    {field_operator, 1},
    {field_rhs, 2},
  [41] =
    {field_target, 1},
  [42] =
    {field_block_id, 2},
    {field_source, 4},
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
      if (eof) ADVANCE(64);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'g') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(1);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(71);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(3);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(69);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 61:
      if (lookahead == 'y') ADVANCE(9);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(96);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_block_funk);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPARENnode_id_COLON);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COMMAentry_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMAargs_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_phi_LPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_terminator_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 2},
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
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0},
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
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_phi_LPAREN] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_terminator_COLON] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(86),
    [sym_block_funk] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_block_funk] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_call,
    ACTIONS(9), 1,
      anon_sym_phi_LPAREN,
    STATE(3), 1,
      sym__operand,
    ACTIONS(11), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_register,
    STATE(52), 4,
      sym_move,
      sym_bin_op,
      sym_call,
      sym_phi,
  [22] = 3,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 2,
      anon_sym_terminator_COLON,
      sym_register,
    ACTIONS(13), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [39] = 3,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__operand,
    ACTIONS(21), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_register,
  [52] = 4,
    ACTIONS(23), 1,
      anon_sym_terminator_COLON,
    ACTIONS(25), 1,
      sym_register,
    STATE(44), 1,
      sym_terminator,
    STATE(21), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [66] = 2,
    STATE(51), 1,
      sym__operand,
    ACTIONS(27), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_register,
  [76] = 2,
    STATE(88), 1,
      sym__operand,
    ACTIONS(29), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_register,
  [86] = 4,
    ACTIONS(23), 1,
      anon_sym_terminator_COLON,
    ACTIONS(25), 1,
      sym_register,
    STATE(37), 1,
      sym_terminator,
    STATE(21), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [100] = 4,
    ACTIONS(23), 1,
      anon_sym_terminator_COLON,
    ACTIONS(25), 1,
      sym_register,
    STATE(45), 1,
      sym_terminator,
    STATE(21), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [114] = 2,
    STATE(63), 1,
      sym__operand,
    ACTIONS(31), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_register,
  [124] = 4,
    ACTIONS(23), 1,
      anon_sym_terminator_COLON,
    ACTIONS(25), 1,
      sym_register,
    STATE(33), 1,
      sym_terminator,
    STATE(21), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [138] = 3,
    ACTIONS(35), 1,
      anon_sym_block,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
    STATE(14), 2,
      sym_block,
      aux_sym_block_funk_repeat1,
  [150] = 4,
    ACTIONS(23), 1,
      anon_sym_terminator_COLON,
    ACTIONS(25), 1,
      sym_register,
    STATE(38), 1,
      sym_terminator,
    STATE(11), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [164] = 3,
    ACTIONS(35), 1,
      anon_sym_block,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
    STATE(15), 2,
      sym_block,
      aux_sym_block_funk_repeat1,
  [176] = 3,
    ACTIONS(41), 1,
      anon_sym_block,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
    STATE(15), 2,
      sym_block,
      aux_sym_block_funk_repeat1,
  [188] = 4,
    ACTIONS(23), 1,
      anon_sym_terminator_COLON,
    ACTIONS(25), 1,
      sym_register,
    STATE(30), 1,
      sym_terminator,
    STATE(8), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [202] = 4,
    ACTIONS(23), 1,
      anon_sym_terminator_COLON,
    ACTIONS(25), 1,
      sym_register,
    STATE(42), 1,
      sym_terminator,
    STATE(5), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [216] = 4,
    ACTIONS(23), 1,
      anon_sym_terminator_COLON,
    ACTIONS(25), 1,
      sym_register,
    STATE(43), 1,
      sym_terminator,
    STATE(9), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [230] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_block_funk,
    STATE(19), 2,
      sym_block_funk,
      aux_sym_source_file_repeat1,
  [241] = 4,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_predecessors,
    STATE(79), 1,
      sym_successors,
  [254] = 3,
    ACTIONS(53), 1,
      anon_sym_terminator_COLON,
    ACTIONS(55), 1,
      sym_register,
    STATE(21), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [265] = 3,
    ACTIONS(5), 1,
      anon_sym_block_funk,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(19), 2,
      sym_block_funk,
      aux_sym_source_file_repeat1,
  [276] = 4,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    ACTIONS(62), 1,
      anon_sym_var,
    STATE(35), 1,
      sym_var,
    STATE(61), 1,
      sym__phi_operands,
  [289] = 2,
    ACTIONS(66), 1,
      anon_sym_block,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [297] = 3,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_successors_repeat1,
  [307] = 3,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_args_repeat1,
  [317] = 3,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_successors,
  [327] = 3,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_args_repeat1,
  [337] = 3,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_args_repeat1,
  [347] = 2,
    ACTIONS(89), 1,
      anon_sym_block,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [355] = 3,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym__phi_operands_repeat1,
  [365] = 3,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym__phi_operands_repeat1,
  [375] = 2,
    ACTIONS(102), 1,
      anon_sym_block,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [383] = 3,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_successors_repeat1,
  [393] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym__phi_operands_repeat1,
  [403] = 2,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [411] = 2,
    ACTIONS(117), 1,
      anon_sym_block,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [419] = 2,
    ACTIONS(121), 1,
      anon_sym_block,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [427] = 3,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_successors_repeat1,
  [437] = 3,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_successors_repeat1,
  [447] = 3,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_successors_repeat1,
  [457] = 2,
    ACTIONS(131), 1,
      anon_sym_block,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [465] = 2,
    ACTIONS(135), 1,
      anon_sym_block,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [473] = 2,
    ACTIONS(139), 1,
      anon_sym_block,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [481] = 2,
    ACTIONS(143), 1,
      anon_sym_block,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [489] = 1,
    ACTIONS(145), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [494] = 2,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_args,
  [501] = 1,
    ACTIONS(149), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [506] = 2,
    ACTIONS(151), 1,
      anon_sym_goto,
    STATE(36), 1,
      sym_goto,
  [513] = 1,
    ACTIONS(153), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [518] = 1,
    ACTIONS(72), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [523] = 1,
    ACTIONS(155), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [528] = 1,
    ACTIONS(157), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [533] = 1,
    ACTIONS(159), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [538] = 2,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 1,
      sym_id,
  [545] = 1,
    ACTIONS(165), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [550] = 2,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      sym_id,
  [557] = 1,
    ACTIONS(171), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [562] = 1,
    ACTIONS(173), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [567] = 1,
    ACTIONS(91), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [572] = 1,
    ACTIONS(175), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [577] = 2,
    ACTIONS(177), 1,
      anon_sym_LT_DASH,
    ACTIONS(179), 1,
      anon_sym_DASH_GT,
  [584] = 1,
    ACTIONS(181), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [589] = 1,
    ACTIONS(104), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [594] = 1,
    ACTIONS(183), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [599] = 2,
    ACTIONS(62), 1,
      anon_sym_var,
    STATE(60), 1,
      sym_var,
  [606] = 1,
    ACTIONS(185), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [611] = 1,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
  [615] = 1,
    ACTIONS(189), 1,
      anon_sym_COMMAargs_COLON,
  [619] = 1,
    ACTIONS(191), 1,
      anon_sym_COLON,
  [623] = 1,
    ACTIONS(193), 1,
      sym_id,
  [627] = 1,
    ACTIONS(195), 1,
      anon_sym_COLON,
  [631] = 1,
    ACTIONS(197), 1,
      anon_sym_COLON,
  [635] = 1,
    ACTIONS(179), 1,
      anon_sym_DASH_GT,
  [639] = 1,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
  [643] = 1,
    ACTIONS(201), 1,
      sym_id,
  [647] = 1,
    ACTIONS(203), 1,
      sym_id,
  [651] = 1,
    ACTIONS(205), 1,
      anon_sym_COMMA,
  [655] = 1,
    ACTIONS(207), 1,
      anon_sym_COLON,
  [659] = 1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
  [663] = 1,
    ACTIONS(211), 1,
      anon_sym_COMMAentry_COLON,
  [667] = 1,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
  [671] = 1,
    ACTIONS(215), 1,
      anon_sym_COLON,
  [675] = 1,
    ACTIONS(217), 1,
      anon_sym_LPARENnode_id_COLON,
  [679] = 1,
    ACTIONS(219), 1,
      sym_id,
  [683] = 1,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
  [687] = 1,
    ACTIONS(223), 1,
      anon_sym_LT_DASH,
  [691] = 1,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
  [695] = 1,
    ACTIONS(227), 1,
      sym_id,
  [699] = 1,
    ACTIONS(229), 1,
      sym_id,
  [703] = 1,
    ACTIONS(231), 1,
      sym_identifier,
  [707] = 1,
    ACTIONS(233), 1,
      sym_id,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 39,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 86,
  [SMALL_STATE(9)] = 100,
  [SMALL_STATE(10)] = 114,
  [SMALL_STATE(11)] = 124,
  [SMALL_STATE(12)] = 138,
  [SMALL_STATE(13)] = 150,
  [SMALL_STATE(14)] = 164,
  [SMALL_STATE(15)] = 176,
  [SMALL_STATE(16)] = 188,
  [SMALL_STATE(17)] = 202,
  [SMALL_STATE(18)] = 216,
  [SMALL_STATE(19)] = 230,
  [SMALL_STATE(20)] = 241,
  [SMALL_STATE(21)] = 254,
  [SMALL_STATE(22)] = 265,
  [SMALL_STATE(23)] = 276,
  [SMALL_STATE(24)] = 289,
  [SMALL_STATE(25)] = 297,
  [SMALL_STATE(26)] = 307,
  [SMALL_STATE(27)] = 317,
  [SMALL_STATE(28)] = 327,
  [SMALL_STATE(29)] = 337,
  [SMALL_STATE(30)] = 347,
  [SMALL_STATE(31)] = 355,
  [SMALL_STATE(32)] = 365,
  [SMALL_STATE(33)] = 375,
  [SMALL_STATE(34)] = 383,
  [SMALL_STATE(35)] = 393,
  [SMALL_STATE(36)] = 403,
  [SMALL_STATE(37)] = 411,
  [SMALL_STATE(38)] = 419,
  [SMALL_STATE(39)] = 427,
  [SMALL_STATE(40)] = 437,
  [SMALL_STATE(41)] = 447,
  [SMALL_STATE(42)] = 457,
  [SMALL_STATE(43)] = 465,
  [SMALL_STATE(44)] = 473,
  [SMALL_STATE(45)] = 481,
  [SMALL_STATE(46)] = 489,
  [SMALL_STATE(47)] = 494,
  [SMALL_STATE(48)] = 501,
  [SMALL_STATE(49)] = 506,
  [SMALL_STATE(50)] = 513,
  [SMALL_STATE(51)] = 518,
  [SMALL_STATE(52)] = 523,
  [SMALL_STATE(53)] = 528,
  [SMALL_STATE(54)] = 533,
  [SMALL_STATE(55)] = 538,
  [SMALL_STATE(56)] = 545,
  [SMALL_STATE(57)] = 550,
  [SMALL_STATE(58)] = 557,
  [SMALL_STATE(59)] = 562,
  [SMALL_STATE(60)] = 567,
  [SMALL_STATE(61)] = 572,
  [SMALL_STATE(62)] = 577,
  [SMALL_STATE(63)] = 584,
  [SMALL_STATE(64)] = 589,
  [SMALL_STATE(65)] = 594,
  [SMALL_STATE(66)] = 599,
  [SMALL_STATE(67)] = 606,
  [SMALL_STATE(68)] = 611,
  [SMALL_STATE(69)] = 615,
  [SMALL_STATE(70)] = 619,
  [SMALL_STATE(71)] = 623,
  [SMALL_STATE(72)] = 627,
  [SMALL_STATE(73)] = 631,
  [SMALL_STATE(74)] = 635,
  [SMALL_STATE(75)] = 639,
  [SMALL_STATE(76)] = 643,
  [SMALL_STATE(77)] = 647,
  [SMALL_STATE(78)] = 651,
  [SMALL_STATE(79)] = 655,
  [SMALL_STATE(80)] = 659,
  [SMALL_STATE(81)] = 663,
  [SMALL_STATE(82)] = 667,
  [SMALL_STATE(83)] = 671,
  [SMALL_STATE(84)] = 675,
  [SMALL_STATE(85)] = 679,
  [SMALL_STATE(86)] = 683,
  [SMALL_STATE(87)] = 687,
  [SMALL_STATE(88)] = 691,
  [SMALL_STATE(89)] = 695,
  [SMALL_STATE(90)] = 699,
  [SMALL_STATE(91)] = 703,
  [SMALL_STATE(92)] = 707,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 1, .production_id = 8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_funk, 7, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_funk, 8, .production_id = 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_funk_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_funk_repeat1, 2), SHIFT_REPEAT(89),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto, 4),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(6),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__phi_operands_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phi_operands_repeat1, 2), SHIFT_REPEAT(66),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7, .production_id = 13),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7, .production_id = 13),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_successors_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_successors_repeat1, 2), SHIFT_REPEAT(85),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminator, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_terminator, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5, .production_id = 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, .production_id = 11),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6, .production_id = 11),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5, .production_id = 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 6),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5, .production_id = 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, .production_id = 9),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6, .production_id = 9),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, .production_id = 10),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6, .production_id = 10),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 15),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 6, .production_id = 16),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 7),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predecessors, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predecessors, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phi_operands, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phi, 2, .production_id = 12),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_op, 3, .production_id = 14),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predecessors, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phi_operands, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [221] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
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
