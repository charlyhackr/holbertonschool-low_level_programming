#include "binary_trees.h"

/**
 * binary_tree_leaves - Cnuts the eaves in a binary tree
 * @tree: A pointer to the root node of the tree to conunt the leaves of
 * Return: THe number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_t = 0;
	
	if (tree)
	{
		leaves_t += (!tree->left && !tree->right) ? 1 : 0;
		leaves_t += binary_tree_leaves(tree->left);
		leaves_t += binary_tree_leaves(tree->right);
	}
	return (leaves_t);
}
