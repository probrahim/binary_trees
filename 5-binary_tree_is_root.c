#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a binary tree.
 * @node: Node to check.
 *
 * Return: If true - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL || node == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
