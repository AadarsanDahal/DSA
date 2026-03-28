// 4.	Code
// The following program demonstrates the creation of a Binary Tree and performs various traversals.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// In-order Traversal (Left, Root, Right)
void inOrder(struct Node* root) {
    if (root == NULL) return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

// Pre-order Traversal (Root, Left, Right)
void preOrder(struct Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

// Post-order Traversal (Left, Right, Root)
void postOrder(struct Node* root) {
    if (root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

int main() {
    // Creating a simple binary tree
    /* 1
           / \
          2   3
         / \
        4   5
    */
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Pre-order traversal: ");
    preOrder(root);
    
    printf("\nIn-order traversal: ");
    inOrder(root);
    
    printf("\nPost-order traversal: ");
    postOrder(root);



    getch();
    return 0;
}