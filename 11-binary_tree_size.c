#include "binary_trees.h"


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	/* NULL check for tree*/
	if (tree == NULL)
	{
		return (0);
	}

	/* recursively call our function on children */
	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (size);	
}