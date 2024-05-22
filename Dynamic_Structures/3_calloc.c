#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int *A = calloc(size, sizeof(int)); // Dynamicly allocated array

    for (int i = 0; i < size; ++i)
    {
        A[i] = i + 1;
    }

    for (int i = 0; i < size; ++i)
    {

        printf("%d ", A[i]);
    }

    return 0;
}

// The differences betweeen malloc
// 1) size , sizeof(int)
// 2) and calloc automathicly initialize 0 to all elemtns if we did not  meake any initializion