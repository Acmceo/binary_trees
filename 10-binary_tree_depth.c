#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        if (tree)
        {
                size_t l = 0, r = 0;

                l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
                r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
                return ((l > r) ? l : r);
        }
        return (0);
}
root@8f6108b30f3a:/alx-low_level_programming/binary_trees# cat 10-binary_tree_depth.c 
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
        return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
