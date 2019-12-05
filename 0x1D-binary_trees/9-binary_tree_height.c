#include "binary_trees.h"

/**
 * binary_tree_height - Meausers the height of a binary tree
 * @tree: A pointer to the root node of the tree to meausere the height
 * Return: If tree is NULL, your function must return 0 else return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t ls = 0, rs = 0;

		ls = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rs = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((ls > rs) ? ls : rs);
	}
	return (0);
}
