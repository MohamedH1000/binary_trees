#include "binary_trees.h"
/**
 * binary_tree_insert_right - a function that insert a right child node
 * @parent: a parent of the node that is specified
 * @value: the value of the node
 * Return: the new node or NULL if fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_n;

	if (parent == NULL)
	{
		return (NULL);
	}

	n_n = binary_tree_node(parent, value);
	if (n_n == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		n_n->right = parent->right;
		parent->right->parent = n_n;
	}
	parent->right = n_n;
	return (n_n);
}
