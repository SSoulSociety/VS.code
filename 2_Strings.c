#include <stdio.h>
#include <ctype.h>

int isDigit(int n); // protoype
int main(void)
{
    char x;

    printf("Enter your argument to find if it is a digit or not: ");
    scanf("%c", &x);

    if (isDigit(x))
    {
        printf("It is a digit.\n");
    }
    else
    {
        printf("It is not a digit.\n");
    }

    return 0;
}

int isDigit(int n)
{

    if (n <= '9' && n >= '0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}