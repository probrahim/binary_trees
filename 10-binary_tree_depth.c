#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	while (tree && tree->parent)
	{
		i++;
		tree = tree->parent;
	}
	return (i);
}
