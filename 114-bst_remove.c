#include "binary_trees.h"

/**
 * rm - helping remove ith two childern
 *
 * @root: Root tree
 *
 * Return: int
*/
int rm(bst_t *root)
{
	int s = 0;

	if (root == NULL)
		return (0);

	else
	{
		s = rm(root->left);
		if (s == 0)
			return (root->n);
		else
			return (s);
	}
}

/**
 * for_betty - betty style
 *
 * @root: Root of tee
*/
void for_betty(bst_t *root)
{
	if (root->parent)
		{
		if (root == root->parent->right)
		{
			if (root->left)
			{
				root->parent->right = root->left;
				root->left->parent = root->parent;
			}
			else
			{
				root->parent->right = root->right;
				root->left->parent = root->parent;
			}
			free(root);
		}
		else
		{
			if (root->left)
			{
				root->parent->left = root->left;
				root->right->parent = root->parent;
			}
			else
			{
				root->parent->left = root->right;
				root->right->parent = root->parent;
			}
			free(root);
		}
	}
	else
	{
		free(root);
	}
}

/**
 * bst_remove - Remove
 *
 * @root: Rootof tree
 * @value: Value to remove
 *
 * Return: root
*/
bst_t *bst_remove(bst_t *root, int value)
{
	int s = 0;

	if (root == NULL)
		return (NULL);

	if (value > root->n)
		bst_remove(root->right, value);
	else if (value < root->n)
		bst_remove(root->left, value);
	else if (value == root->n)
		if (!root->left && !root->right)
		{
			if (root->parent->right == root)
				root->parent->right = NULL;
			else
				root->parent->left = NULL;
			free(root);
		}
		else if ((!root->left && root->right) ||
			(!root->right && root->left))
		{
			for_betty(root);
		}
		else
		{
			s = rm(root->right);
			root->n = s;
			if (s != 0)
			{
				bst_remove(root->right, s);
			}
		}
	else
		return (NULL);
	return (root);
}