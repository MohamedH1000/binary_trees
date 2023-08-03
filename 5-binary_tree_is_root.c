#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if binary tree is root
 * @node: the node to be checked
 * Return: 1 if its a root and 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
