#include <stdio.h>

void staticArrayInit(void);    // Fuction prototype
void automaticArrayIniy(void); // Fuction prototype

int main(void)
{
    puts("First call to each function");
    staticArrayInit();
    automaticArrayIniy();

    puts("Second call to each function");
    staticArrayInit();
    automaticArrayIniy();

    return 0;
}

void staticArrayInit(void)
{
    static int array1[3] = {1,2,3};
    for (int i = 0; i <= 2; ++i)
    {
        printf("array[%d] = %d,", i, array1[i]);
    }
}

void automaticArrayIniy(void)
{
    int array2[3] = {1,2,3};
    for (int i = 0; i <= 2; ++i)
    {
        printf("array2[%d] = %d", i, array2[i]);
    }
}
