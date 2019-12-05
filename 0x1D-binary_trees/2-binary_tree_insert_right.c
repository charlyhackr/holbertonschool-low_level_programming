#include "binary_trees.h"

/**
 * binary_tre_insert_right - INsert a node as the right child
 *                            of another in a binary tree
 * @parent: APointer to the node to insert the right-child in.
 * @value: THe value to store in the new node
 * Return: If parent is NULL or an errors occurs
 * Description: If parent already has a right child the new node
 *              takes its place.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
