#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks If the node is root.
 * @node: variable struct
 * Return: int
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	else
		return (1);
	return (0);
}
