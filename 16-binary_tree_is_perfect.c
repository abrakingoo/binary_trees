#include "binary_trees.h"


/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: pointer to the root node of the tree to measure the height
  *
  * Return: height of the tree
  *
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_right, height_left;


	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);


	height_right = binary_tree_height(tree->right);
	height_left = binary_tree_height(tree->left);

	if (height_right > height_left)
		return (1 + height_right);
	return (1 + height_left);
}

/**
  * binary_tree_is_perfect - checks if a binary tree is perfect
  * @tree: pointer to the root node
  *
  * Return: true if perferct false otherwise
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree != NULL && tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left == right)
	{
		if (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right))
			return (1);
	}

	return (0);
}
