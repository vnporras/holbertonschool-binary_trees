#include "binary_trees.h"


/**
 * binary_tree_nodes - funtionn that counts the nodes.
 * @tree: pointer to the root node of the tree.
 * Return: 0 .
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t countNodChild = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		countNodChild++;
	}
	countNodChild += binary_tree_nodes(tree->left);
	countNodChild += binary_tree_nodes(tree->right);
	return (countNodChild);
}
