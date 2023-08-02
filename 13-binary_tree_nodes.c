#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at least one child
 *
 * @tree: Pointer to the root node of the tree to count nodes
 *
 * Return: The number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int leftSide = 0, rightSide = 0;
	int has_children;

	if (tree == NULL)
		return (0);

	has_children = (tree->left != NULL || tree->right != NULL);

	leftSide = binary_tree_nodes(tree->left);
	rightSide = binary_tree_nodes(tree->right);

	return (leftSide + rightSide + has_children);
}
