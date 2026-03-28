// 1.	singly Linked List
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Define the Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to insert a new node at the beginning
void insertAtHead(struct Node** head, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode->data = val;
    newNode->next = *head;

    *head = newNode;
}

int main() {
    struct Node* head = NULL;

    insertAtHead(&head, 30);
    insertAtHead(&head, 20);
    insertAtHead(&head, 10);

    printf("Linked List: ");
    printList(head);

    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("\n\nProgram Made BY : Aadarsan Dahal\n");

    getch();
    return 0;
}
