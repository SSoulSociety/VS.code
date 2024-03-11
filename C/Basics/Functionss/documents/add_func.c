#include <stdio.h>

int add(int num1, int num2); // fucntion prototype

int main(void)
{
    int a, b;
    printf("Please enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition of these number: %d", add(a, b));

    return 0;
}

// fuction definition
int add(int num1, int num2)
{

    return num1 + num2;
}