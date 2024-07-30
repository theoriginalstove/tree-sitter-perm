# tree-sitter-perm

Syntax highlighting support for the Perm authorization language used by [Permify](https://permify.co) for [tree-sitter](https://tree-sitter.github.io/tree-sitter/)


### TODOs
- [ ] Add tests for all the rules
- [ ] Add tests for highlighting
- [ ] Add CONTRIBUTING doc
- [ ] Add how to run and test locally


## Usage

### Neovim
#### Manual Installation

In your lua configs for treesitter, you need to register the `perm` file extension with Neovim and
manually configure the parser with `nvim-treesitter`. You can add the snippet below to your config:

```lua
vim.filetype.add({
    extension = {
        perm = "perm",
    }
})

local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.perm = {
  install_info = {
    url = 'https://github.com/theoriginalstove/tree-sitter-perm', -- local path or git repo
    files = {"src/parser.c"}, -- note that some parsers also require src/scanner.c or src/scanner.cc
    -- optional entries:
    branch = 'main', -- default branch in case of git repo if different from master
    use_makefile = true,
  },
  filetype = 'perm', -- if filetype does not match the parser name
}

vim.treesitter.language.register('perm','perm')
```

Then source your config or reload Neovim and run `:TSInstall perm`

Syntax highlighting should then be enabled for `.perm` files

### Zed

Follow the manual install instructions in the [Perm Zed Extension repo](https://github.com/theoriginalstove/perm)


### Helix

> [!note] TODO: Add instructions to installing parser to Helix text editor

### GNU Emacs

> [!note] TODO: Add instructions to installing parser to Emacs text editor
