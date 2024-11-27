/*
    Date: 13 November 2024
    Name: MD. SAMIUR RAHMAN TANIM
    Tutor: Dr. Barenya Bikash Hazarika
    Class Status: Present
    Topic: Write a Program in C to Implement Queues Using Arrays
*/

// Algorithm:
/*
Step 1: Initialize the queue with an array, and set `front` and `rear` to -1.
Step 2: Implement the `enqueue` function to add an element if the queue is not full.
Step 3: Implement the `dequeue` function to remove and return the front element if the queue is not empty.
Step 4: Implement the `peek` function to return the front element without removal.
Step 5: Implement the `display` function to print all elements from front to rear.
Step 6: Use a menu or direct function calls in the main function to demonstrate queue operations.
*/

#include <stdio.h>
#define MAX 100

struct Queue {
    int arr[MAX];
    int front, rear;
};

void initQueue(struct Queue* q) { 
    q->front = q->rear = -1; 
}

int isFull(struct Queue* q) { 
    return q->rear == MAX - 1; 
}

int isEmpty(struct Queue* q) { 
    return q->front == -1 || q->front > q->rear; 
}

void enqueue(struct Queue* q, int value) {
    if (isFull(q)) return;
    if (isEmpty(q)) q->front = 0;
    q->arr[++q->rear] = value;
    printf("Enqueued %d\n", value);
}

int dequeue(struct Queue* q) {
    if (isEmpty(q)) return -1;
    int val = q->arr[q->front++];
    if (q->front > q->rear) q->front = q->rear = -1;
    return val;
}

int peek(struct Queue* q) {
    return isEmpty(q) ? -1 : q->arr[q->front];
}

void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = q->front; i <= q->rear; i++) printf("%d ", q->arr[i]);
    printf("\n");
}

int main() {
    struct Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    display(&q);

    printf("Dequeued %d\n", dequeue(&q));
    display(&q);

    printf("Peeked %d\n", peek(&q));
    display(&q);

    return 0;
}
