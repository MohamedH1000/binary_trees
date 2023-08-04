#include "binary_trees.h"
/**
 * binary_tree_leaves - a function that counts the number
 * of leaves in a binary tree
 * @tree: check tree
 * Return: leaves number
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0, lef = 0, rig = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lef = binary_tree_leaves(tree->left);
		rig = binary_tree_leaves(tree->right);
		l = lef + rig;
		return ((!lef && !rig) ? l + 1 : l + 0);
	}
}
