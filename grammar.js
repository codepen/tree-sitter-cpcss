// Grammar for extracting dependencies out of CSS files
// Grammar for extracting dependencies out of CSS files

module.exports = grammar({
  name: 'cpcss',
  name: 'cpcss',

  extras: $ => [/\s/], // "\s" = [ \t\r\n], but we don't want to match newlines

  rules: {
    doc: $ => repeat(choice($.import_statement, $.comment, $.string, $._tbd)),

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

    // `/**... */`-style comments.  Regex is from tree-sitter-javascript, which
    // references this SO answer:
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    _comment_block: $ => seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),

    // `// ...`-style comments
    _comment_line: $ => token(seq('//', /.+/)),

    comment: $ => choice($._comment_block, $._comment_line),
  },
});
