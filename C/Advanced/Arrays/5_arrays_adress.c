/*array, &array[0] and &array all of them are the same thing */
/*using the %p conversion specification for printing addresses*/
#include <stdio.h>

int main(void)
{
    char array[5] = ""; // define a char array of size 5
    printf(" array = %p\n&array[0] = %p\n &array = %p\n", array, &array[0], &array);
    // in output you gonna see their adress' are the same
    return 0;
}