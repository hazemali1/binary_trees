#include "binary_trees.h"

/**
 * binary_tree_postorder - postorder
 *
 * @tree: Tree
 * @func: Function to display
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
