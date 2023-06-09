#include "binary_trees.h"

typedef struct binary_tree_s binary_tree_t;

struct binary_tree_s {
    int n;
    binary_tree_t *parent;
    binary_tree_t *left;
    binary_tree_t *right;
};

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}
