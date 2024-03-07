#include <stdio.h>

int main(void)
{
    int n[5]; // n is an array of five integers
    for (int i = 0; i < 5; ++i)
    {
        n[i] = i + 1; // set element at location i to 0 (index 0 = i)
    }
    printf("%s%8s\n", "Element", "Value"); // output contents of array n in tabular format
    for (int i = 0; i < 5; ++i)
    {
        printf("%7d%8d\n", i, n[i]);
    }
    return 0;
}