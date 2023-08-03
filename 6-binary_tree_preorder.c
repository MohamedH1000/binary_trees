#include "binary_trees.h"
/**
 * binary_tree_preorder - a function that prints the elements in preorder
 * @tree: to go through a tree
 * @func: to use this function
 * Return: nothing to return
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
