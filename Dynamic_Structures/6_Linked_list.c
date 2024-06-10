#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head; // Global pointer to the head of the list

void insert(int x); // Prototype 
void printList();   

int main(void) {
    head = NULL; // Initialize the list as empty

    int number, c;
    printf("How many numbers? ");
    scanf("%d", &number);

    for (int i = 0; i < number; ++i) {
        printf("Which number do you want to add to the list? ");
        scanf("%d", &c);
        insert(c);
        printList();
    }
    return 0;
}

void insert(int x) {
    struct node *temp = malloc(sizeof(struct node)); // Allocate memory for a new node
    if (temp == NULL) {
        printf("Memory cannot be allocated!\n"); // Handle memory allocation failure
    } else {
        temp->data = x;
        temp->next = head; // Point the new node to the current head
        head = temp;       // Update the head to the new node
    }
}

void printList() {
    struct node *temp = head; // Start from the head of the list
    printf("List is: ");
    while (temp != NULL) {
        printf("%d ", temp->data); // Print the data of each node
        temp = temp->next;         // Move to the next node
    }
    printf("\n"); 
}
