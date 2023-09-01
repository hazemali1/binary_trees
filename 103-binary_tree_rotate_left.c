#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate left
 *
 * @tree: Tree
 *
 * Return: Pointer
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *r;

	if (tree == NULL)
		return (NULL);

	if (tree->right)
	{
		r = tree->right;
		tree->right = r->left;
		if (r->left)
			r->left->parent = tree;
		r->left = tree;
		r->parent = tree->parent;
		tree->parent = r;
	}
	return (r);
}