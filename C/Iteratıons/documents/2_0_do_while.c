// do while iteration, its duty; even the condtion is false, statement works at least once.
#include <stdio.h>

int main(void) 
{
    
    int counter = 1;

    do 
    {
        printf("%d \n" , counter);
        counter++;

    } while (counter <= 5);

    return 0;
}