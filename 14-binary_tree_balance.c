#include "binary_trees.h"

/**
 * binary_tree_balanc - balance
 *
 * @tree: Tree
 *
 * Return: size of balance
*/
int binary_tree_balanc(const binary_tree_t *tree)
{
	int s = 0, d = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		if (tree->left)
		{
			s = 1 + binary_tree_balanc(tree->left);
		}
		else
			s = 1;
		if (tree->right)
		{
			d = 1 + binary_tree_balanc(tree->right);
		}
		else
			d = 1;
	}
	if (s > d)
		return (s);
	else
		return (d);
}

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

	if (tree == NULL)
		return (0);
	if (tree)
	{
		s = binary_tree_balanc(tree->left);
		d = binary_tree_balanc(tree->right);
	}
	return (s - d);
}
