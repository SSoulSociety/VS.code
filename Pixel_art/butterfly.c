#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("*");
        }
        int b = 10 - 2 * i;
        for (int a = 1; a <= b; ++a)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 5; i > 0; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}