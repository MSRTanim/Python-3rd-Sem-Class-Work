/*
    Date: 30 October 2024
    Name: MD. SAMIUR RAHMAN TANIM
    Tutor: Dr. Barenya Bikash Hazarika
    Class Status: Present
    Topic: Write a Program in C for Implementation of Stacks Using Linked Lists.
*/
// Algorithm:
/*
Step 1: Start the program.
Step 2: Define a Node structure with data (integer) and next (pointer to next node).
Step 3: Implement the push function:
        Create a new node, assign data, and link it to the current top.
        Update the top to the new node.
Step 4: Implement the pop function:
        Check if the stack is empty; if not, retrieve data from the top node.
        Update top to the next node and free the removed node.
Step 5: Implement the display function:
        Traverse from top to end, printing each node's data.
Step 6: In main, initialize the stack, and use a loop for user operations (push, pop, display).
Step 7: End the program.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** top, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
    printf("Added %d to the stack.\n", value);
}

int isEmpty(struct Node* top) {
    return top == NULL;
}

int pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Cannot pop. The stack is currently empty.\n");
        return -1;
    }
    int value = (*top)->data;
    struct Node* temp = *top;
    *top = (*top)->next;
    free(temp);
    return value;
}

int peek(struct Node* top) {
    if (isEmpty(top)) {
        printf("The stack is empty. No top element to show.\n");
        return -1;
    }
    return top->data;
}

void display(struct Node* top) {
    if (isEmpty(top)) {
        printf("The stack is empty. No items to display.\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack contents (top to bottom): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* stack = NULL;
    int choice, value;

    do {
        printf("\n1. Add to Stack\n2. Remove from Stack\n3. View Top Element\n4. Show Stack\n5. Exit\n");
        printf("Select an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a value to add: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                value = pop(&stack);
                if (value != -1)
                    printf("Removed %d from the stack.\n", value);
                break;
            case 3:
                value = peek(stack);
                if (value != -1)
                    printf("Top element is %d.\n", value);
                break;
            case 4:
                display(stack);
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
