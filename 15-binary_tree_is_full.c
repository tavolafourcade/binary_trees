#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if the tree is full.
 * @tree: A pointer to the root node of the tree.
 * Return: If tree is not full return 0 in otherwise return 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;/*Boolean*/

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	full = binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right);

	return (full);
}
