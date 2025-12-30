#include <stdio.h>

#define MAX 5

// Global variables (No pointers needed)
int queue[MAX];
int front = -1;
int rear = -1;

// Function to add an element
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot add %d\n", value);
    } else {
        if (front == -1) {
            front = 0; // Initialize front on first insertion
        }
        rear++;
        queue[rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

// Function to remove an element
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Nothing to remove.\n");
    } else {
        printf("Dequeued: %d\n", queue[front]);
        front++;
        
        if(front > rear) {
            front = rear = -1; // Reset queue when empty
        }
 
    }
}

// Function to display the queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60); // This should show overflow
    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    display();
    enqueue(2); // This should show overflow
    dequeue();

    display();


    return 0;
}