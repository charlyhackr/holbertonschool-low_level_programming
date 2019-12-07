#include "binary_trees.h"

/**
 * binary_tree_uncle - FInds the uncle of a naode ina a binary tree
 * @node: A pointer to the node to find the ucle of
 * Return: if node is NULL or has no iuncle other wisw a poiunter to the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
