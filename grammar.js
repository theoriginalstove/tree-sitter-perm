/**
 * @file Perm grammer for tree-sitter
 * @author Steven Turturo <steven@dryheatlabs.com>
 * @license MIT
 */

const newline = "\n";

const PREC = {
  primary: 7,
  unary: 6,
  multiplicative: 5,
  additive: 4,
  comparative: 3,
  and: 2,
  or: 1,
  composite_literal: -1,
};

module.exports = grammar({
  name: "perm",

  extras: ($) => [$.comment, /\s+/],

  conflicts: ($) => [],

  supertypes: ($) => [$._expression],

  rules: {
    source_file: ($) => repeat(seq($._instruction, "\n")),

    _instruction: ($) => choice($.entity_definition, $.rule_definition),

    entity_definition: ($) =>
      seq(
        "entity",
        field("name", $.identifier),
        $.open_brace,
        optional(
          repeat(
            choice(
              $.relation_definition,
              $.action_definition,
              $.attribute_definition,
              $.permission_definition,
            ),
          ),
        ),
        $.close_brace,
      ),

    relation_definition: ($) =>
      seq(
        "relation",
        field("relation_name", $.identifier),
        $.relation_association,
        optional(
          repeat(
            choice(
              $.and_statement,
              $.or_statement,
              $.not_statement,
              $.in_statement,
              $.relation_association,
            ),
          ),
        ),
      ),

    relation_association: ($) =>
      seq(
        /@/,
        field("association_name", $.identifier),
        field("member", optional($.relation_member)),
      ),

    relation_member: ($) =>
      seq(field("hash", "#"), field("member", $.identifier)),

    action_definition: ($) =>
      seq(
        "action",
        field("action_name", $.identifier),
        field("assignment", $.assignment),
        field(
          "check",
          optional(
            repeat(
              choice(
                $.open_parenthesis,
                $.close_parenthesis,
                $.call_expression,
                $.identifier,
                $.conditional_statement,
                $.selector_expression,
              ),
            ),
          ),
        ),
      ),

    permission_definition: ($) =>
      seq(
        "permission",
        field("permission_name", $.identifier),
        field("assignment", $.assignment),
        field(
          "permission_action",
          optional(
            repeat(
              choice(
                $.open_parenthesis,
                $.call_expression,
                $.close_parenthesis,
                $.identifier,
                $.or_statement,
                $.and_statement,
                $.not_statement,
                $.in_statement,
              ),
            ),
          ),
        ),
      ),

    attribute_definition: ($) =>
      seq(
        "attribute",
        field("name", $.identifier),
        field("type", $.attribute_type),
      ),

    attribute_type: ($) =>
      choice($.boolean_type, $.string_type, $.integer_type, $.double_type),

    rule_definition: ($) =>
      seq(
        "rule",
        field("name", $.identifier),
        $.open_parenthesis,
        optional(repeat(choice($.rule_parameter, ","))),
        $.close_parenthesis,
        $.open_brace,
        $.rule_conditional,
        $.close_brace,
      ),

    rule_parameter: ($) => seq($.identifier, $.attribute_type),
    rule_conditional: ($) =>
      seq($.identifier, repeat(choice($.identifier, $.conditional_statement))),

    call_expression: ($) =>
      prec(
        PREC.primary,
        seq(
          field("function", $.identifier),
          field("arguments", $.argument_list),
        ),
      ),

    // helpers
    variable: () => token.immediate(/[a-zA-Z_][a-zA-Z0-9_]*/),
    comment: () => /\/\/.*/,
    identifier: ($) => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    open_brace: ($) => "{",
    close_brace: ($) => "}",
    open_parenthesis: ($) => "(",
    close_parenthesis: ($) => ")",
    open_bracket: ($) => "[",
    close_bracket: ($) => "]",
    octothorpe: ($) => "#",
    and_statement: ($) => " and ",
    or_statement: ($) => " or ",
    not_statement: ($) => " not ",
    in_statement: ($) => " in ",
    gt: ($) => ">",
    gte: ($) => ">=",
    ne: ($) => "!=",
    lt: ($) => "<",
    lte: ($) => "<=",
    assignment: ($) => " = ",
    conditional_statement: ($) =>
      choice(
        $.lt,
        $.lte,
        $.ne,
        $.gt,
        $.gte,
        $.and_statement,
        $.or_statement,
        $.not_statement,
        $.in_statement,
      ),
    boolean_type: ($) => seq("boolean", optional(seq("[", "]"))),
    string_type: ($) => seq("string", optional(seq("[", "]"))),
    integer_type: ($) => seq("integer", optional(seq("[", "]"))),
    double_type: ($) => seq("double", optional(seq("[", "]"))),

    argument_list: ($) =>
      seq(
        "(",
        optional(seq($._expression, repeat(seq(",", choice($._expression))))),
        ")",
      ),

    selector_expression: ($) =>
      prec(
        PREC.primary,
        seq(
          field("operand", $._expression),
          ".",
          field("field", $._field_identifier),
        ),
      ),

    _field_identifier: ($) => alias($.identifier, $.field_identifier),
    _expression: ($) =>
      choice($.identifier, $.call_expression, $.selector_expression),
  },
});
