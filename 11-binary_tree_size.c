#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The size of the binary tree (number of nodes)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	/* NULL check for tree*/
	if (tree == NULL)
	{
		return (0);
	}

	/* recursively call our function on children */
	size = 1 + binary_tree_size(tree->left) +
	binary_tree_size(tree->right);

	return (size);
}
