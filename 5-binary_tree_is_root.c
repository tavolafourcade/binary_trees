#include "binary_trees.h"

/**
 * binary_tree_is_root - that function verify if node us root
 * @node: pointer to node
 * Return: 1 if is root or 0 if not root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (node->parent != NULL ? 0 : 1);
}
