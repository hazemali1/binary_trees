#include "binary_trees.h"

/**
 * bst_insert - insert in bst
 *
 * @tree: Tree
 * @value: Value n
 *
 * Return: pointer
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	binary_tree_t *s;
	bst_t *d;

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		s = binary_tree_node((binary_tree_t *)*tree, value);
		*tree = (bst_t *)s;
		return ((bst_t *)s);
	}

	if ((*tree)->n > value)
	{
		if ((*tree)->left)
			d = bst_insert(&(*tree)->left, value);
		else
		{
			s = binary_tree_node((binary_tree_t *)*tree, value);
			(*tree)->left = (bst_t *)s;
			d = (*tree)->left;
			return (d);
		}
	}
	else if ((*tree)->n < value)
	{
		if ((*tree)->right)
			d = bst_insert(&(*tree)->right, value);
		else
		{
			s = binary_tree_node((binary_tree_t *)*tree, value);
			(*tree)->right = (bst_t *)s;
			d = (*tree)->right;
			return (d);
		}
	}
	else
		return (NULL);
	return (d);
}