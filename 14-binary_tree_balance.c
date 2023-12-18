#include "binary_trees.h"

/**
 * binary_tree_balance - Calculate the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The balance factor. 0 if the tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 1;
	int right_height = 1;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height += tree_height(tree->left);
	else
		left_height = 0;

	if (tree->right)
		right_height += tree_height(tree->right);
	else
		right_height = 0;

	return (left_height - right_height);
}

/**
 * tree_height - Calculate the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the binary tree as an integer.
 */
int tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	else
		return (1 + maximum(tree_height(tree->left), tree_height(tree->right)));
}

/**
 * maximum - Get the maximum of two integers.
 * @a: An integer.
 * @b: Another integer.
 *
 * Return: The maximum value between a and b.
 */
int maximum(int a, int b)
{
	return ((a >= b) ? a : b);
}
