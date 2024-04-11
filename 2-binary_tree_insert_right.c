#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child.
 * @parent: pointer to the parent node.
 * @value: The value to store in the new node.
 *
 * Return: A pointer , or NULL on failure.
 *
 * Description:
 * This function inserts a new node as the right-child the given parent node.
 * If successful, it returns a pointer to the newly created node containing.
 * If the parent node is NULL or memory allocation fails.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		tl->right = parent->right;
		parent->right->parent = tl;
	}
	parent->right = tl;

	if (value < 0)
	{
		return (0);
	}

	return (tl);
}
