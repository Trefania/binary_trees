#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root
 * @node: the node to check
 * Return: 1 if the node is a root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->parent)
			return (1);
	}
	return (0);
}