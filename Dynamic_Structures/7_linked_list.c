// Lineked list: inserting a node at nth positıon
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void insert(int data, int n); // prototype
void printList();

int main(void)
{
    head = NULL;  // empty list
    insert(2, 1); // list: 2
    insert(5, 2); // list: 2 5
    insert(3, 1); // list : 3 2 5
    insert(9, 2); // list : 3 9 2 5

    printList();
    return 0;
}

void insert(int data, int n)
{
    struct node *temp1 = malloc(sizeof(struct node));

    temp1->data = data;
    temp1->next = NULL;

    if (n == 1)
    {
        temp1->next = head;
        head = temp1;
        return; // Exit the function after the inserting the node at the head position
    }

    struct node *temp2 = head;
    for (int i = 0; i < n - 2; ++i)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void printList()
{
    struct node *temp = head; // Start from the head of the list

    while (temp != NULL)
    {
        printf("%d ", temp->data); // Print the data of the current node
        temp = temp->next;         // Move to the next node
    }
    printf("\n");
}
