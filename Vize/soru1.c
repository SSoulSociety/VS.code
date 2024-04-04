#include <stdio.h>

int main(void)
{
    char array[27] = "algorithms and programming";
    char* aPtr;
    aPtr = array;
    while (*aPtr != '\0')
    {
        aPtr++;
        printf("%c", *aPtr);
        aPtr++;
    }

    return 0;
}