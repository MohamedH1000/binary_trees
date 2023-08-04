#include "binary_trees.h"
/**
 * binary_tree_size - a function that calculate the size
 * of binary tree
 * @tree: the tree to be checked
 * Return: tree size to be returned
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sz = 0, rig = 0, lef = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lef = binary_tree_size(tree->left);
		rig = binary_tree_size(tree->right);
		sz = rig + lef + 1;
	}
	return (sz);
}
