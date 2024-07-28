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
      seq(/@/, field("association_name", $.identifier)),

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

    variable: () => token.immediate(/[a-zA-Z_][a-zA-Z0-9_]*/),
    comment: () => /\/\/.*/,
    identifier: ($) => /[a-z]+/,
    opening_brace: ($) => "{",
    closing_brace: ($) => "}",
    and_statement: ($) => " and ",
    or_statement: ($) => " or ",
    not_statement: ($) => " not ",
    in_statement: ($) => " in ",

    attribute_type: ($) => choice("boolean", "string", "integer", "double"),
  },
});
