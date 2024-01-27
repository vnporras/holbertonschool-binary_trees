#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: pointer to the root node.
 * Return: 0 .
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	if (left == right)
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
