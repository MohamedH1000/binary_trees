#include "binary_trees.h"
/**
 * binary_tree_delete - a function that deletes a binary tree
 * @tree: a tree that is to be freed
 * Return: the deleted binary tree or nothing if its null
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
