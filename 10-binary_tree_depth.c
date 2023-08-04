#include "binary_trees.h"
/**
 * binary_tree_depth - a function that measure the depth of binary tree
 * @tree: to check the depth of the tree node
 * Return: the depth of the tree or 0 if its not
 * a tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
