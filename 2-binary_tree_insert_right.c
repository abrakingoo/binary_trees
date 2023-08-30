#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: a pointer to the node to insert the right-child in
 *@value: the value to store in the new node
 *Return: a pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *current_right_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
	}

	else
	{
		current_right_node = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = current_right_node;
		current_right_node->parent = parent->right;
	}

	return (parent->right);
}
