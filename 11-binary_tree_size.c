#include "binary_trees.h"

/**
 * binary_tree_size - size
 *
 * @tree: Tree
 *
 * Return: size of size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
        size_t s = 0, d = 0;

        if (tree == NULL)
                return (0);

        if (tree)
        {
                if (tree->left)
                {
                        s = binary_tree_size(tree->left);
                }
                if (tree->right)
                {
                        d = binary_tree_size(tree->right);
                }    
        }
        return (s + d + 1);
}