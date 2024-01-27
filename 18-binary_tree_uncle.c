#include "binary_trees.h"


/**
 * binary_tree_uncle - function that finds the uncle of a node.
 * @node: pointer to the node to find the uncle.
 * Return: uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	parent = node->parent;
	if (parent->parent->left == parent)
	{
		return (parent->parent->right);
	}
	else
	{
		return (parent->parent->left);
	}
}
