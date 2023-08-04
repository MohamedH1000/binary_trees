#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that check
 * if node is sibling
 * @node: to check the node
 * Return: The node that is sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
