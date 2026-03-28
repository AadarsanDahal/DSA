// b.	HashTable with Linear Probing
#include <stdio.h>
#include <conio.h>

#define SIZE 10
int hashArray[SIZE];

void init() {
    for(int i = 0; i < SIZE; i++) hashArray[i] = -1;
}

void insert(int key) {
    int index = key % SIZE;
    while(hashArray[index] != -1) {
        index = (index + 1) % SIZE;
    }
    hashArray[index] = key;
}

void display() {
    for(int i = 0; i < SIZE; i++)
        printf("Index %d: %s\n", i, (hashArray[i] == -1) ? "Empty" : "Value");
}

int main() {
    init();
    insert(12); insert(22); // Collision handling
    display();
    getch();
    return 0;
}
