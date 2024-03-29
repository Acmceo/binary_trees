#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a root - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
        if (node == NULL || node->parent != NULL)
                return (0);

        return (1);
}
root@8f6108b30f3a:/alx-low_level_programming/binary_trees# cat 6-binary_tree_preorder.c 
#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
        if (tree && func)
        {
                func(tree->n);
                binary_tree_preorder(tree->left, func);
                binary_tree_preorder(tree->right, func);
        }
}
