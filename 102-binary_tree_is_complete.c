#include "binary_trees.h"

/**
 * binary_tree_is_complete - is complete
 *
 * @tree: Tree
 *
 * Return: 0 or 1
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree)
	{
		{
			binary_tree_is_complete(tree->left);
			binary_tree_is_complete(tree->right);
			printf ("%d  ", tree->n);
			if (tree && tree->parent && tree->parent->right && (tree == tree->parent->right))
			{

				if (tree->parent->left)
					return (1);
				else
				{
					printf("haha");
					return (0);
				}
			}
		}
	}
	return (1);
}