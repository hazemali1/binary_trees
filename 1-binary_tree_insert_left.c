#include "binary_trees.h"

/**
 * binary_tree_insert_left - Create left child
 *
 * @parent: root node
 * @value: Value to put in node
 *
 * Return: pointer to node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
        if (parent == NULL)
                return (NULL);

        binary_tree_t *node = malloc(sizeof(binary_tree_t));

        if (node == NULL)
                return (NULL);
        node->n = value;
        node->parent = parent;
        node->right = NULL;
        if (!parent->left)
        {
                parent->left = node;
                node->left = NULL;
        }
        else
        {
                node->left = parent->left;
                parent->left->parent = node;
                parent->left = node;
        }

        return (node);
}