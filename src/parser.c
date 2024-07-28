#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_entity = 2,
  anon_sym_relation = 3,
  aux_sym_relation_association_token1 = 4,
  anon_sym_action = 5,
  anon_sym_permission = 6,
  anon_sym_EQ = 7,
  sym_comment = 8,
  sym_identifier = 9,
  sym_opening_brace = 10,
  sym_closing_brace = 11,
  sym_and_statement = 12,
  sym_or_statement = 13,
  sym_not_statement = 14,
  sym_in_statement = 15,
  anon_sym_boolean = 16,
  anon_sym_string = 17,
  anon_sym_integer = 18,
  anon_sym_double = 19,
  sym_source_file = 20,
  sym__instruction = 21,
  sym_entity_definition = 22,
  sym_relation_definition = 23,
  sym_relation_association = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_entity_definition_repeat1 = 26,
  aux_sym_relation_definition_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_entity] = "entity",
  [anon_sym_relation] = "relation",
  [aux_sym_relation_association_token1] = "relation_association_token1",
  [anon_sym_action] = "action",
  [anon_sym_permission] = "permission",
  [anon_sym_EQ] = " = ",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym_opening_brace] = "opening_brace",
  [sym_closing_brace] = "closing_brace",
  [sym_and_statement] = "and_statement",
  [sym_or_statement] = "or_statement",
  [sym_not_statement] = "not_statement",
  [sym_in_statement] = "in_statement",
  [anon_sym_boolean] = "boolean",
  [anon_sym_string] = "string",
  [anon_sym_integer] = "integer",
  [anon_sym_double] = "double",
  [sym_source_file] = "source_file",
  [sym__instruction] = "_instruction",
  [sym_entity_definition] = "entity_definition",
  [sym_relation_definition] = "relation_definition",
  [sym_relation_association] = "relation_association",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_entity_definition_repeat1] = "entity_definition_repeat1",
  [aux_sym_relation_definition_repeat1] = "relation_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_relation] = anon_sym_relation,
  [aux_sym_relation_association_token1] = aux_sym_relation_association_token1,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_permission] = anon_sym_permission,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [sym_opening_brace] = sym_opening_brace,
  [sym_closing_brace] = sym_closing_brace,
  [sym_and_statement] = sym_and_statement,
  [sym_or_statement] = sym_or_statement,
  [sym_not_statement] = sym_not_statement,
  [sym_in_statement] = sym_in_statement,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_double] = anon_sym_double,
  [sym_source_file] = sym_source_file,
  [sym__instruction] = sym__instruction,
  [sym_entity_definition] = sym_entity_definition,
  [sym_relation_definition] = sym_relation_definition,
  [sym_relation_association] = sym_relation_association,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_entity_definition_repeat1] = aux_sym_entity_definition_repeat1,
  [aux_sym_relation_definition_repeat1] = aux_sym_relation_definition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relation] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_relation_association_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_permission] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_opening_brace] = {
    .visible = true,
    .named = true,
  },
  [sym_closing_brace] = {
    .visible = true,
    .named = true,
  },
  [sym_and_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_or_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_not_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_in_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_entity_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_association] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_association_name = 1,
  field_name = 2,
  field_relation_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_association_name] = "association_name",
  [field_name] = "name",
  [field_relation_name] = "relation_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_relation_name, 1},
  [2] =
    {field_association_name, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        ' ', 2,
        '/', 10,
        '@', 69,
        'a', 14,
        'b', 45,
        'd', 43,
        'e', 41,
        'i', 42,
        'p', 20,
        'r', 17,
        's', 60,
        '{', 75,
        '}', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ' ', 2,
        '/', 10,
        '=', 4,
        '@', 69,
        'a', 15,
        'b', 45,
        'd', 43,
        'e', 41,
        'i', 35,
        'n', 47,
        'o', 52,
        'p', 20,
        'r', 17,
        's', 60,
        '{', 75,
        '}', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        ' ', 2,
        '/', 10,
        '@', 69,
        'a', 14,
        'b', 45,
        'd', 43,
        'e', 41,
        'i', 42,
        'p', 20,
        'r', 17,
        's', 60,
        '{', 75,
        '}', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 64:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_relation_association_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_permission);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_opening_brace);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_closing_brace);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_and_statement);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_or_statement);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_not_statement);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_in_statement);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
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
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_relation] = ACTIONS(1),
    [aux_sym_relation_association_token1] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_permission] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_opening_brace] = ACTIONS(1),
    [sym_closing_brace] = ACTIONS(1),
    [sym_and_statement] = ACTIONS(1),
    [sym_or_statement] = ACTIONS(1),
    [sym_not_statement] = ACTIONS(1),
    [sym_in_statement] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym__instruction] = STATE(19),
    [sym_entity_definition] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_entity] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_relation_association_token1,
    ACTIONS(9), 2,
      anon_sym_relation,
      sym_closing_brace,
    STATE(2), 2,
      sym_relation_association,
      aux_sym_relation_definition_repeat1,
    ACTIONS(14), 4,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
  [21] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_relation_association_token1,
    ACTIONS(17), 2,
      anon_sym_relation,
      sym_closing_brace,
    STATE(2), 2,
      sym_relation_association,
      aux_sym_relation_definition_repeat1,
    ACTIONS(21), 4,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
  [42] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_relation_association_token1,
    ACTIONS(23), 2,
      anon_sym_relation,
      sym_closing_brace,
    STATE(3), 2,
      sym_relation_association,
      aux_sym_relation_definition_repeat1,
    ACTIONS(25), 4,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
  [63] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 7,
      anon_sym_relation,
      aux_sym_relation_association_token1,
      sym_closing_brace,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
  [76] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_entity,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(19), 2,
      sym__instruction,
      sym_entity_definition,
  [93] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_entity,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(19), 2,
      sym__instruction,
      sym_entity_definition,
  [110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_relation,
    ACTIONS(39), 1,
      sym_closing_brace,
    STATE(8), 2,
      sym_relation_definition,
      aux_sym_entity_definition_repeat1,
  [124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_relation,
    ACTIONS(43), 1,
      sym_closing_brace,
    STATE(10), 2,
      sym_relation_definition,
      aux_sym_entity_definition_repeat1,
  [138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_relation,
    ACTIONS(45), 1,
      sym_closing_brace,
    STATE(8), 2,
      sym_relation_definition,
      aux_sym_entity_definition_repeat1,
  [152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_relation_association_token1,
    STATE(4), 1,
      sym_relation_association,
  [162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_entity,
  [170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_identifier,
  [177] = 2,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 1,
      sym_comment,
  [184] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LF,
  [191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
  [198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_identifier,
  [205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_opening_brace,
  [212] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LF,
  [219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 93,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 124,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 152,
  [SMALL_STATE(12)] = 162,
  [SMALL_STATE(13)] = 170,
  [SMALL_STATE(14)] = 177,
  [SMALL_STATE(15)] = 184,
  [SMALL_STATE(16)] = 191,
  [SMALL_STATE(17)] = 198,
  [SMALL_STATE(18)] = 205,
  [SMALL_STATE(19)] = 212,
  [SMALL_STATE(20)] = 219,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_definition_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_definition, 4, 0, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_definition, 3, 0, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_association, 2, 0, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_definition_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 4, 0, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 5, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_perm(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
