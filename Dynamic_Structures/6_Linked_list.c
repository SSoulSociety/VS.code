#include <stdio.h>
#include <stdlib.h>

int main(void)

{

    struct node
    {
        int data;
        struct node *link;
    };

    struct node *A = NULL; // Empty list

    struct node *temp = malloc(sizeof(struct node));

    temp->data = 2;
    temp->link = NULL;
    A = temp;

    struct node *temp = malloc(sizeof(struct node));
    temp->data = 4;
    temp->link = NULL;

    // generic logit to reach end of the list
    struct node *temp1 = A; // we don't modify A because if we lost it we lost the head node we lost the whole list
    while (temp1->link != NULL)
    {
        temp1 = temp1->link;
        printff("%d", temp->data);
    }

    temp1->link = temp;
    return 0;
}