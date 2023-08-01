#include "binary_trees.h"

int binary_tree_is_root(const binary_tree_t *node)
{
	/* NULL check */
	if (node == NULL)
	{
		return (0);
	}

	/* check if parent is NULL */
	if (node->parent == NULL)
	{
		return (1);
	}

	return (0);
}