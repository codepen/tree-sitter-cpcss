# tree-sitter-cpcss Unified CSS dependency extraction parser

## Notes on SCSS from @shshaw

1. @use and @forward are used to reference other files, as well as @import
2. Sass also allows comma separated @import values. @import 'foundation/code', 'foundation/lists';
3. Sass allows media queries in the @import statements @import "landscape" screen and (orientation: landscape);
4. Sass has weird resolution rules for @import "file": It looks for file.css, file.sass, file.scss, \_file.scss, \_file.sass, file/\_index.scss, etc. I’m not sure exactly what the priorities of them are, but I think the underscores take precedence.
