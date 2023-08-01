#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* variables to store depth*/
	size_t depth_root = 0;

	/* NULL check for tree */
	if (tree == NULL)
	{
		return (0);
	}

	/* NULL check for parent */
	if (tree->parent != NULL)
	{
		/* Add 1 to depth and recursively call func */
		depth_root = 1 + binary_tree_depth(tree->parent);
	}

	return (depth_root);
}