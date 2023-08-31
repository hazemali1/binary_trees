#include "binary_trees.h"

/**
 * binary_tree_depth - depth
 *
 * @tree: Tree
 *
 * Return: size of depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree)
	{
		if (tree->parent)
		{
			s = 1 + binary_tree_depth(tree->parent);
		}
	}
	return (s);
}
