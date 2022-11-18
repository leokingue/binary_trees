#include "binary_trees.h"
/**
 * binary_tree_node - create a new tree with as root node
 * @parent: root node
 * @value: key of the new node
 * Return: new_node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree = malloc(sizeof(*new_tree));

	if (new_tree == NULL)
	{
		fprintf(stderr, "DYNAMIC ALLOCATION ERROR\n");
		return (NULL);
	}
	new_tree->parent = parent;
	new_tree->left = NULL;
	new_tree->right = NULL;
	new_tree->n = value;

	return (new_tree);
}
