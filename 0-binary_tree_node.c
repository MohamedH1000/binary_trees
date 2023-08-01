#include "binary_trees.h"
 /**
  * binary_tree_node - a function that creates
  * binary tree node
  * @parent: a parent node
  * @value: the value of the node
  * return: the node that is new
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_n;

	n_n = malloc(sizeof(binary_tree_t));

	if (n_n == NULL)
	{
		return (NULL);
	}
	n_n->n = value;
	n_n->parent = parent;
	n_n->right = NULL;
	n_n->left = NULL;
	return (n_n);
}
