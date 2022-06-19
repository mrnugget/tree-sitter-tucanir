module.exports = grammar({
  name: 'tucanir',

  rules: {
    source_file: $ => repeat($.block_funk),

    block_funk: $ =>
      seq(
        'block_funk',
        field('block_funk_id', $.id),
        '(node_id:',
        field('node_id', $.id),
        ', entry:',
        field('entry_block_id', $.id),
        ')',
        field('blocks', repeat($.block))
      ),

    block: $ =>
      seq(
        'block',
        field('block_id', $.id),
        optional(field('predecessors', $.predecessors)),
        optional(field('successors', $.successors)),
        ':',
        optional(field('instructions', repeat($.instruction))),
        field('terminator', $.terminator)
      ),

    instruction: $ =>
      seq(field('target', $.register), '<-', choice($.move, $.bin_op)),

    move: $ => field('operand', $._operand),

    bin_op: $ =>
      seq(
        field('lhs', $._operand),
        field('operator', choice('+', '-', '>', '<', '<=', '=>', '==', '!=')),
        field('rhs', $._operand)
      ),

    terminator: $ => seq('terminator:', choice($.goto)),

    goto: $ => seq('goto', '(', $.id, ')'),

    _operand: $ => choice($.register, $.number, $.true, $.false),

    successors: $ => seq('(', '->', commaSep($.id), ')'),
    predecessors: $ => seq('(', '<-', commaSep($.id), ')'),

    number: $ => /\d+/,

    id: $ => /#\d+/,

    true: $ => 'true',
    false: $ => 'false',

    register: $ => /%[\d_]+/,
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
