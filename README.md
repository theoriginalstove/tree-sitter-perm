# tree-sitter-perm

Syntax highlighting support for the Perm authorization language used by [Permify](https://permify.co) for [tree-sitter](https://tree-sitter.github.io/tree-sitter/)

## Status
I believe the grammar and highlights are complete. Checked against the mercury and notion examples from the permify docs. If there are some nasty perm files that you
have that this isn't working for, let me know and I'll work on getting it working correctly (or open a issue/PR).


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

vim.treesitter.language.register('perm','perm')

local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

parser_config.perm = {
  install_info = {
    url = 'https://github.com/theoriginalstove/tree-sitter-perm', -- local path or git repo
    files = {"src/parser.c"}, -- note that some parsers also require src/scanner.c or src/scanner.cc
    branch = "main",
  },
}

```

Then source your config or reload Neovim and run `:TSInstall perm`

##### Syntax Highlighting
Syntax highlighting be enabled for `.perm` files once we copy the queries into our nvim-treesitter configuration.

1. Clone the repository:
```sh
git clone https://github.com/theoriginalstove/tree-sitter-perm.git
cd tree-sitter-perm
```

2. Copy the queries into your nvim-treesitter install location

###### vim-plug

```sh
cp -r ./queries ~/.vim/plugged/nvim-treesitter
```

###### packer.nvim

###### dein.vim

###### lazy.nvim

### Zed

Follow the manual install instructions in the [Perm Zed Extension repo](https://github.com/theoriginalstove/perm)


### Helix

> [!note] TODO: Add instructions to installing parser to Helix text editor

### GNU Emacs

> [!note] TODO: Add instructions to installing parser to Emacs text editor
