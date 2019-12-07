#include "binary_trees.h"

/**
 * binary_trees_ancestor - FINd the lowest common ancestor of two nodes.
 * @first: POinter to the first node
 * @second: pointer to the second node
 * Return : if no common ancestors return NULL, else return common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *madre, *padre;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	madre = first->parent, padre = second->parent;
	if (first == padre || !madre || (!madre->parent && padre))
		return (binary_trees_ancestor(first, padre));
	else if (madre == second || !padre || (!padre->parent && madre))
		return (binary_trees_ancestor(madre, second));
	return (binary_trees_ancestor(madre, padre));
}
