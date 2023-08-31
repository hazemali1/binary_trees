#include "binary_trees.h"

/**
 * binary_tree_insert_right - Create right child
 *
 * @parent: root node
 * @value: Value to put in node
 *
 * Return: pointer to node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	 binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	if (!parent->right)
	{
		parent->right = node;
		node->right = NULL;
	}
	else
	{
		node->right = parent->right;
		parent->right->parent = node;
		parent->right = node;
	}

	return (node);
}
