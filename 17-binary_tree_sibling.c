#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a.
 * @node: A pointer to the node to find.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 *         Otherwise - a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	ptrdiff_t diff = node - node->parent->left;

	if (diff < 0)
	{
		return (NULL);
	}
	return (diff == 0 ? node->parent->right : node->parent->left);
}
