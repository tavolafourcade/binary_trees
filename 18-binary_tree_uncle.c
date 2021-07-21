#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node in a binary tree.
 * @node: A pointer to the target node to find it's sibling.
 *
 * Return: A pointer to the sibling or NULL if node don't have sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a node in a binary tree.
 * @node: A pointer to the target node to find it's uncle.
 *
 * Return: A pointer to the uncle or NULL if node don't have uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
