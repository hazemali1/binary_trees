#include "binary_trees.h"

/**
 * help - helping
 *
 * @tree: Tree
 * @func: Function for display
*/
void help(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree)
	{
		if (tree->left)
			func(tree->left->n);
		if (tree->right)
			func(tree->right->n);
		help(tree->left, func);
		help(tree->right, func);
	}
}

/**
 * binary_tree_levelorder - levelorder
 *
 * @tree: Tree
 * @func: Function to display
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	help(tree, func);

}
