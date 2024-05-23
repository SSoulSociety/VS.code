// Lineked list: inserting a noed at beginnig
#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

struct node *head;

void insert(int x);
void printList();

int main(void)
{
    head = NULL;

    int number, c;
    printf("How many number?: ");
    scanf("%d", &number);

    for (int i = 0; i < number; ++i)
    {
        print("Which number u wanna add to the list?:\n ");
        scanf("%d", &c);
        insert(c);
        printList();
    }
    return 0;
}

void insert(int x)
{

    struct node *temp = malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void printList()
{
    struct node *temp = malloc(sizeof(struct node));
    printf("List is: ");
    while (temp != NULL)
    {
        printf("List is: ");
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n ");
}