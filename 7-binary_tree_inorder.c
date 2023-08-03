#include "binary_trees.h"
/**
 * binary_tree_inorder - a function that print elements in in-order traversal
 * @tree: to go through a tree
 * @func: to use a function
 * Return: nothing to return
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
