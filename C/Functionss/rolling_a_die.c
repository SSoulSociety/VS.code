#include <stdio.h>
#include <stdlib.h> //rand() comes from this header

int main(void) 
{
    for(int i= 1; i<=10; i++) 
    {
        printf("%d \n" , 1 + (rand() % 6));
        puts(""); /*puts comes from stdlib.h and it adds \n to code*/
    }
    
    return 0;
}