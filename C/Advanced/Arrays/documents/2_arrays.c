// Initializing the elements of an array with an initializer list
#include <stdio.h>

int main(void)
{
    int n[5] = {213, 23, 0, 90, -7};

    printf("%s%8s\n", "Element", "Value");

    for (int i = 0; i < 5; ++i)
    {
        printf("%7d%8d\n", i, n[i]);
    }

    return 0;
}