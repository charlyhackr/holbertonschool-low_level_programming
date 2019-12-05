#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as a left-child of another
 * @parent: A pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 * Return: if parents is NULL or an error occurs, otherwise to the new node
 * Description: If parent alredy has a left-child, the new node take its place
 *              and the old left-child is set as the left-child of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
