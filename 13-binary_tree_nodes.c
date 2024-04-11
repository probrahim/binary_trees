#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree)
	{
		i += (tree->left || tree->right) ? 1 : 0;
		i += binary_tree_nodes(tree->left);
		i += binary_tree_nodes(tree->right);
	}
	return (i);
}
