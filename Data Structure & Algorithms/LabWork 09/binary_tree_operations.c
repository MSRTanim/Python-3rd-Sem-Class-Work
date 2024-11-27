/*
    Date: ??
    Name: MD. SAMIUR RAHMAN TANIM
    Tutor: Dr. Barenya Bikash Hazarika
    Class Status: ??
    Topic: Write a Program in C to Implement Binary-Tree Algorithm for Operations with INSERT, DELETE, and DISPLAY.
*/

// Algorithm:
/*
Step 1: Define a structure for tree nodes with data, left, and right pointers.
Step 2: Create functions for insertion, deletion, and in-order display.
Step 3: Use recursion for tree traversal during insertion and display.
Step 4: Implement main to call these functions based on user input.
Step 5: End the program.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->left = node->right = NULL;
    return node;
}

struct Node* insert(struct Node* root, int value) {
    if (!root) return createNode(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}

void inOrder(struct Node* root) {
    if (root) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

struct Node* findMin(struct Node* root) {
    while (root && root->left)
        root = root->left;
    return root;
}

struct Node* deleteNode(struct Node* root, int value) {
    if (!root) return root;
    if (value < root->data)
        root->left = deleteNode(root->left, value);
    else if (value > root->data)
        root->right = deleteNode(root->right, value);
    else {
        if (!root->left) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (!root->right) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    struct Node* root = NULL;
    int choice, value;

    do {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                break;
            case 3:
                printf("In-order Display: ");
                inOrder(root);
                printf("\n");
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
