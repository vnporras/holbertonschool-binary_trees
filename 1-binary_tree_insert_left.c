#include "binary_trees.h"

/**
 * *binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: Is a pointer to the node to insert the left-child in.
 * @value: Is a value to store in the mew node.
 * Return: A pointer to the created node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL, *aux = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	aux = parent->left;
	parent->left = newNode;
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = aux;
	newNode->right = NULL;
	if (aux != NULL)
	{
		aux->parent = newNode;
	}
	return (newNode);
}
