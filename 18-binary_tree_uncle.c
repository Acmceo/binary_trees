#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a
 *                       node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 *         Otherwise - a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
        if (node == NULL || node->parent == NULL)
                return (NULL);
        if (node->parent->left == node)
                return (node->parent->right);
        return (node->parent->left);

root@8f6108b30f3a:/alx-low_level_programming/binary_trees# cat 18-binary_tree_uncle.c
#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 *                     in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 *
 * Return: If node is NULL or has no uncle, NULL.
 *         Otherwise, a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
        if (node == NULL ||
            node->parent == NULL ||
            node->parent->parent == NULL)
                return (NULL);
        if (node->parent->parent->left == node->parent)
                return (node->parent->parent->right);
        return (node->parent->parent->left);
}
