/* Implementing a binary tree using a linked list */

#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int value;
    struct TreeNode* left;  //left child
    struct TreeNode* right; //right child
} TreeNode;

typedef struct BinaryTree {
    TreeNode* root;
} BinaryTree;

TreeNode* createNode(int value) {
    TreeNode* node = malloc(sizeof(TreeNode));
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void freeTree(TreeNode* root) {
    if (root) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

void printPreorder(TreeNode* root) {
    if (root) {
        printf("%d ", root->value);
        printPreorder(root->left);
        printPreorder(root->right);
    }
}

int main() {
    BinaryTree tree;
    tree.root = createNode(1);
    tree.root->left = createNode(2);
    tree.root->right = createNode(3);
    tree.root->left->left = createNode(4);
    tree.root->left->right = createNode(5);
    
    printf("Preorder traversal: ");
    printPreorder(tree.root);
    printf("\n");
    
    freeTree(tree.root);
    return 0;
}
