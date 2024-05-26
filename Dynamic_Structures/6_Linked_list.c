// Lineked list: inserting a node at beginnig
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
        printf("Which number u wanna add to the list?:\n ");
        scanf("%d", &c);
        insert(c);
        printList();
    }
    return 0;
}

void insert(int x)
{

    struct node *temp = malloc(sizeof(struct node)); // neden malloc kulalnıyoruz?
    if (temp == NULL)
    {
        printf("memory cannot be allocated!");  
    }
    else
    {
        temp->data = x;
        temp->next = head;
        head = temp; // bu satırı analamdım
    }
}

void printList()
{
    struct node *temp = head; // bruda neden malloc kulanmadık??
    printf("List is: ");
    while (temp != NULL)
    {

        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n ");
}