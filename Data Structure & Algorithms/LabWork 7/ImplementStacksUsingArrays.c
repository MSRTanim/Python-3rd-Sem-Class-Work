/*
    Date: 30 October 2024
    Date: 06 Nobemebr 2024
    Name: MD. SAMIUR RAHMAN TANIM
    Tutor: Dr. Barenya Bikash Hazarika
    Class Status: Present
    Topic: Write a Program in C to Implement Stacks Using Arrays.
*/

// Algorithm:
/*
Step 1: Initialize the stack with an array and set `top` to -1.
Step 2: Implement the `push` function to add an element to the stack if it is not full.
Step 3: Implement the `pop` function to remove and return the top element if the stack is not empty.
Step 4: Implement the `peek` function to return the top element without removing it.
Step 5: Implement the `display` function to print all elements from top to bottom.
Step 6: Use a menu in the main function to allow the user to perform stack operations until exit is selected.
*/


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 100 // Maximum size of the stack

// Stack structure
struct Stack {
    int arr[MAX];
    int top;
};

// Function to initialize the stack
void initStack(struct Stack* stack) {
    stack->top = -1; // Initialize top to -1 to indicate that the stack is empty
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == MAX - 1; // Stack is full if top is at the last index
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1; // Stack is empty if top is -1
}

// Function to push an element onto the stack
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow! Cannot push %d onto the stack.\n", value);
        return;
    }
    stack->arr[++stack->top] = value; // Increment top and add the value
    printf("Pushed %d onto the stack.\n", value);
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
        return INT_MIN; // Return a sentinel value
    }
    return stack->arr[stack->top--]; // Return the top value and decrement top
}

// Function to peek at the top element of the stack
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty! Cannot peek.\n");
        return INT_MIN; // Return a sentinel value
    }
    return stack->arr[stack->top]; // Return the top value without removing it
}

// Function to display the contents of the stack
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack contents: ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}

// 
// Main function to demonstrate stack operations
int main() {
    struct Stack stack;
    initStack(&stack); // Initialize the stack

    int choice, value;

    do {
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display Stack\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Push
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2: // Pop
                value = pop(&stack);
                if (value != INT_MIN) {
                    printf("Popped %d from the stack.\n", value);
                }
                break;
            case 3: // Peek
                value = peek(&stack);
                if (value != INT_MIN) {
                    printf("Top element is %d\n", value);
                }
                break;
            case 4: // Display
                display(&stack);
                break;
            case 5: // Exit
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}