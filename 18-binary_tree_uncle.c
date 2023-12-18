#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a node
 * @node: Tree were searching
 *  Return: Our findings.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	grandparent = node->parent->parent;

	if (grandparent->left && grandparent->left != node->parent)
		return (grandparent->left);
	else if (grandparent->right && grandparent->right != node->parent)
		return (grandparent->right);

	return (NULL);
}
