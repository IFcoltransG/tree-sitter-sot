#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_def = 1,
  anon_sym_DASH_GT = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COLON = 6,
  anon_sym_u8 = 7,
  anon_sym_LBRACE = 8,
  anon_sym_SEMI = 9,
  anon_sym_RBRACE = 10,
  anon_sym_let = 11,
  anon_sym_EQ = 12,
  anon_sym_PLUS = 13,
  anon_sym_DASH = 14,
  anon_sym_STAR = 15,
  anon_sym_SLASH = 16,
  sym_identifier = 17,
  sym_number = 18,
  sym_source_file = 19,
  sym__definition = 20,
  sym_function_definition = 21,
  sym_parameter_list = 22,
  sym_binding_definition = 23,
  sym__type = 24,
  sym_primitive_type = 25,
  sym_code_block = 26,
  sym__statement = 27,
  sym__expression = 28,
  sym_assignment = 29,
  sym__binary_expression = 30,
  sym_add = 31,
  sym_subtract = 32,
  sym_multiply = 33,
  sym_divide = 34,
  sym_trailing_semicolon = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_parameter_list_repeat1 = 37,
  aux_sym_code_block_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_def] = "def",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_u8] = "u8",
  [anon_sym_LBRACE] = "{",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_binding_definition] = "binding_definition",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_code_block] = "code_block",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_assignment] = "assignment",
  [sym__binary_expression] = "_binary_expression",
  [sym_add] = "add",
  [sym_subtract] = "subtract",
  [sym_multiply] = "multiply",
  [sym_divide] = "divide",
  [sym_trailing_semicolon] = "trailing_semicolon",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_code_block_repeat1] = "code_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_binding_definition] = sym_binding_definition,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_code_block] = sym_code_block,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_assignment] = sym_assignment,
  [sym__binary_expression] = sym__binary_expression,
  [sym_add] = sym_add,
  [sym_subtract] = sym_subtract,
  [sym_multiply] = sym_multiply,
  [sym_divide] = sym_divide,
  [sym_trailing_semicolon] = sym_trailing_semicolon,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_code_block_repeat1] = aux_sym_code_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_binding_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__binary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_subtract] = {
    .visible = true,
    .named = true,
  },
  [sym_multiply] = {
    .visible = true,
    .named = true,
  },
  [sym_divide] = {
    .visible = true,
    .named = true,
  },
  [sym_trailing_semicolon] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_code = 1,
  field_left = 2,
  field_name = 3,
  field_parameters = 4,
  field_return_type = 5,
  field_right = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_code] = "code",
  [field_left] = "left",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 5},
  [3] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_code, 3},
    {field_name, 1},
    {field_parameters, 2},
  [3] =
    {field_code, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 3},
    {field_return_type, 4},
  [8] =
    {field_left, 0},
    {field_right, 2},
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
      if (eof) ADVANCE(9);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(3);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '8') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(11);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym__definition] = STATE(23),
    [sym_function_definition] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_def] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_number,
    STATE(38), 2,
      sym__statement,
      sym_assignment,
    STATE(20), 6,
      sym__expression,
      sym__binary_expression,
      sym_add,
      sym_subtract,
      sym_multiply,
      sym_divide,
  [28] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_number,
    STATE(38), 2,
      sym__statement,
      sym_assignment,
    STATE(20), 6,
      sym__expression,
      sym__binary_expression,
      sym_add,
      sym_subtract,
      sym_multiply,
      sym_divide,
  [53] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_number,
    STATE(26), 2,
      sym__statement,
      sym_assignment,
    STATE(20), 6,
      sym__expression,
      sym__binary_expression,
      sym_add,
      sym_subtract,
      sym_multiply,
      sym_divide,
  [78] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 2,
      sym_identifier,
      sym_number,
    STATE(16), 6,
      sym__expression,
      sym__binary_expression,
      sym_add,
      sym_subtract,
      sym_multiply,
      sym_divide,
  [94] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 2,
      sym_identifier,
      sym_number,
    STATE(18), 6,
      sym__expression,
      sym__binary_expression,
      sym_add,
      sym_subtract,
      sym_multiply,
      sym_divide,
  [110] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 2,
      sym_identifier,
      sym_number,
    STATE(21), 6,
      sym__expression,
      sym__binary_expression,
      sym_add,
      sym_subtract,
      sym_multiply,
      sym_divide,
  [126] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 2,
      sym_identifier,
      sym_number,
    STATE(13), 6,
      sym__expression,
      sym__binary_expression,
      sym_add,
      sym_subtract,
      sym_multiply,
      sym_divide,
  [142] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 2,
      sym_identifier,
      sym_number,
    STATE(14), 6,
      sym__expression,
      sym__binary_expression,
      sym_add,
      sym_subtract,
      sym_multiply,
      sym_divide,
  [158] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 2,
      sym_identifier,
      sym_number,
    STATE(15), 6,
      sym__expression,
      sym__binary_expression,
      sym_add,
      sym_subtract,
      sym_multiply,
      sym_divide,
  [174] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 2,
      sym_identifier,
      sym_number,
    STATE(19), 6,
      sym__expression,
      sym__binary_expression,
      sym_add,
      sym_subtract,
      sym_multiply,
      sym_divide,
  [190] = 1,
    ACTIONS(31), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [200] = 3,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(33), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [214] = 3,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(39), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [228] = 1,
    ACTIONS(41), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [238] = 1,
    ACTIONS(43), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [248] = 2,
    ACTIONS(47), 1,
      anon_sym_EQ,
    ACTIONS(45), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [260] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(49), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [277] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [294] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [311] = 5,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
  [327] = 3,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_def,
    STATE(22), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [339] = 3,
    ACTIONS(5), 1,
      anon_sym_def,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [351] = 1,
    ACTIONS(68), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [358] = 4,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_code_block_repeat1,
    STATE(54), 1,
      sym_trailing_semicolon,
  [371] = 4,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_code_block_repeat1,
    STATE(53), 1,
      sym_trailing_semicolon,
  [384] = 2,
    ACTIONS(76), 1,
      anon_sym_u8,
    STATE(35), 2,
      sym__type,
      sym_primitive_type,
  [392] = 3,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(41), 1,
      sym_binding_definition,
  [402] = 3,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      sym_binding_definition,
  [412] = 3,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_parameter_list_repeat1,
  [422] = 3,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_binding_definition,
  [432] = 3,
    ACTIONS(91), 1,
      anon_sym_DASH_GT,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_code_block,
  [442] = 3,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_code_block_repeat1,
  [452] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_parameter_list_repeat1,
  [462] = 1,
    ACTIONS(104), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [468] = 2,
    ACTIONS(76), 1,
      anon_sym_u8,
    STATE(39), 2,
      sym__type,
      sym_primitive_type,
  [476] = 3,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_parameter_list_repeat1,
  [486] = 1,
    ACTIONS(98), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [491] = 2,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_code_block,
  [498] = 1,
    ACTIONS(108), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [503] = 1,
    ACTIONS(87), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [508] = 1,
    ACTIONS(110), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [513] = 2,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(41), 1,
      sym_binding_definition,
  [520] = 1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [525] = 1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [530] = 1,
    ACTIONS(116), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [535] = 2,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(55), 1,
      sym_binding_definition,
  [542] = 1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [547] = 1,
    ACTIONS(120), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [552] = 1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [557] = 2,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_parameter_list,
  [564] = 1,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [569] = 1,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
  [573] = 1,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
  [577] = 1,
    ACTIONS(130), 1,
      anon_sym_EQ,
  [581] = 1,
    ACTIONS(132), 1,
      anon_sym_COLON,
  [585] = 1,
    ACTIONS(134), 1,
      sym_identifier,
  [589] = 1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 142,
  [SMALL_STATE(10)] = 158,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 190,
  [SMALL_STATE(13)] = 200,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 228,
  [SMALL_STATE(16)] = 238,
  [SMALL_STATE(17)] = 248,
  [SMALL_STATE(18)] = 260,
  [SMALL_STATE(19)] = 277,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 311,
  [SMALL_STATE(22)] = 327,
  [SMALL_STATE(23)] = 339,
  [SMALL_STATE(24)] = 351,
  [SMALL_STATE(25)] = 358,
  [SMALL_STATE(26)] = 371,
  [SMALL_STATE(27)] = 384,
  [SMALL_STATE(28)] = 392,
  [SMALL_STATE(29)] = 402,
  [SMALL_STATE(30)] = 412,
  [SMALL_STATE(31)] = 422,
  [SMALL_STATE(32)] = 432,
  [SMALL_STATE(33)] = 442,
  [SMALL_STATE(34)] = 452,
  [SMALL_STATE(35)] = 462,
  [SMALL_STATE(36)] = 468,
  [SMALL_STATE(37)] = 476,
  [SMALL_STATE(38)] = 486,
  [SMALL_STATE(39)] = 491,
  [SMALL_STATE(40)] = 498,
  [SMALL_STATE(41)] = 503,
  [SMALL_STATE(42)] = 508,
  [SMALL_STATE(43)] = 513,
  [SMALL_STATE(44)] = 520,
  [SMALL_STATE(45)] = 525,
  [SMALL_STATE(46)] = 530,
  [SMALL_STATE(47)] = 535,
  [SMALL_STATE(48)] = 542,
  [SMALL_STATE(49)] = 547,
  [SMALL_STATE(50)] = 552,
  [SMALL_STATE(51)] = 557,
  [SMALL_STATE(52)] = 564,
  [SMALL_STATE(53)] = 569,
  [SMALL_STATE(54)] = 573,
  [SMALL_STATE(55)] = 577,
  [SMALL_STATE(56)] = 581,
  [SMALL_STATE(57)] = 585,
  [SMALL_STATE(58)] = 589,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailing_semicolon, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 3, .production_id = 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtract, 3, .production_id = 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiply, 3, .production_id = 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divide, 3, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(43),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_definition, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [136] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sot(void) {
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
