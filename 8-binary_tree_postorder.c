#include "binary_trees.h"

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* NULL check for tree and func */
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* recursively call our function on left-child */
	binary_tree_postorder(tree->left, func);

	/* recursively call our function on right-child */
	binary_tree_postorder(tree->right, func);

	/* call func for current node */
	func(tree->n);	
}