#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a binary tree.
 * @node: Node to check.
 *
 * Return: If true return  - 1.
 *         Otherwise - 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left != NULL || node == NULL || node->right == NULL)
	{
		return (0);
	}
	return (1);
}
