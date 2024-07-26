/**
  * @file Perm grammer for tree-sitter
  * @author Steven Turturo <steven@dryheatlabs.com>
  * @license Apache-2.0
  */

const newline = '\n';

module.exports = grammar({
  name: "perm",

  extras: $ => [
    $.comment,
    /\s+/
  ],

  rules: {
    source_file: ($) => repeat(seq($._instruction, "\n")),

    _instruction: ($) =>
      choice(
        $.entity_definition,
      ),

    entity_definition: ($) => seq(
      'entity',
      field("name", $.identifier),
      $.opening_brace,
      optional(
        choice(
          $.relation_definition
        )
      ),
      $.closing_brace,
    ),

    relation_definition: ($) => seq(
      'relation',
      field("name", $.identifier),
      $.relation_association
    ),

    relation_association: ($) => seq(
      /@/,
      field("name", $.identifier)
    ),

    variable: () => token.immediate(/[a-zA-Z_][a-zA-Z0-9_]*/),
    comment: () => /\/\/.*/,
    identifier: $ => /[a-z]+/,
    opening_brace: $ => '{',
    closing_brace: $ => '}',
    and_statement: $ => "and",
    or_statement: $ => "or",

    type: ($) => choice(
      'boolean',
      'string',
      'integer',
      'double'
    )
  }
})
