#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree.
 * @tree: the tree we are measuring
 * Return: our findings.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
