#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - Binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: value in the new node
 *
 * Return: pointer to the node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);

	if (new_node == NULL)
	{
		return (NULL);
	}
}
