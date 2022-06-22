function binary_op($, symbol) {
  return seq(
    field("left", $._expression),
    symbol,
    field("right", $._expression),
  );
}

function sep1NoTrailing(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function sep1(rule, separator) {
  return seq(sep1NoTrailing(rule, separator), optional(separator));
}

function sepNoTrailing(rule, separator) {
  return optional(sep1(rule, separator));
}

function sep(rule, separator) {
  return optional(sep1(rule, separator));
}

module.exports = grammar({
  name: 'sot',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.function_definition,
    ),

    function_definition: $ => seq(
      "def",
      field("name", $.identifier),
      field("parameters", $.parameter_list),
      field("return_type",
        optional(
          seq("->", $._type)
        )
      ),
      field("code", $.code_block),
    ),
    parameter_list: $ => seq(
      "(",
      sep($.binding_definition, ','),
      ")",
    ),
    binding_definition: $ => seq(
      $.identifier,
      ":",
      $._type,
    ),

    _type: $ => choice(
      $.primitive_type,
    ),
    primitive_type: $ => choice(
      "u8",
    ),

    code_block: $ => seq(
      "{",
      sep1NoTrailing($._statement, ";"),
      optional($.trailing_semicolon),
      "}",
    ),

    _statement: $ => choice(
      $.assignment,
      $._expression,
    ),
    _expression: $ =>
      prec(
        0,
        choice(
          $._binary_expression,
          seq("(", $._expression, ")"),
          $.number,
          $.identifier,
        ),
      ),
    assignment: $ => prec(
      1,
      choice(
        seq("let", $.binding_definition, "=", $._expression),
        seq($.identifier, "=", $._expression),
      )
    ),

    _binary_expression: $ => choice(
      $.add,
      $.subtract,
      $.multiply,
      $.divide,
    ),
    add: $ => prec.left(0,
      // helper function
      binary_op($, "+")
    ),
    subtract: $ => prec.left(0,
      // helper function
      binary_op($, "-")
    ),
    multiply: $ => prec.left(1,
      // helper function
      binary_op($, "*")
    ),
    divide: $ => prec.left(1,
      // helper function
      binary_op($, "/")
    ),

    identifier: $ => /[a-zA-Z_]+/,
    number: $ => /\d+/,
    trailing_semicolon: $ => ";",
  }
});
