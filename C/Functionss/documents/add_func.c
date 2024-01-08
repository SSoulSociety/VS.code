#include <stdio.h>

int add(int num1, int num2) {

    return  num1 + num2;
}

int main(void)
{
    int a,b;
    printf("Pls enter 2 number: ");
    scanf("%d %d" ,&a , &b);

    printf("Addition of these number: %d" , add(a , b));

    return 0;
}