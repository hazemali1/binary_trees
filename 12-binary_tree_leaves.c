#include "binary_trees.h"

/**
 * binary_tree_leaves - leaves
 *
 * @tree: Tree
 *
 * Return: size of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
        size_t s = 0;

        if (tree == NULL)
                return (0);
        if (tree->left)
                s++;
        if (tree->right)
                s++;
        if (s == 0)
                s++;
        return (s);
}