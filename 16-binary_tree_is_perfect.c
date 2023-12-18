#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise or if the tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int reference_depth = reference_depth_left(tree);

	if (tree == NULL)
		return (0);

	return (recursive_is_perfect(tree, reference_depth, 0));
}

/**
 * recursive_is_perfect - Recursively check if the binary tree is perfect.
 * @tree: Pointer to the tree node being checked.
 * @ref_depth: Reference depth of the leftmost leaf node.
 * @level: Current level of recursion.
 * Return: 1 if the tree is perfect, 0 otherwise or if the tree is NULL.
 */

int recursive_is_perfect(const binary_tree_t *tree, int ref_depth, int level)
{
	if (tree->left == NULL && tree->right == NULL)
		return (ref_depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (recursive_is_perfect(tree->left, ref_depth, level + 1) &&
		recursive_is_perfect(tree->right, ref_depth, level + 1));
}

/**
 * reference_depth_left - Get the depth of the leftmost node for reference.
 * @tree: Tree to get the reference depth from.
 * Return: Depth of the leftmost node.
 */

int reference_depth_left(const binary_tree_t *tree)
{
	int reference_depth = 0;

	while (tree != NULL)
	{
		reference_depth++;
		tree = tree->left;
	}
	return (reference_depth);
}
