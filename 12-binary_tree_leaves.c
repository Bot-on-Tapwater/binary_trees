#include "binary_trees.h"


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* NULL check for tree */
	if (tree == NULL)
	{
		return (0);
	}

	/* Check if any child exists */
	if (tree->left == NULL && tree->right == NULL)
	{
		/* add 1 if no child exists */
		return (1 + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}

	/* no addition if at least on child exists */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}