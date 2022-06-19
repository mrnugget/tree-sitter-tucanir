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
        field('blocks', seq($.block))
      ),

    block: $ =>
      seq(
        'block',
        field('block_id', $.id),
        optional(field('predecessors', $.predecessors)),
        optional(field('successors', $.successors)),
        ':',
        repeat($._instruction)
      ),

    _instruction: $ => seq('  ', choice($.move, $._terminator)),

    move: $ => seq($.register, '<-', field('operand', $._operand)),

    _terminator: $ => seq('terminator:', choice($.goto_terminator)),

    goto_terminator: $ => seq('goto', '(', $.id, ')'),

    _operand: $ => choice($.register, $.number),

    successors: $ => seq('(', '->', commaSep($.id), ')'),
    predecessors: $ => seq('(', '<-', commaSep($.id), ')'),

    number: $ => /\d+/,

    id: $ => /#\d+/,

    register: $ => /%[\d_]+/,
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
