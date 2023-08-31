#include "binary_trees.h"

/**
 * binary_tree_balance - balance
 *
 * @tree: Tree
 *
 * Return: size of balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int s = 0, d = 0;

	if (tree)
	{
		if (tree->left)
		{
			s = 1 + binary_tree_balance(tree->left);
		}
		if (tree->right)
		{
			d = 1 + binary_tree_balance(tree->right);
		}
	}
	return (s - d);
}
