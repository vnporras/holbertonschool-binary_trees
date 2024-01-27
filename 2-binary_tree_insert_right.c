#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child.
 * @parent: is a pointer to the node to insert the right-child in.
 * @value: Is a value to store in the new node.
 * Return: a pointer to the created node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	aux = parent->right;
	parent->right = newNode;
	newNode->n = value;
	newNode->parent = parent;
	newNode->right = aux;
	newNode->left = NULL;
	if (aux != NULL)
	{
		aux->parent = newNode;
	}
	return (newNode);
}
