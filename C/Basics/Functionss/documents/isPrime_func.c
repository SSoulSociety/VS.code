#include <stdio.h>

int isPrime(int x); // function prototype

int main(void)
{
    int number;
    int prime;
    printf("Enter a number greater than 2 pls: ");
    scanf("%d", &number);

    if (number < 2)
    {
        printf("invalid value!!!");
    }
    else
    {
        printf("%d\n(0 means not prime 1 means prime)", isPrime(number));
    }

    return 0;
}
// fuction definiton
int isPrime(int x)
{
    int prime;
    for (int i = 2; i < x; ++i)
    {
        if (x % i == 0)
        {
            prime = 0;
        }
        else
        {
            prime = 1;
        }
    }
    return prime;
}