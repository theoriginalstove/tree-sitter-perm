package tree_sitter_perm_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-perm"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_perm.Language())
	if language == nil {
		t.Errorf("Error loading Perm grammar")
	}
}
