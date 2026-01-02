#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create a linked list with random values
void create_random_list(struct Node** head, int n) {
    struct Node *newNode, *temp;
    
    // Seed the random number generator with current time
    srand(time(0));

    if (n <= 0) {
        *head = NULL;
        return;
    }

    for (int i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        // Generate random number between 1 and 100
        newNode->data = (rand() % 100) + 1;
        newNode->next = NULL;
        

        if (*head == NULL) {
            *head = newNode;
            temp = *head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }

    
    }
}

void displayList(struct Node* head) {
    struct Node* temp = head;
    printf("Random Linked List: ");
    while (temp != NULL) {
        printf("[%d] -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int n;

    printf("Enter the size of the list: ");
    scanf("%d", &n);

    create_random_list(&head, n);

    displayList(head);

    struct Node* curr = head;
    int index = 0;

    while (curr != NULL && index < 2) {
        curr = curr->next;
        index++;
         
    }

 struct Node *Node  = (struct Node*)malloc(sizeof(struct Node));        // Generate random number between 1 and 100
        Node->data =1234;
        Node->next = NULL;
        Node->next=curr->next;
        curr->next=Node;
//    curr->data = 696969;
    displayList(head);




    return 0;
}