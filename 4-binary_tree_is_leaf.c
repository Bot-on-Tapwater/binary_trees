#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* NULL check */
	if (node == NULL)
	{
		return (0);
	}

	/* check if both children are NULL */
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);
}