#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf.
 * @node: A pointer to the node to check.
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
