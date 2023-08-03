#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of the tree
 * @tree: to go through a tree
 * Return: the height to be returned
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t len = 0;
	size_t res = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			len = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			res = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((len > res) ? len : res);
	}
}
