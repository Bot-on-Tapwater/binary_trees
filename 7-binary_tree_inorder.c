#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs an inorder traversal on a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 */
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
