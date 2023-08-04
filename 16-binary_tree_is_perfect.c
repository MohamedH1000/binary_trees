#include "binary_trees.h"
/**
 * treeperf - a function that checks the perfect of binary tree
 * @tr: to check the tree
 * Return: 0 in case not perfect
 */
int treeperf(const binary_tree_t *tr)
{
	int lef = 0, rig = 0;

	if (tr->left && tr->right)
	{
		lef = 1 + treeperf(tr->left);
		rig = 1 + treeperf(tr->right);
		if (rig == l && rig != 0 && lef != 0)
			return (rig);
		return (0);
	}
	else if (!tr->left && !tr->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - check if the tree perfect
 * or not
 * @tree: to check the tree
 * Return: 1 if its perfect and 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		res = treeperf(tree);
		if (res != 0)
		{
			return (1);
		}
		return (0);
	}
}
