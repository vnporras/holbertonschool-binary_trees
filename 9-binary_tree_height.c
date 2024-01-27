#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree:  is a pointer to the root node of the tree to measure the height.
 * Return:  0 .
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftH = 0;
	size_t rightH = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		leftH = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		rightH = 1 + binary_tree_height(tree->right);
	}
	if (leftH > rightH)
	{
		return (leftH);
	}
	else
	{
		return (rightH);
	}
}
