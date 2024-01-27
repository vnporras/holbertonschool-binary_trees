#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor..
 * @tree: pointer to the root node.
 * Return: 0 .
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		left = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right = 1 + binary_tree_height(tree->right);
	}
	return (left - right);
}
