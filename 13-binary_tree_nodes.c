#include "binary_trees.h"
/**
 * binary_tree_nodes - a function that counts the number of nodes
 * in binary tree
 * @tree: check tree
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  nd = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		nd += ((tree->left || tree->right) ? 1 : 0);
		nd += binary_tree_nodes(tree->left);
		nd += binary_tree_nodes(tree->right);
		return (nd);
	}
}
