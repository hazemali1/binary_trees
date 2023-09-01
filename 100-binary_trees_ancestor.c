#include "binary_trees.h"

/**
 * binary_trees_ancestor - lowest common ancestor
 *
 * @first: First node
 * @second: second node
 *
 * Return: pointer
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second || first == second->parent)
		return ((binary_tree_t *)first);

	if (second == first->parent)
		return ((binary_tree_t *)second);

	if (first->parent == second->parent)
		return (first->parent);

	if (!first->parent && second->parent)
		return (binary_trees_ancestor(first, second->parent));
	else if (!second->parent && first->parent)
		return (binary_trees_ancestor(first->parent, second));
	else
		return (binary_trees_ancestor(first->parent, second->parent));
}