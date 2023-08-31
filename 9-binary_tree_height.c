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