#include "binary_trees.h"

/**
 * binary_tree_insert_left - Create left child
 *
 * @parent: root node
 * @value: Value to put in node
 *
 * Return: pointer to node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);
	if (!parent->left)
	{
		parent->left = node;
	}
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
	}

	return (node);
}
