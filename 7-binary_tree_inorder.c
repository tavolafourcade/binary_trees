#include "binary_trees.h"

/**
 * binary_tree_inorder - Go through a binary tree using in-order traversal.
 * @tree: A pointer to the root node.
 * @func: A pointer to a function.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func != NULL && tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
