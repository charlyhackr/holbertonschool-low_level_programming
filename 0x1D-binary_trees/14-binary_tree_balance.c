#include "binary_trees.h"

/**
 * binary_tree_balance - Meauseres the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to meausere the balance factor
 * Return: If tree is NULL, return 0, else return balnce factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

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

		ls = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rs = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((ls > rs) ? ls : rs);
	}
	return (0);
}
