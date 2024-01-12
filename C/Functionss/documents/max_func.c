#include <stdio.h>

int max(int num1, int num2, int num3); //function prototype

int main(void)
{
    int num1, num2, num3;
    printf("Enter three number pls: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Max number is: %d\n", max(num1, num2, num3));

    return 0;
}
// function defintion
int max(int num1, int num2, int num3)
{
    int max;

    if (num1 > num2 && num1 > num3)
    {
        max = num1;
    }
    else if (num2 > num3 && num2 > num1)
    {
        max = num2;
    }
    else
    {
        max = num3;
    }
    return max;
}
