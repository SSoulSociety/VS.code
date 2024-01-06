#include <stdio.h>

int main(void) 
{
    int sumeven=0;
    int sumodd=0;

    for(int i = 1 ; i < 101; ++i) 
    {
        if(i % 2 == 0) 
        {
        sumeven = sumeven + i ;
        }
        else 
        {
        sumodd = sumodd + i;
        }
    }
    printf("Sum of odd numbers %d \n" , sumodd  );
    printf("Sum of even numbers %d" , sumeven);

    return 0;
}