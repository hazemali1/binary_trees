#include "binary_trees.h"

/**
 * binary_tree_is_full - is full
 *
 * @tree: Tree
 *
 * Return: 0 or 1
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
        int s = 0, d = 0;

        if (tree == NULL)
                return (0);

        if (tree)
        {
                if ((!tree->left && tree->right) || (!tree->right && tree->left))
                {
                        return (0);
                }

                if (tree->left && tree->right)
                {
                        s = binary_tree_is_full(tree->left);
                        d = binary_tree_is_full(tree->right);
                        if (s == 0 || d == 0)
                                return (0);
                }
        }
        return (1);
}