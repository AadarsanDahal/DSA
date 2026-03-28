// 3.	Priority Queue
#include <stdio.h>
#include <conio.h>
#include <limits.h>

#define MAX 5

struct Item {
    int value;
    int priority;
};

struct Item pq[MAX];
int size = -1; 

int isFull() {
    return size == MAX - 1;
}

int isEmpty() {
    return size == -1;
}

void enqueue(int value, int priority) {
    if (isFull()) {
        printf("Queue Overflow! Cannot insert (%d, %d)\n", value, priority);
        return;
    }
    
    size++;
    pq[size].value = value;
    pq[size].priority = priority;
    printf("Inserted (%d, %d)\n", value, priority);
}

int peek() {
    if (isEmpty()) {
        return -1;
    }

    int highestPriority = INT_MIN;
    int highPriorIndex = -1;

    for (int i = 0; i <= size; i++) {
        if (pq[i].priority > highestPriority) {
            highestPriority = pq[i].priority;
            highPriorIndex = i;
        } 
    }
    return highPriorIndex;
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Queue is empty\n");
        return;
    }

    int ind = peek();

    printf("Removed (%d, %d)\n", pq[ind].value, pq[ind].priority);
    
    for (int i = ind; i < size; i++) {
        pq[i] = pq[i + 1];
    }
    
    size--;
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    
    printf("Priority Queue Elements (Value, Priority): ");
    for (int i = 0; i <= size; i++) {
        printf("(%d, %d) ", pq[i].value, pq[i].priority);
    }
    printf("\n");
}

int main() {
    enqueue(10, 2); 
    enqueue(20, 4);
    enqueue(30, 1);
    enqueue(40, 5);
    display();

    dequeue();
    display();

    enqueue(50, 4);
    display();

    dequeue();
    display();

    dequeue();
    display();
    printf("Program Made BY : Aadarsan Dahal\n");
 
    getch();
    return 0;
}

