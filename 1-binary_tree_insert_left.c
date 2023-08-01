#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* new left-child node variable */
	binary_tree_t *new_left_child;

	/* parent NULL check */
	if (parent == NULL)
	{
		return (NULL);
	}

	/* mem alloc */
	new_left_child = malloc(sizeof(binary_tree_t));

	/* mem alloc check */
	if (new_left_child == NULL)
	{
		printf("\n\tMalloc failed");
		return (NULL);
	}

	/* is parent left-child NULL */
	if (parent->left == NULL)
	{
		/* set values for new_left_child members */
		new_left_child->parent = parent;
		new_left_child->left = NULL;
		new_left_child->right = NULL;
		new_left_child->n = value;
	}
	else
	{
		/* set values for new_left_child members */
		new_left_child->parent = parent;
		parent->left->parent = new_left_child;
		new_left_child->left = parent->left;
		new_left_child->right = NULL;
		new_left_child->n = value;
	}

	/* set values for parent */
	parent->left = new_left_child;

	/* return pointer to new_left_child */
	return (new_left_child);
}

