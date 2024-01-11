#include <stdio.h>

int main(void)
{
    int i = 1;
    for (; i <= 5; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("*");
        }
        int k = 10 - (2 * i);
        for (int l = 1; l <= k; ++l)
        {
            printf(" ");
        }
        for (int m = 1; m <= i; ++m)
        {
            printf("*");
        }
        printf("\n");
    }
    int a = 5;
    
    for (; a >= 1; --a)
    {
        for (int b = 1; b <= a; ++b)
        {
            printf("*");
        }
        int c = 10-(a*2);
        for(int d = 1; d <= c; ++d)
        {
            printf(" ");
        }
        for(int e = 1; e <= a; ++e)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}