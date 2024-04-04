#include <stdio.h>
#include <ctype.h>

int isAlpha(int n); // protoype
int main(void)
{
    char x;

    printf("Enter your char to find is it upper or loowercase\n");
    scanf(" %c", &x);

    if (isAlpha(x) == 1)
    {
        printf("It is a uppercase.\n");
    }
    else if (isAlpha(x) == 0)
    {
        printf("It is a lowercase\n");
    }
    else
    {
        printf("it is not a letter !!");
    }

    return 0;
}

int isAlpha(int n)
{

    if (n <= 'Z' && n >= 'A')
    {
        return 1;
    }
    else if (n <= 'z' && n >= 'a')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}