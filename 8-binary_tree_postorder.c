#include "binary_trees.h"

/**
 * binary_tree_postorder - pre order trasversal
 * @tree: the root node
 * @func: the function to implement on value of each node
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		int a = tree->n;

		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(a);
	}
}
