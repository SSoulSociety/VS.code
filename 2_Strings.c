#include <stdio.h>
#include <ctype.h>

//int isDigit(int a); kendin yaz bide

int main(void)
{
    int x;

    printf("Enter your argument to find if it is a digit or not: ");
    scanf("%d", &x);

    if (isdigit(x))
    {
        printf("It is a digit.\n");
    }
    else
    {
        printf("It is not a digit.\n");
    }

    return 0;
}