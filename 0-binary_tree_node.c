#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: Pointer to the parent node of the new node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* new node variable */
	binary_tree_t *new_node;

	/* mem allocation */
	new_node = malloc(sizeof(binary_tree_t));

	/* mem allocation check */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Set values for new_node members */
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	/* Return pointer to new_node */
	return (new_node);
}
