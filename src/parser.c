#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 10
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
  anon_sym_phi = 20,
  anon_sym_var = 21,
  anon_sym_terminator_COLON = 22,
  anon_sym_goto = 23,
  anon_sym_return = 24,
  anon_sym_if = 25,
  sym_halt = 26,
  anon_sym_DASH_GT = 27,
  sym_number = 28,
  sym_id = 29,
  sym_true = 30,
  sym_false = 31,
  sym_register = 32,
  sym_identifier = 33,
  sym_source_file = 34,
  sym_block_funk = 35,
  sym_block = 36,
  sym_instruction = 37,
  sym_move = 38,
  sym_bin_op = 39,
  sym_call = 40,
  sym_args = 41,
  sym_phi = 42,
  sym__phi_operands = 43,
  sym_var = 44,
  sym_terminator = 45,
  sym_goto = 46,
  sym_return = 47,
  sym_if = 48,
  sym__operand = 49,
  sym_successors = 50,
  sym_predecessors = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_block_funk_repeat1 = 53,
  aux_sym_block_repeat1 = 54,
  aux_sym_args_repeat1 = 55,
  aux_sym__phi_operands_repeat1 = 56,
  aux_sym_successors_repeat1 = 57,
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
  [anon_sym_phi] = "phi",
  [anon_sym_var] = "var",
  [anon_sym_terminator_COLON] = "terminator:",
  [anon_sym_goto] = "goto",
  [anon_sym_return] = "return",
  [anon_sym_if] = "if",
  [sym_halt] = "halt",
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
  [sym_return] = "return",
  [sym_if] = "if",
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
  [anon_sym_phi] = anon_sym_phi,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_terminator_COLON] = anon_sym_terminator_COLON,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_if] = anon_sym_if,
  [sym_halt] = sym_halt,
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
  [sym_return] = sym_return,
  [sym_if] = sym_if,
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
  [anon_sym_phi] = {
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_halt] = {
    .visible = true,
    .named = true,
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
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
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
      if (eof) ADVANCE(72);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'g') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ',') ADVANCE(1);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(97);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(91);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(75);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(102);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == 'k') ADVANCE(73);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 69:
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_block_funk);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPARENnode_id_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMAentry_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '_') ADVANCE(29);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(102);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COMMAargs_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_phi);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_terminator_COLON);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_halt);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
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
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
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
  [36] = {.lex_state = 2},
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
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
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
    [anon_sym_phi] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_terminator_COLON] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_halt] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(108),
    [sym_block_funk] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_block_funk] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_call,
    ACTIONS(9), 1,
      anon_sym_phi,
    STATE(3), 1,
      sym__operand,
    ACTIONS(11), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_register,
    STATE(53), 4,
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
  [39] = 5,
    ACTIONS(19), 1,
      anon_sym_goto,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_halt,
    STATE(33), 3,
      sym_goto,
      sym_return,
      sym_if,
  [57] = 3,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym__operand,
    ACTIONS(29), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_register,
  [70] = 4,
    ACTIONS(31), 1,
      anon_sym_terminator_COLON,
    ACTIONS(33), 1,
      sym_register,
    STATE(37), 1,
      sym_terminator,
    STATE(23), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [84] = 2,
    STATE(88), 1,
      sym__operand,
    ACTIONS(35), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_register,
  [94] = 2,
    STATE(56), 1,
      sym__operand,
    ACTIONS(37), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_register,
  [104] = 4,
    ACTIONS(31), 1,
      anon_sym_terminator_COLON,
    ACTIONS(33), 1,
      sym_register,
    STATE(32), 1,
      sym_terminator,
    STATE(20), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [118] = 4,
    ACTIONS(31), 1,
      anon_sym_terminator_COLON,
    ACTIONS(33), 1,
      sym_register,
    STATE(35), 1,
      sym_terminator,
    STATE(23), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [132] = 3,
    ACTIONS(41), 1,
      anon_sym_block,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
    STATE(13), 2,
      sym_block,
      aux_sym_block_funk_repeat1,
  [144] = 4,
    ACTIONS(31), 1,
      anon_sym_terminator_COLON,
    ACTIONS(33), 1,
      sym_register,
    STATE(39), 1,
      sym_terminator,
    STATE(23), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [158] = 3,
    ACTIONS(41), 1,
      anon_sym_block,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
    STATE(15), 2,
      sym_block,
      aux_sym_block_funk_repeat1,
  [170] = 2,
    STATE(87), 1,
      sym__operand,
    ACTIONS(45), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_register,
  [180] = 3,
    ACTIONS(49), 1,
      anon_sym_block,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
    STATE(15), 2,
      sym_block,
      aux_sym_block_funk_repeat1,
  [192] = 4,
    ACTIONS(31), 1,
      anon_sym_terminator_COLON,
    ACTIONS(33), 1,
      sym_register,
    STATE(31), 1,
      sym_terminator,
    STATE(10), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [206] = 4,
    ACTIONS(31), 1,
      anon_sym_terminator_COLON,
    ACTIONS(33), 1,
      sym_register,
    STATE(41), 1,
      sym_terminator,
    STATE(12), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [220] = 2,
    STATE(105), 1,
      sym__operand,
    ACTIONS(52), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_register,
  [230] = 4,
    ACTIONS(31), 1,
      anon_sym_terminator_COLON,
    ACTIONS(33), 1,
      sym_register,
    STATE(43), 1,
      sym_terminator,
    STATE(6), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [244] = 4,
    ACTIONS(31), 1,
      anon_sym_terminator_COLON,
    ACTIONS(33), 1,
      sym_register,
    STATE(29), 1,
      sym_terminator,
    STATE(23), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [258] = 2,
    STATE(68), 1,
      sym__operand,
    ACTIONS(54), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_register,
  [268] = 3,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_block_funk,
    STATE(22), 2,
      sym_block_funk,
      aux_sym_source_file_repeat1,
  [279] = 3,
    ACTIONS(61), 1,
      anon_sym_terminator_COLON,
    ACTIONS(63), 1,
      sym_register,
    STATE(23), 2,
      sym_instruction,
      aux_sym_block_repeat1,
  [290] = 3,
    ACTIONS(5), 1,
      anon_sym_block_funk,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_block_funk,
      aux_sym_source_file_repeat1,
  [301] = 4,
    ACTIONS(68), 1,
      anon_sym_COLON,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_predecessors,
    STATE(83), 1,
      sym_successors,
  [314] = 2,
    ACTIONS(74), 1,
      anon_sym_block,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [322] = 2,
    ACTIONS(78), 1,
      anon_sym_block,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [330] = 3,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_successors_repeat1,
  [340] = 2,
    ACTIONS(87), 1,
      anon_sym_block,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [348] = 3,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_var,
    STATE(42), 1,
      sym_var,
  [358] = 2,
    ACTIONS(95), 1,
      anon_sym_block,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [366] = 2,
    ACTIONS(99), 1,
      anon_sym_block,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [374] = 2,
    ACTIONS(103), 1,
      anon_sym_block,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [382] = 2,
    ACTIONS(107), 1,
      anon_sym_block,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [390] = 2,
    ACTIONS(111), 1,
      anon_sym_block,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [398] = 3,
    ACTIONS(113), 1,
      anon_sym_COLON,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_successors,
  [408] = 2,
    ACTIONS(119), 1,
      anon_sym_block,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [416] = 3,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_successors_repeat1,
  [426] = 2,
    ACTIONS(127), 1,
      anon_sym_block,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [434] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_successors_repeat1,
  [444] = 2,
    ACTIONS(133), 1,
      anon_sym_block,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [452] = 3,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym__phi_operands_repeat1,
  [462] = 2,
    ACTIONS(141), 1,
      anon_sym_block,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_block_funk,
  [470] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym__phi_operands_repeat1,
  [480] = 3,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_args_repeat1,
  [490] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_successors_repeat1,
  [500] = 3,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym__phi_operands_repeat1,
  [510] = 3,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_args_repeat1,
  [520] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_successors_repeat1,
  [530] = 3,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_args_repeat1,
  [540] = 1,
    ACTIONS(165), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [545] = 2,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      sym_id,
  [552] = 1,
    ACTIONS(171), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [557] = 1,
    ACTIONS(173), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [562] = 1,
    ACTIONS(175), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [567] = 1,
    ACTIONS(160), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [572] = 1,
    ACTIONS(177), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [577] = 1,
    ACTIONS(179), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [582] = 1,
    ACTIONS(151), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [587] = 1,
    ACTIONS(181), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [592] = 1,
    ACTIONS(183), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [597] = 2,
    ACTIONS(185), 1,
      anon_sym_LT_DASH,
    ACTIONS(187), 1,
      anon_sym_DASH_GT,
  [604] = 2,
    ACTIONS(91), 1,
      anon_sym_var,
    STATE(59), 1,
      sym_var,
  [611] = 1,
    ACTIONS(189), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [616] = 2,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym__phi_operands,
  [623] = 1,
    ACTIONS(193), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [628] = 1,
    ACTIONS(195), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [633] = 1,
    ACTIONS(197), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [638] = 1,
    ACTIONS(80), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [643] = 1,
    ACTIONS(199), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [648] = 2,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(203), 1,
      sym_id,
  [655] = 1,
    ACTIONS(205), 2,
      anon_sym_terminator_COLON,
      sym_register,
  [660] = 2,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_args,
  [667] = 1,
    ACTIONS(209), 1,
      anon_sym_COMMAargs_COLON,
  [671] = 1,
    ACTIONS(211), 1,
      sym_id,
  [675] = 1,
    ACTIONS(213), 1,
      anon_sym_COLON,
  [679] = 1,
    ACTIONS(187), 1,
      anon_sym_DASH_GT,
  [683] = 1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
  [687] = 1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
  [691] = 1,
    ACTIONS(219), 1,
      anon_sym_LT_DASH,
  [695] = 1,
    ACTIONS(221), 1,
      sym_id,
  [699] = 1,
    ACTIONS(223), 1,
      sym_id,
  [703] = 1,
    ACTIONS(225), 1,
      anon_sym_COLON,
  [707] = 1,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
  [711] = 1,
    ACTIONS(229), 1,
      sym_id,
  [715] = 1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
  [719] = 1,
    ACTIONS(233), 1,
      anon_sym_COMMA,
  [723] = 1,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
  [727] = 1,
    ACTIONS(237), 1,
      anon_sym_COMMA,
  [731] = 1,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
  [735] = 1,
    ACTIONS(241), 1,
      anon_sym_COLON,
  [739] = 1,
    ACTIONS(243), 1,
      anon_sym_COMMA,
  [743] = 1,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
  [747] = 1,
    ACTIONS(247), 1,
      anon_sym_COLON,
  [751] = 1,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
  [755] = 1,
    ACTIONS(251), 1,
      sym_id,
  [759] = 1,
    ACTIONS(253), 1,
      sym_id,
  [763] = 1,
    ACTIONS(255), 1,
      sym_id,
  [767] = 1,
    ACTIONS(257), 1,
      anon_sym_COMMAentry_COLON,
  [771] = 1,
    ACTIONS(259), 1,
      sym_id,
  [775] = 1,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
  [779] = 1,
    ACTIONS(263), 1,
      sym_identifier,
  [783] = 1,
    ACTIONS(265), 1,
      anon_sym_COLON,
  [787] = 1,
    ACTIONS(267), 1,
      anon_sym_LPARENnode_id_COLON,
  [791] = 1,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
  [795] = 1,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
  [799] = 1,
    ACTIONS(273), 1,
      sym_id,
  [803] = 1,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 39,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 104,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 132,
  [SMALL_STATE(12)] = 144,
  [SMALL_STATE(13)] = 158,
  [SMALL_STATE(14)] = 170,
  [SMALL_STATE(15)] = 180,
  [SMALL_STATE(16)] = 192,
  [SMALL_STATE(17)] = 206,
  [SMALL_STATE(18)] = 220,
  [SMALL_STATE(19)] = 230,
  [SMALL_STATE(20)] = 244,
  [SMALL_STATE(21)] = 258,
  [SMALL_STATE(22)] = 268,
  [SMALL_STATE(23)] = 279,
  [SMALL_STATE(24)] = 290,
  [SMALL_STATE(25)] = 301,
  [SMALL_STATE(26)] = 314,
  [SMALL_STATE(27)] = 322,
  [SMALL_STATE(28)] = 330,
  [SMALL_STATE(29)] = 340,
  [SMALL_STATE(30)] = 348,
  [SMALL_STATE(31)] = 358,
  [SMALL_STATE(32)] = 366,
  [SMALL_STATE(33)] = 374,
  [SMALL_STATE(34)] = 382,
  [SMALL_STATE(35)] = 390,
  [SMALL_STATE(36)] = 398,
  [SMALL_STATE(37)] = 408,
  [SMALL_STATE(38)] = 416,
  [SMALL_STATE(39)] = 426,
  [SMALL_STATE(40)] = 434,
  [SMALL_STATE(41)] = 444,
  [SMALL_STATE(42)] = 452,
  [SMALL_STATE(43)] = 462,
  [SMALL_STATE(44)] = 470,
  [SMALL_STATE(45)] = 480,
  [SMALL_STATE(46)] = 490,
  [SMALL_STATE(47)] = 500,
  [SMALL_STATE(48)] = 510,
  [SMALL_STATE(49)] = 520,
  [SMALL_STATE(50)] = 530,
  [SMALL_STATE(51)] = 540,
  [SMALL_STATE(52)] = 545,
  [SMALL_STATE(53)] = 552,
  [SMALL_STATE(54)] = 557,
  [SMALL_STATE(55)] = 562,
  [SMALL_STATE(56)] = 567,
  [SMALL_STATE(57)] = 572,
  [SMALL_STATE(58)] = 577,
  [SMALL_STATE(59)] = 582,
  [SMALL_STATE(60)] = 587,
  [SMALL_STATE(61)] = 592,
  [SMALL_STATE(62)] = 597,
  [SMALL_STATE(63)] = 604,
  [SMALL_STATE(64)] = 611,
  [SMALL_STATE(65)] = 616,
  [SMALL_STATE(66)] = 623,
  [SMALL_STATE(67)] = 628,
  [SMALL_STATE(68)] = 633,
  [SMALL_STATE(69)] = 638,
  [SMALL_STATE(70)] = 643,
  [SMALL_STATE(71)] = 648,
  [SMALL_STATE(72)] = 655,
  [SMALL_STATE(73)] = 660,
  [SMALL_STATE(74)] = 667,
  [SMALL_STATE(75)] = 671,
  [SMALL_STATE(76)] = 675,
  [SMALL_STATE(77)] = 679,
  [SMALL_STATE(78)] = 683,
  [SMALL_STATE(79)] = 687,
  [SMALL_STATE(80)] = 691,
  [SMALL_STATE(81)] = 695,
  [SMALL_STATE(82)] = 699,
  [SMALL_STATE(83)] = 703,
  [SMALL_STATE(84)] = 707,
  [SMALL_STATE(85)] = 711,
  [SMALL_STATE(86)] = 715,
  [SMALL_STATE(87)] = 719,
  [SMALL_STATE(88)] = 723,
  [SMALL_STATE(89)] = 727,
  [SMALL_STATE(90)] = 731,
  [SMALL_STATE(91)] = 735,
  [SMALL_STATE(92)] = 739,
  [SMALL_STATE(93)] = 743,
  [SMALL_STATE(94)] = 747,
  [SMALL_STATE(95)] = 751,
  [SMALL_STATE(96)] = 755,
  [SMALL_STATE(97)] = 759,
  [SMALL_STATE(98)] = 763,
  [SMALL_STATE(99)] = 767,
  [SMALL_STATE(100)] = 771,
  [SMALL_STATE(101)] = 775,
  [SMALL_STATE(102)] = 779,
  [SMALL_STATE(103)] = 783,
  [SMALL_STATE(104)] = 787,
  [SMALL_STATE(105)] = 791,
  [SMALL_STATE(106)] = 795,
  [SMALL_STATE(107)] = 799,
  [SMALL_STATE(108)] = 803,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 1, .production_id = 8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_funk, 7, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_funk, 8, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_funk_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_funk_repeat1, 2), SHIFT_REPEAT(75),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(80),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 10),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 10),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_successors_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_successors_repeat1, 2), SHIFT_REPEAT(81),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7, .production_id = 13),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7, .production_id = 13),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, .production_id = 11),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6, .production_id = 11),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminator, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_terminator, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5, .production_id = 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, .production_id = 10),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6, .production_id = 10),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, .production_id = 9),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6, .production_id = 9),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5, .production_id = 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 6),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5, .production_id = 6),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__phi_operands_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phi_operands_repeat1, 2), SHIFT_REPEAT(63),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(8),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predecessors, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 7),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 6, .production_id = 16),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phi_operands, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predecessors, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phi_operands, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 15),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phi, 2, .production_id = 12),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_op, 3, .production_id = 14),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predecessors, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phi_operands, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [275] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
