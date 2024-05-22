#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int* A = malloc(size * sizeof(int)); // Dynamicly allocated array
    
    for(int i = 0; i < size; ++i){
       A[i] = i + 1;
    }

free(A); // it deallocate the memory so it's not ours after that changing the value which did not allocated to us may be dangerous you can break anything
A = NULL; // after free, be sure to NULL5


    for(int i= 0; i < size; ++i){
    
        printf("%d " , A[i]);
    }

    return 0;
}