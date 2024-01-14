// int, float, char are called scalars
// to receive an array my functions should contain array's parameter

// only in function block the element
#include <stdio.h>
#define SIZE 5

void modifyArray(int b[], int size);
void modifyElement(int k); // why dont we say []

int main(void)
{

    int a[SIZE] = {0, 1, 2, 3, 4};
    printf("the values of original array: \n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }

    modifyArray(a, SIZE);
    printf("\nThe values of the modified array are:\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }

    printf("\n\nThe value of a[3] is %d\n", a[3]);

    modifyElement(a[3]);
    // printf("Value in modifyElement is %d\n", a[3]); it gives 6!!
    printf("The value of a[3] is %d\n", a[3]);
}

void modifyArray(int b[], int size)
{
    for (int j = 0; j < size; ++j)
    {
        b[j] *= 2;
    }
}

void modifyElement(int k)
{
    k *= 2;
    printf("Value in modifyElement is %d\n", k);
}