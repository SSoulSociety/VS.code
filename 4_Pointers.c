// Cube a variable using pass-by-reference with a pointer argument.
#include <stdio.h>
void cubeByReference(int *nPtr); // prototype

int main(void)
{
    int number = 5;
    printf("The original value of number is %d", number);
    cubeByReference(&number); // pass address of number to cubeByReference
    printf("\nThe new value of number is %d\n", number);
    
    // what if I do one more time
    cubeByReference(&number);
    printf("\nThe new new new value of number is %d\n", number);

    return 0;
}
// calculate cube of *nPtr; actually modifies number in main
void cubeByReference(int *nPtr)
{
    *nPtr = (*nPtr) * (*nPtr) * (*nPtr);
}
/*
•pass by value olan fonksıyonda fonksıyondakı local bi kopyası olusup işlem yapılıyorken pass by reference
yanı pointerla yaptıgımız fonksıyon dırekt olarak maindeki variableyi degiştiriyor

•A function receiving an address must use a pointer parameter
void cubeByReference(int *nPtr)

•It’s not necessary to include pointer names in function prototype
•They’re ignored by the compiler
•But it’s good practice to include them for documentation purposes
*/
