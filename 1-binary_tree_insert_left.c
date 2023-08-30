#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 * Return: A pointer to the created node, or NULL on failure.
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *prev_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);

	}

	else
	{
		prev_node = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = prev_node;
		prev_node->parent = parent->left;
	}

	return (parent->left);
}
