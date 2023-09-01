#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate right
 *
 * @tree: Tree
 *
 * Return: Pointer
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *r;

	if (tree == NULL)
		return (NULL);

	if (tree->left)
	{
		r = tree->left;
		tree->left = r->right;
		if (r->right)
			r->right->parent = tree;
		r->right = tree;
		r->parent = tree->parent;
		tree->parent = r;
	}
	return (r);
}
