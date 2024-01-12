#include <stdio.h>
#define SIZE 5 // maximum size of array

int main(void)
{
    int s[SIZE] = {0};
    printf("%s%8s\n", "Element", "Value");
    for (int i = 0; i < 5; ++i)
    {
        s[i] = 2 + (2 * i);

        printf("%7d%8d\n", i, s[i]);
    }

    return 0;
}