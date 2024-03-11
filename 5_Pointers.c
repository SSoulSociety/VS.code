/*Passing Arguments to Functions by Reference
•The compiler does not differentiate between a function that receives a pointer
and one that receives a one-dimensional array
•The function must “know” when it’s receiving an array versus. a single variable
passed by reference
*/

// Buble Sort Using Pass-by-Reference
#include <stdio.h>
#define SIZE 10
void bubleSort(int *array, int size);
void swap(int *a, int *b);

int main(void)
{
    int array[SIZE] = {1, 5, 13, 213, 126, 20, 0, 77, 912, 2301};
    printf("Original array: \n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", array[i]);
    printf("\n");

    bubleSort(array, SIZE);

    printf("Sorted array: \n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", array[i]);
    printf("\n");

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
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE - 1; ++j)
        {
            if (*(array + j) > *(array + j + 1))
            {
                swap(array + j, array + j + 1);
            }
        }
    }
}
