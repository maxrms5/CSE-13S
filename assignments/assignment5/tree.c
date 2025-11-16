/* Implementing a binary search tree in C */

#include <stdio.h>
#include <stdlib.h>

/* Structure of a node in BST */ 
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value) {
    Node *node = malloc(sizeof(Node)); // allocate memory for node
    node->data = value; // set value stored at node
    node->left = NULL; // init left node
    node->right = NULL; // init right node
    return node;
}

Node* insert(Node* root, int value) {
    // base case, node does not exist
    if (root == NULL) {
        root = createNode(value);
        return root;
    }
    
    // recursive case, insert node left/right based on value
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}

Node* search(Node* root, int value) {
    // base case, node does not exist OR value found in tree
    if (root == NULL) return NULL; 
    if (value == root->data) return root;

    // recursive case, search tree left/right based on value
    if (value < root->data) {
        search(root->left, value);
    } else {
        search(root->right, value);
    }
}

void inOrderTraversal(Node* root) {
    // base case: node does not exist -> go back to prev node
    if (root == NULL) return;

    // recursive case: if node exists go trough tree and print
    inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
    
    return;
}

void freeTree(Node* root) {
    // base case: node does not exist -> go back to prev node
    if (root == NULL) return;

    // recursive case: navigate to every node in tree
    freeTree(root->left);
    freeTree(root->right);
    // then free each node back to front
    free(root);
    return;

}

int main() { 
    int n;
    printf("Enter the number of values to be inserted: ");
    scanf("%d", &n);

    int values[n];
    printf("Enter %d integers in random order: ", n);
    for(int i=0; i< n; i++) {
        scanf("%d", values+i);
    }

    Node* root = NULL;
    /* Insert values into BST */ 
    for (int i = 0; i < n; i++) {
        root = insert(root, values[i]);
    }

    /* Print values in a sorted manner using in-order traversal */
    printf("In-order traversal: ");
    inOrderTraversal(root);
    printf("\n");

    /* Search for a value in BST */
    int searchValue;
    printf("Enter a value to be searched: ");
    scanf("%d", &searchValue);
    if (search(root, searchValue)) {
        printf("%d found in BST.\n", searchValue);
    } else {
        printf("%d not found in BST.\n", searchValue);
    }

    freeTree(root); /* free the tree */

    return 0;
}
