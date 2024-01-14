// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 10

int main(void)
{
    int array[SIZE] = {1, 7, 2, 6, 21, 32, 22, 44, 7, 0};

    puts("Original order of array");
    for (int i = 0; i < SIZE; ++i)
    {
        printf("%4d", array[i]);
    }
    printf("\n\n Sorted version of array: \n");

    for (int pass = 1; pass < SIZE; ++pass)
    {
        for (int i = 0; i < SIZE - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;
            }
        }
    }
    for (int i = 0; i < SIZE; ++i)
    {
        printf("%4d", array[i]);
    }

    return 0;
}