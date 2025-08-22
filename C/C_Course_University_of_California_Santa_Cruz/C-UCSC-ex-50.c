// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

// Binary Tree In-Order Traversal of File Input
// Written by [Your Name]

#include <stdio.h>
#include <stdlib.h>

// Define a node in the binary tree
typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} Node;

// Function to create a new tree node
Node* create_node(int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

// Function to insert a value into the binary search tree
Node* insert(Node* root, int value) {
    if (root == NULL)
        return create_node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// In-order traversal (Left, Root, Right)
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Free the tree after use
void free_tree(Node* root) {
    if (root == NULL) return;
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}

int main() {
    FILE *fp = fopen("input.txt", "r");
    if (!fp) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    int count;
    fscanf(fp, "%d", &count);

    int *data = (int*)malloc(count * sizeof(int));
    for (int i = 0; i < count; i++) {
        fscanf(fp, "%d", &data[i]);
    }

    fclose(fp);

    // Insert data into binary search tree
    Node* root = NULL;
    for (int i = 0; i < count; i++) {
        root = insert(root, data[i]);
    }

    printf("In-order traversal of the binary tree:\n");
    inorder(root);
    printf("\n");

    free_tree(root);
    free(data);
    return 0;
}