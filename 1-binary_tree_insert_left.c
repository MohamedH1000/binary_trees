#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that insert
 * a child node to the left
 * @parent: parent of the node that is specified
 * @value: the value of the node
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		n_n->left = parent->left;
		parent->left->parent = n_n;
	}
	parent->left = n_n;
	return (n_n);
}
