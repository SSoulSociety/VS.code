#include <stdio.h>
#include <stdlib.h> //rand() comes from this header

int main(void)
{
    int value;
    int number = (rand() % 100) + 1;

    printf("Guess the number: 1-99 \n");

    do
    {
        scanf("%d", &value);

        if (value < number)
        {
            printf("go higher \n");
        }
        else if (value > number)
        {
            printf("go lower \n");
        }
        else
        {
            printf("You won \n");
        }
    } while (number != value);

    return 0;
}