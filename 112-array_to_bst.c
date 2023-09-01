#include "binary_trees.h"

/**
 * array_to_bst - array to bst
 *
 * @array: Array
 * @size: Size of array
 *
 * Return: Pointer
*/
bst_t *array_to_bst(int *array, size_t size)
{
	size_t s;
	bst_t *tree = NULL;

	for (s = 0; s < size; s++)
	{
		bst_insert(&tree, array[s]);
	}
	return (tree);
}