/**
  * @file Perm grammer for tree-sitter
  * @author Steven Turturo <steven@dryheatlabs.com>
  * @license Apache-2.0
  */

const newline = '\n';

module.exports = grammar({
  name: "perm",
  rules: {
    source_file: ($) => repeat(seq($._instruction, "\n")),

    _instruction: ($) =>
      choice(
        $.comment
//        $.entity_instruction,
//        $.relation_instruction,
//        $.action_instruction
      ),

//    entity_instruction: ($) =>
//      seq(
//        alias(/[eE][nN][tT][iI][tT][yY]/, "entity"),
//        optional($.param),
//        field("name", token.immediate(/[a-z][-a-z]*/)),
//        token.immediate(" {"),
////        optional(
////            choice(
////              $.relation_instruction,
////              $.action_instruction,
////            )
////        ),
//        token.immediate("}")
//      ),
//
//    opening_brace: _ => '{',
//    closing_brace: _ => '}',
//
//    relation_instruction: ($) =>
//      seq(
//        alias(/[rR][eE][lL][aA][tT][iI][oO][nN]/, "relation"),
//        optional($.param),
//    ),
//
//    action_instruction: ($) =>
//      seq(
//        alias(/[aA][cC][tT][iI][oO][nN]/, "action"),
//        optional($.param)
//    ),
//
//    param: () =>
//      seq(
//        "--",
//        field("name", token.immediate(/[a-z][-a-z]*/)),
//        token.immediate("="),
//        field("value", token.immediate(/[^@][a-zA-Z0-9_-]+/))
//      ),
//
//    unquoted_string: ($) =>
//      repeat1(
//        choice(
//          token.immediate(/[^\s\n"'\\\$]+/),
//          token.immediate("\\ "),
//          $._immediate_expansion,
//        )
//      ),
//
//    expansion: $ =>
//      seq("$", $._expansion_body),
//
//    // we have 2 rules b/c aliases don't work as expected on seq() directly
//    _immediate_expansion: $ => alias($._imm_expansion, $.expansion),
//    _imm_expansion: $ =>
//      seq(token.immediate("$"), $._expansion_body),
//
//    _expansion_body: $ =>
//      choice(
//        $.variable,
//        seq(
//          token.immediate("{"),
//          alias(token.immediate(/[^\}]+/), $.variable),
//          token.immediate("}")
//        )
//      ),
//
    variable: () => token.immediate(/[a-zA-Z_][a-zA-Z0-9_]*/),
    comment: () => /\/\/.*/,
  }
})
