#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
        if (tree != NULL)
        {
                binary_tree_delete(tree->left);
                binary_tree_delete(tree->right);
                free(tree);
        }
}
root@8f6108b30f3a:/alx-low_level_programming/binary_trees# cat 4-binary_tree_is_leaf.c 
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
        if (node == NULL || node->left != NULL || node->right != NULL)
                return (0);

        return (1);
}
