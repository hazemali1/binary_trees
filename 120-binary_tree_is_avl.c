#include "binary_trees.h"

/**
 * binary_tree_height - height
 *
 * @tree: Tree
 *
 * Return: size of height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t s = 0, d = 0;

	if (tree)
	{
		if (tree->left)
		{
			s = 1 + binary_tree_height(tree->left);
		}
		if (tree->right)
		{
			d = 1 + binary_tree_height(tree->right);
		}
	}
	if (s > d)
		return (s);
	else
		return (d);
}

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

/**
 * binary_tree_is_avl - avl tree
 *
 * @tree: Tree
 *
 * Return: 0 or 1
*/
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_bst(tree))
	{
		if (binary_tree_height(tree->left) -
			binary_tree_height(tree->right) <= 1)
		{
			binary_tree_is_avl(tree->left);
			binary_tree_is_avl(tree->right);
		}
		else
			return (0);
	}
	else
		return (0);
	return (1);
}
