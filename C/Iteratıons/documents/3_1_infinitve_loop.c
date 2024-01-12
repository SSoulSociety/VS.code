#include <stdio.h>

int main(void)
{
    int number, sum = 0;

    for (;;) /*Infinite loop*/
    {
        printf("Enter a number: <press -1 to exit> ");
        scanf("%d", &number);

        if (number == -1)
        {
            break;
            ;
        }
        else
        {

            sum = sum + number;
        }
    }
    printf("%d", sum);
    return 0;
}