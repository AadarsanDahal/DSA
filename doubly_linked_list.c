// 2.	Double Linked List
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Define the Node structure
struct node {
    int data;
    struct node* link;
};

//The Reverse Function (from your image)
struct node* reverse(struct node *head) {
    struct node *prev = NULL;
    struct node *next = NULL;
    
    while(head != NULL) {
        next = head->link;  
        head->link = prev;  
        prev = head;        
        head = next;        
    }
    head = prev;            
    return head;
}

// Helper function to create a new node
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = NULL;
    return newNode;
}

int main() {
    //Create a manual list: 10 -> 20 -> 30
    struct node *head = createNode(10);
    head->link = createNode(20);
    head->link->link = createNode(30);

    printf("Original List: ");
    struct node *ptr = head;
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    //Reverse the list
    head = reverse(head);
    
    printf("\nReversed List: ");
    ptr = head;
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    while (head != NULL) {
        struct node* temp = head;
        head = head->link;
        free(temp);
    }
    printf("\n\nProgram Made BY : Aadarsan Dahal\n");
    getch();
    return 0;
}

