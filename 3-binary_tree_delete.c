#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
	/* variable for left_child */
	binary_tree_t *left_child;

	/* variable for right_child */
	binary_tree_t *right_child;

	/* check if tree is NULL */
	if (tree != NULL)
	{
		left_child = tree->left;
		right_child = tree->right;

		/* check if left_child is NULL */
		if (left_child != NULL)
		{
			/* recursively call the func */
			binary_tree_delete(left_child);
		}

		if (right_child != NULL)
		{
			/* recursively call the func */
			binary_tree_delete(right_child);
		}
		free(tree);
	}
}