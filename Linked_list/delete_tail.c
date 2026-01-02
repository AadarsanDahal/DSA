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


  struct Node *temp;
  temp = head;
    while(temp->next!=NULL){
        temp=temp->next;}
  
  
  
    printf("Deleting tail node with value: %d\n", temp->data);
    printf("Deleting tail node with value: %d\n", head->data);


    
if (head->next == NULL){
    free(temp);
    head = NULL;
}

    // free(temp);
    displayList(head);



    return 0;
}