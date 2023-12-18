#include "binary_trees.h"

/**
 * binary_tree_is_full - Check for full tree.
 * @tree: Tree to check
 * Return: Our findings.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
