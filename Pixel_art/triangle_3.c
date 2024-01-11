#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int a = 1; a <= 5; ++a)
    {
        for (int b = 5; b >= a; --b)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}