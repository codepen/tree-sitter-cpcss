// Grammar for extracting dependencies out of CSS files

module.exports = grammar({
  name: 'cpcss',

  extras: $ => [/[ \t\r\n]/], // "\s" = [ \t\r\n], but we don't want to match newlines

  rules: {
    doc: $ =>
      repeat(
        choice(
          $.import_statement,
          $.comment_block,
          $.comment_line,
          $.string,
          $._tbd
        )
      ),

    // Catch-all rule for constructs we don't care about
    _tbd: $ => prec(-1, repeat1(choice(/./))),

    // Imports
    import_statement: $ =>
      seq(
        choice('@import', '@use', '@forward', '@require'),
        optional($.less_keywords),
        $._imported,
        optional(repeat(seq(',', $._imported)))
      ),

    _imported: $ => choice($._url, $._quoted_import_reference),

    _url: $ => seq('url', '(', $._quoted_import_reference, ')'),

    import_reference: $ => /[^"'\n]*/,

    _quoted_import_reference: $ =>
      choice(
        seq("'", $.import_reference, "'"),
        seq('"', $.import_reference, '"')
      ),

    less_keyword: $ => seq(/\w+/, optional(',')),
    less_keywords: $ => seq('(', repeat($.less_keyword), ')'),

    // Rules for constructs that might contain imports that aren't actually
    // imports (e.g. strings & comments)
    string: $ =>
      token(
        choice(
          seq("'", /([^'\n]|\\(.|\n))*/, "'"),
          seq('"', /([^"\n]|\\(.|\n))*/, '"')
        )
      ),

    // `/**... */`-style comments.  Regex is from tree-sitter-css. 'Not entirely
    // sure why it works, but it does.
    comment_block: $ => token(seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')),

    // `// ...`-style comments
    comment_line: $ => token(seq('//', /.+/)),
  },
});
