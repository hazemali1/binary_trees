#include "binary_trees.h"

/**
 * binary_tree_nodes - nodes
 *
 * @tree: Tree
 *
 * Return: size of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
        size_t s = 0;

        if (tree == NULL)
                return (0);
        
        if (tree)
        {
                if (tree->left || tree->right)
                {
                        s++;
                        s += binary_tree_nodes(tree->left);
                        s +=  binary_tree_nodes(tree->right);
                }
        }
        return (s);
}