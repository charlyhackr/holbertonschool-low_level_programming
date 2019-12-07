#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child ina binary tree
 * @tree: A poiunter to the root node of the tree to count the number of nodes
 * Return: If tree is NUL, functuion must return 0, else return node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodos = 0;

	if (tree)
	{
		nodos += (tree->left || tree->right) ? 1 : 0;
		nodos += binary_tree_nodes(tree->left);
		nodos += binary_tree_nodes(tree->right);
	}
	return (nodos);
}
