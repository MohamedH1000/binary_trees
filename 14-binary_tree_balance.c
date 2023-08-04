#include "binary_trees.h"

/**
 * binary_tree_h - a function that measures the height of
 * a binary tree
 * @tr: to go through tree
 * Return: height to be returned
 */

size_t binary_tree_h(const binary_tree_t *tr)
{
	size_t lef = 0;
	size_t rig = 0;

	if (tr == NULL)
	{
		return (0);
	}
	else
	{
		if (tr)
		{
			lef = tr->left ? 1 + binary_tree_h(tr->left) : 1;
			rig = tr->right ? 1 + binary_tree_h(tr->right) : 1;
		}
		return ((lef > rig) ? lef : rig);
	}
}

/**
 * binary_tree_balance - a function that measures
 * the binary tree balance factor
 * @tree: to go through a tree
 * Return: factor that is balanced
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int rig = 0, lef = 0, sum = 0;

	if (tree)
	{
		lef = ((int)binary_tree_h(tree->left));
		rig = ((int)binary_tree_h(tree->right));
		sum = lef - rig;
	}
	return (sum);
}
