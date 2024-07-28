/**
 * @file Perm grammer for tree-sitter
 * @author Steven Turturo <steven@dryheatlabs.com>
 * @license MIT
 */

const newline = "\n";

module.exports = grammar({
  name: "perm",

  extras: ($) => [$.comment, /\s+/],

  rules: {
    source_file: ($) => repeat(seq($._instruction, "\n")),

    _instruction: ($) => choice($.entity_definition),

    entity_definition: ($) =>
      seq(
        "entity",
        field("name", $.identifier),
        $.opening_brace,
        optional(repeat(choice($.relation_definition))),
        $.closing_brace,
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
        optional($.relation_member),
      ),

    relation_member: ($) => seq(/#[a-z]+/),

    action_definition: ($) => seq("action", field("action_name", $.identifier)),

    permission_definition: ($) =>
      seq(
        "permission",
        field("permission_name", $.identifier),
        " = ",
        field("permission_action", $.identifier),
        optional(
          repeat(
            choice(
              $.or_statement,
              $.and_statement,
              $.not_statement,
              $.in_statement,
            ),
          ),
        ),
      ),

    attribute_definition: ($) =>
      seq("attribute", $.identifier, $.attribute_type),

    attribute_type: ($) =>
      choice($.boolean_type, $.string_type, $.integer_type, $.double_type),

    rule_definition: ($) =>
      seq(
        "rule",
        $.identifier,
        $.opening_parenthesis,
        optional(repeat($.rule_parameter)),
        $.close_parenthesis,
        $.opening_brace,
        $.rule_conditional,
        $.closing_brace,
      ),

    rule_parameter: ($) => seq($.identifier, $.attribute_type),
    rule_conditional: ($) =>
      seq($.identifier, repeat(choice($.identifier, $.conditional_statement))),

    variable: () => token.immediate(/[a-zA-Z_][a-zA-Z0-9_]*/),
    comment: () => /\/\/.*/,
    identifier: ($) => /[a-z]+/,
    opening_brace: ($) => "{",
    closing_brace: ($) => "}",
    opening_parenthesis: ($) => "(",
    close_parenthesis: ($) => ")",
    and_statement: ($) => " and ",
    or_statement: ($) => " or ",
    not_statement: ($) => " not ",
    in_statement: ($) => " in ",
    gt: ($) => ">",
    gte: ($) => ">=",
    ne: ($) => "!=",
    lt: ($) => "<",
    lte: ($) => "<=",
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
  },
});
