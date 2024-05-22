#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int *A = malloc(size * sizeof(int)); // Dynamicly allocated array

    for (int i = 0; i < size; ++i)
    {
        A[i] = i + 1;
    }

    int *B = realloc(A, 2 * size * sizeof(int)); // if we have space in previous block it extends if not it creates another block
    printf("Previous block adress = %d, new adress = %d\n", A, B);

    for (int i = 0; i < size; ++i)
    {

        printf("%d ", A[i]);
    }

    return 0;
}