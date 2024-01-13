#include <stdio.h>

void isArmstrong(int x); // function prototype

int main(void)
{
    int number;
    printf("enter a number please: ");
    scanf("%d", &number);
    isArmstrong(number);
    return 0;
}

void isArmstrong(int x)
{
    int a, b, digit, sum = 0;
    int original = x;
    printf("How many digits number has: ");
    scanf("%d", &digit);

    for (int i = 1; i <= digit; ++i)
    {
        a = (original % 10);
        b = a * a * a;
        sum += b;
        original /= 10;
    }

    if (sum == x)
    {
        printf("it is Armstrong");
    }
    else
    {
        printf("it is not Armstrong!!!");
    }
}