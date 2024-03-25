/*
•The compiler does not differentiate between a function that receives a pointer
and one that receives a one-dimensional array
•The function must “know” when it’s receiving an array versus a single variable
*/

// Buble Sort Using Pass-by-Reference
#include <stdio.h>

void bubleSort(int *array, int size);
void swap(int *a, int *b);

int main(void)
{
    int array[10] = {1, 5, 13, 213, 126, 20, 0, 77, 912, 2301};
    printf("Original array: \n");
    for (int i = 0; i < 10; i++)
        printf("%d ", array[i]);
    puts("");

    bubleSort(array, 10);

    printf("Sorted array: \n");
    for (int i = 0; i < 10; i++)
        printf("%d ", array[i]);
    puts("");

    return 0;
}

void swap(int *a, int *b) // A parameter of the form int b[] is converted to int *b they are interchangeable
{
    int hold = *a;
    *a = *b;
    *b = hold;
}

void bubleSort(int *array, int size)
{
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10 - 1; ++j)
        {
            if (*(array + j) > *(array + j + 1)) // array = poiter offset notation
            {
                swap(array + j, array + j + 1);
            }
        }
    }
}
