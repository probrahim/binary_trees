#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child.
 * @parent: pointer to the parent node.
 * @value: The value to store in the new node.
 *
 * Return: A pointer , or NULL on failure.
 *
 * Description:
 * This function inserts a new node as the left-child of the given parent node.
 * If successful, it returns a pointer to the newly created node containing.
 * If the parent node is NULL or memory allocation fails.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tl;

	if (parent == NULL)
	{
		return (NULL);
	}

	tl = binary_tree_node(parent, value);
	if (tl == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		tl->left = parent->left;
		parent->left->parent = tl;
	}
	parent->left = tl;

	if (value < 0)
	{
		return (0);
	}

	return (tl);
}
