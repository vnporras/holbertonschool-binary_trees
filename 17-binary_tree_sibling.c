#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor..
 * @tree: pointer to the root node.
 * Return: 0 .
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
