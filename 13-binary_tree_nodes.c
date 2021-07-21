#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes with at least 1 child.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Number of parents.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			nodes += 1;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
