#include "binary_trees.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* NULL check for tree and func */
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* call func for current node */
	func(tree->n);

	/* recursively call our function on children */
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}