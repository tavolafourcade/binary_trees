#include "binary_trees.h"

/**
 * binary_tree_insert_right - Add a new node in right
 * @parent: Pointer to parent node
 * @value: Value field
 * Return: Right node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_new;

	if (!parent)
		return (NULL);

	right_new = malloc(sizeof(binary_tree_t));

	if (!right_new)
		return (NULL);

	right_new->n = value;
	right_new->parent = parent;
	right_new->left = NULL;
	right_new->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = right_new;

	parent->right = right_new;

	return (right_new);
}
