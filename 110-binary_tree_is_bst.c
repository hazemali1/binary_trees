#include "binary_trees.h"

/**
 * is_bst - checking
 *
 * @tree: Tree
 * @s: Min
 * @d: Max
 *
 * Return: 0 or 1
*/
int is_bst(const binary_tree_t *tree, int s, int d)
{
	if (tree == NULL)
		return (1);
	if (tree->n <= s || tree->n >= d)
		return (0);
	return (is_bst(tree->left, s, tree->n) &&
		is_bst(tree->right, tree->n, d));
}

/**
 * binary_tree_is_bst - is bst
 *
 * @tree: Tree
 *
 * Return: 0 or 1
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (is_bst(tree, -999999999, 999999999))
		return (1);
	else
		return (0);
}
