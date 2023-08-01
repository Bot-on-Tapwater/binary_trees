#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node as the right child
 *
 * @parent: Pointer to the parent node to insert the right child
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* new right-child node variable */
	binary_tree_t *new_right_child;

	/* parent NULL check */
	if (parent == NULL)
		return (NULL);
	/* mem alloc */
	new_right_child = malloc(sizeof(binary_tree_t));
	/* mem alloc check */
	if (new_right_child == NULL)
		return (NULL);
	/* is parent right-child NULL */
	if (parent->right == NULL)
	{
		/* set values for new_right_child members */
		new_right_child->parent = parent;
		new_right_child->right = NULL;
		new_right_child->left = NULL;
		new_right_child->n = value;
	}
	else
	{
		/* set values for new_right_child members */
		new_right_child->parent = parent;
		parent->right->parent = new_right_child;
		new_right_child->right = parent->right;
		new_right_child->left = NULL;
		new_right_child->n = value;
	}

	/* set values for parent */
	parent->right = new_right_child;

	/* return pointer to new_right_child */
	return (new_right_child);
}
