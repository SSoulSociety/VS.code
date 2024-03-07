#include <stdio.h>

int main(void)
{

    int number;
    int i = 2;
    int prime;

    printf("Enter a number greater than 2 pls: ");
    scanf("%d", &number);

    while (i < number)
    {

        if (number % i == 0)
        {
            prime = -1;
        }
        ++i;
    }

    if (number <= 2)
    {
        printf("Invalid number!!!");
    }
    else
    {
        if (prime == -1)
        {
            printf("Your number is not prime");
        }
        else
        {
            printf("Your number is prime");
        }
    }

    return 0;
}