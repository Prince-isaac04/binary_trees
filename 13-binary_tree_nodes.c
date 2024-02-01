#include "binary_trees.h"

/**
 * binary_tree_nodes - node with aat least a children
 * @tree: the pointer to the node
 * Return: number of 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0;

	if (tree)
	{
		child += (tree->left || tree->right) ? 1 : 0;
		child += binary_tree_nodes(tree->left);
		child += binary_tree_nodes(tree->right);
	}
	return (child);
}
