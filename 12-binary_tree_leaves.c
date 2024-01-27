#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves.
 * Return: 0 .
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t countLeaves = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		countLeaves++;
	}
	countLeaves += binary_tree_leaves(tree->left);
	countLeaves += binary_tree_leaves(tree->right);
	return (countLeaves);
}
