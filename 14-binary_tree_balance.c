#include "binary_trees.h"

/**
 * binary_tree_balance - Calculate the tree balance
 * @tree: the pointer to the tree
 * Return: balance factor or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}


/**
 * binary_tree_height - calculate the height of a binary tree.
 * @tree: A pointer to the tree root node.
 * Return: height else 0 if tree is Null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lef = 0, rig = 0;

		lef = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rig = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lef > rig) ? lef : rig);
	}
	return (0);
}
