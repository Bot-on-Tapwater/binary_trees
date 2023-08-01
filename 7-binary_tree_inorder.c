#include "binary_trees.h"

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* NULL check for tree and func */
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* recursively call our function on left-child */
	binary_tree_inorder(tree->left, func);

	/* call func for current node */
	func(tree->n);

	/* recursively call our function on right-child */
	binary_tree_inorder(tree->right, func);
}