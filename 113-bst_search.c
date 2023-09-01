#include "binary_trees.h"

/**
 * bst_search - search
 *
 * @tree: Tree
 * @value: Value for search
 *
 * Return: Pointer
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *s;

	if (tree == NULL)
		return (NULL);
	if (value > tree->n)
		s = bst_search(tree->right, value);
	else if (value < tree->n)
		s = bst_search(tree->left, value);
	else if (value == tree->n)
		return ((bst_t *)tree);
	else
		return (NULL);
	return (s);
}
