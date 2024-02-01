#include "binary_trees.h"
/**
 * binary_tree_sibling - find the binary siblings
 * @node: the pointer to the node
 * Return: the pointer to the node of the siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
