#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs a preorder traversal on a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 */
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
