// Cube a variable using pass-by-reference with a pointer argument.
#include <stdio.h>
void cubeByReference(int *nPtr); // prototype

int main(void)
{
    int number = 5;
    printf("The original value of number is %d", number);
    cubeByReference(&number); // pass address of number to cubeByReference
    printf("\nThe new value of number is %d\n", number);
    
    return 0;
}
// calculate cube of *nPtr; actually modifies number in main
void cubeByReference(int *nPtr)
{
    *nPtr = (*nPtr) * (*nPtr) * (*nPtr);
}

/*
A function receiving an address must use a pointer parameter
void cubeByReference(int *nPtr)
*/
