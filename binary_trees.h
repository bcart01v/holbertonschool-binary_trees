#ifndef BINARY
#define BINARY

/* Librarys */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/* Structures */

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* Prints a binary tree */
void binary_tree_print(const binary_tree_t *tree);

/*Creates new binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/*Inserts a new node to the left.*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/*Inserts a new node to the right.*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/*Deletes an entire binary tree (Use with caution)*/
void binary_tree_delete(binary_tree_t *tree);

/*Checks if node is leaf.*/
int binary_tree_is_leaf(const binary_tree_t *node);

/*Checks if node is root*/
int binary_tree_is_root(const binary_tree_t *node);

/*Traverse a tree using preorder.*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/*Traverse a tree using inorder.*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/*Traverse a tree using postorder.*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/*Calculates the height of a Binary Tree.*/
size_t binary_tree_height(const binary_tree_t *tree);

/*Measures the depth of a binary tree */
size_t binary_tree_depth(const binary_tree_t *tree);

/*Measure the size of a binary tree */
size_t binary_tree_size(const binary_tree_t *tree);

/*Sometimes it's nice to sit and count the leaves */
size_t binary_tree_leaves(const binary_tree_t *tree);

/*Count the nodes with at least 1 child*/
size_t binary_tree_nodes(const binary_tree_t *tree);

/*Calcualte balance factor of tree*/
int binary_tree_balance(const binary_tree_t *tree);

/*Get the height of a tree*/
int tree_height(const binary_tree_t *tree);

/*Get the max of two ints*/
int maximum(int a, int b);

/*Check for full tree*/
int binary_tree_is_full(const binary_tree_t *tree);

/*Check if our tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);

/*Recursive Tree Check */
int recursive_is_perfect(const binary_tree_t *tree, int reference_depth, int level);

/*Get depth for reference*/
int reference_depth_left(const binary_tree_t *tree);

/*Find the sibling to a node */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/*Find the uncle of a node*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif
