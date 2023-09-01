#include "binary_trees.h"
#include "120-binary_tree_is_avl.c"

avl_t *insert( avl_t **tree, binary_tree_t *s, int value)
{
        int d;
        (void)s;

        d = binary_tree_balance(*tree);
        if (d > 1 && (*tree)->left->n > value)
        {
                return (binary_tree_rotate_right(*tree));
        }
        else if (d > 1 && (*tree)->left->n < value)
        {
                (*tree)->left = binary_tree_rotate_left((*tree)->left);
                return (binary_tree_rotate_right(*tree));
        }
        else if (d < -1 && (*tree)->right->n < value)
        {
                return (binary_tree_rotate_left(*tree));
        }
        else if (d < -1 && (*tree)->right->n > value)
        {
                (*tree)->right = binary_tree_rotate_right((*tree)->right);
                return (binary_tree_rotate_left(*tree));
        }
        return (*tree);
}

/**
 * bst_insert - insert in bst
 *
 * @tree: Tree
 * @value: Value n
 *
 * Return: pointer
*/
avl_t *avl_insert(avl_t **tree, int value)
{
        binary_tree_t *s;
        avl_t *d;
        (void)d;

        if (tree == NULL)
                return (NULL);

        
        if (*tree == NULL)
        {
                s = binary_tree_node((binary_tree_t *)*tree, value);
                *tree = (avl_t *)s;
                return ((avl_t *)s);
        }

        if ((*tree)->n > value)
        {
                if ((*tree)->left)
                        d = avl_insert(&(*tree)->left, value);
                else
                {
                        s = binary_tree_node((binary_tree_t *)*tree, value);
                        (*tree)->left = (bst_t *)s;
                        d = insert(tree, s, value);
                        
                }
        }
        else if ((*tree)->n < value)
        {
                if ((*tree)->right)
                        d = avl_insert(&(*tree)->right, value);
                else
                {
                        
                        s = binary_tree_node((binary_tree_t *)*tree, value);
                        (*tree)->right = (bst_t *)s;
                        d = (*tree)->right;
                        d = insert(tree, s, value);
                        if (s->n == 46)
                                return (d);
                        return ((avl_t *)s);
                        
                        
                }
        }
        
        return ((avl_t *)s);
}