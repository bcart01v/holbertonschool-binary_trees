#include "binary_trees.h"

/**
 * binary_tree_nodes - Count nodes with at least 1 child.
 * @tree: Tree we're counting.
 * Return: our findings.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (binary_tree_nodes(tree->left));
	else if (tree->left == NULL && tree->right == NULL)
		return (binary_tree_nodes(tree->right));
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
