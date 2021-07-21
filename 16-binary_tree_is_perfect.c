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

/**
 * binary_tree_height - Define height that tree
 * @tree: Pointer to node tree
 * Return: Height to level tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right = binary_tree_height(tree->right) + 1;

	return ((left > right) ? left : right);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left_node, *right_node;

	if (!tree)
		return (0);

	left_node = tree->left;
	right_node = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);

	if (!left_node || !right_node)
		return (0);

	if ((binary_tree_height(left_node) ==
	     binary_tree_height(right_node)) &&
	    (binary_tree_is_perfect(left_node) &&
	     binary_tree_is_perfect(right_node)))
		return (1);

	return (0);
}
