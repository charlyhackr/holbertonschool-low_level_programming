#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>

/* Data strutures */

/** 
 * struct binary_tree_s - Binary tree node
 * @n: INteger stored in the node
 * @parent: POinter to the parent node
 * @left: Pointer to the left chld node
 * @right: POinter to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

/* Printing helper function */
void binary_tree_print(const binary_tree_t *);

/* Task function prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif /* BINARY_TREES_H */
