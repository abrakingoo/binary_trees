#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: Number of Nodes, If tree is NULL  return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t number_of_nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		number_of_nodes++;
	}

	number_of_nodes += binary_tree_nodes(tree->left);
	number_of_nodes += binary_tree_nodes(tree->right);

	return (number_of_nodes);


}
