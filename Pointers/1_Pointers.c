/* 
-We use pointers for:
-pass by reference
-pass functions between functions
-manipualte strings and arrays
-dynamic data structers 
*/

#include <stdio.h>
int main(void)
{
    int *countPtr, count; // * does not affect the second varaiables
    // countPtr is a pointer to an integer
    // '*' indicates that variable is a pointer
    // Referencing a value through a pointer is called indirection or dereferenicng operator

    int *examplePtr = NULL; // null means 0 or nothing

    int y = 5;
    int *yPtr = &y;
    printf("lets print *yPtr = %d", *yPtr);

    return 0;
}