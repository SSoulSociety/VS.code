#include <stdio.h>
unsigned long long int factorial(int number); // function prototype //unsigned long long for really big number like 1321654841546

int main(void)
{
    for (int i = 1; i <= 21; ++i)
    {
        printf("%d! = %llu\n", i, factorial(i));
    }

    return 0;
}
// function defintion
unsigned long long int factorial(int number)
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}s