#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tl;

	tl = malloc(sizeof(binary_tree_t));
	if (tl == NULL)
	{
		return (NULL);
	}
	tl->n = value;
	tl->parent = parent;
	tl->left = NULL;
	tl->right = NULL;
	return (tl);
}
