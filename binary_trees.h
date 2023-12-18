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


#endif
