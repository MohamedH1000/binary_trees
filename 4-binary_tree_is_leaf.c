#include "binary_trees.h"
/**
 * binary_tree_is_leaf - a function that checks if binary tree is a leaf
 * @node: the node to be checked
 * Return: 0 if the node is null and if 1 if its leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
