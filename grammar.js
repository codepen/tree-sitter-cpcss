// This is a small, incomplete, and probably buggy grammar for Stylus.  The main
// use here is to extract `import` dependencies from Stylus files.

module.exports = grammar({
  name: 'stylus',

  extras: $ => [/\s/],

  rules: {
    doc: $ =>
      repeat(
        choice(
          $.import_statement,
          $.comment_block,
          $.comment_line,
          $.string,
          $.tbd
        )
      ),

    // Catch-all rule for constructs we don't care about
    tbd: $ => prec(-1, repeat1(/./)),

    import_reference: $ => /[^"'\n]*/,
    quoted_import_reference: $ =>
      choice(
        seq("'", $.import_reference, "'"),
        seq('"', $.import_reference, '"')
      ),

    // URL(...)
    url: $ => seq('url', '(', $.quoted_import_reference, ')'),

    // Imports
    import_keyword: $ => seq(/\w+/, optional(',')),
    import_keywords: $ => seq('(', repeat($.import_keyword), ')'),
    import_statement: $ =>
      seq(
        // Stylus supports both `@import` and `@require` for imports.  The syntax is the same
        choice('@import', '@require'),
        optional($.import_keywords),
        choice($.url, $.quoted_import_reference),
        optional(';')
      ),

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
