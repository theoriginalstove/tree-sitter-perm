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
      alias(/[eE][nN][tT][iI][tT][yY]/, "entity"),
      $.identifier,
      $.opening_brace,
      $.closing_brace,
    ),

    variable: () => token.immediate(/[a-zA-Z_][a-zA-Z0-9_]*/),
    comment: () => /\/\/.*/,
    identifier: $ => /[a-z]+/,
    opening_brace: $ => '{',
    closing_brace: $ => '}',
  }
})
