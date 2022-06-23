# tree-sitter-sot
I'm just playing around with Tree Sitter, this isn't a grammar for an actual language.

## Where everything is
The grammar is created from `grammar.js`, written in the Tree Sitter DSL of JavaScript.
In `package.json` I just declare some dependencies and pass some config to Tree Sitter, mostly that the `.sot` file type should be parsed as a Sot program.
I think `binding.gyp` was added by Node, to tell Node what other files to package with the JS. For the Node bindings.
`Cargo.toml` was added by Cargo/Tree Sitter for the Rust bindings.
The syntax highlighting rules are in `queries/highlights.scm`.
`corpus/*` and `example.sot` are test programs written in Sot. The `corpus/*` ones embed the Sot inside Tree Sitter's test language.
`src/**` is some internal Tree Sitter stuff with generated C and a JSON representation of the grammar. `bindings/**` is predictably for binding that C code to Node and Rust.
