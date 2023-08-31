#include "binary_trees.h"

/**
 * helping - Help to finish this taaaskkk
 *
 * @tree: Tree
 *
 * Return: integer
*/

int helping(const binary_tree_t *tree)
{
	int s = 0, d = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		s = 1 + helping(tree->left);
		d = 1 + helping(tree->right);
		if (s == d && s != 0 && d != 0)
			return (s);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_perfect - is perfect
 *
 * @tree: Tree
 *
 * Return: 0 or 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (helping(tree) == 0)
		return (0);
	return (1);
}
