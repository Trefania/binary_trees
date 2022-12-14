#include "binary_trees.h"
#include "10-binary_tree_depth.c"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: return a pointer to the lowest common ancestor node of the
 * two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int first_depth, second_depth;

	if (!first || !second)
		return (NULL);
	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);
	while (first_depth > second_depth)
	{
		first = first->parent;
		first_depth--;
	}
	while (second_depth > first_depth)
	{
		second = second->parent;
		second_depth--;
	}
	while ((second->parent && first->parent) && (first != second))
	{
		first = first->parent;
		second = second->parent;
	}
	if (first == second)
		return ((binary_tree_t *)first);

	return (NULL);
}
