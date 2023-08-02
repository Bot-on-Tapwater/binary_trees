#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftSide, rightSide, leftHeight, rightHeight;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->right == NULL || tree->left == NULL)
		return (0);

	leftSide = binary_tree_is_perfect(tree->left);
	rightSide = binary_tree_is_perfect(tree->right);
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if ((leftside && rightSide) && (leftHeight == rightHeight))
		return (1);
	else
		return (0);

}
