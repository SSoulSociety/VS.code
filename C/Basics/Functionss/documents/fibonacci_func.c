#include <stdio.h>

unsigned long long int fibonacci(int x); // fucntion prototype

int main(void)
{
    for (int number = 0; number <= 10; ++number)
    {
        printf("fibonacci (%d) = %llu\n", number, fibonacci(number));
    }
    printf("fibonacci(10) = %llu\n", fibonacci(10));
    printf("fibonacci(20) = %llu\n", fibonacci(20));
    printf("fibonacci(30) = %llu\n", fibonacci(30));
    return 0;
}

unsigned long long int fibonacci(int x)
{
    if (x == 1 || x == 0)
    {
        return x;
    }
    else
    {
        return (fibonacci(x - 1) + fibonacci(x - 2));
    }
}