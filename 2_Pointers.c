#include <stdio.h>

int main(void)
{
    int a = 7;
    int *aPtr = &a;
    // %p prints adres as a hexadecimel integer
    printf("Address of 'a' is %p\nValue of aPtr is %p\n", &a, aPtr);
    printf("\nValue of 'a' is %d\nValue of *aPtr is %d\n\n", a, *aPtr);
    printf("Showing that * and & are complements of each other\n");
    printf("&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);
    // aPtr coresspond to adress of 'a' while *aPtr correspond to value of 'a'
    
    return 0;
}
    