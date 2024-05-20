#include <stdio.h>
// buble_sort
void printArray(int *array , int size); 
void bubleSort(int *aPtr, int size);
void swap(int *aPtr, int *bPtr);

int main(void)
{
    int array[11] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    printf("Original array\n");
    printArray(array, 11);

    bubleSort(array, 11);

    printf("\nSorted array\n");
    printArray(array, 11);
    return 0;
}

void bubleSort(int *array, int size)
{
    for (int j = 0; j < 11; ++j)
    {
        for (int k = 0; k < 10; ++k)
        {
            if (*(array + k) > *(array + k + 1))
            {
                swap(array + k, array + k + 1); //why we dont use * you know it remember becasue it'a array
            }
        }
    }
}

void swap(int *aPtr, int *bPtr)
{
    int hold = *aPtr;
    *aPtr = *bPtr;
    *bPtr = hold;
}

void printArray(int *array , int size)
{
    for (int i = 0; i <= 10; ++i)
    {
        printf("%d ", array[i]);
    }
}
 