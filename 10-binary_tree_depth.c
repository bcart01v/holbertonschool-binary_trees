#include "binary_trees.h"

/**
 * binary tree depth - Measures the depth of a binary tree.
 * @tree: The tree we are measuring
 * Return: The Result of the measurement.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		count = binary_tree_depth(tree->parent);
		count++;
	}
	return (count);
}
