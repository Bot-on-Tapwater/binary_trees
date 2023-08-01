#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height of the binary tree, or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* variables to store height */
	size_t left_height = 0;
	size_t right_height = 0;

	/* NULL check for tree */
	if (tree == NULL)
	{
		return (0);
	}

	/* NULL check for left-child */
	if (tree->left != NULL)
		/* Add 1 to height and recursively call func */
		left_height = 1 + binary_tree_height(tree->left);

	/* NULL check for right-child */
	if (tree->right != NULL)
		/* Add 1 to height and recursively call func */
		right_height = 1 + binary_tree_height(tree->right);

	/* Select longest path */
	return ((left_height > right_height) ? (left_height) : (right_height));
}
