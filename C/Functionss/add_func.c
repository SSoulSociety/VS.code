#include <stdio.h>

int add(int num1, int num2) {

    return  num1 + num2;
}

int main(void)
{
    int num1,num2;
    printf("Pls enter 2 number: ");
    scanf("%d %d" ,&num1 , &num2);

    printf("Addition of these number: %d" , add(num1 , num2));

    return 0;
}