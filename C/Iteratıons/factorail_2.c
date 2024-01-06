// factorail by using (for)
#include <stdio.h>
int main(void) 
{

    int number, factorail=1;
    printf("Enter a number please: ");
    scanf("%d" , &number);

    if (number == 0) 
    {
    factorail = 1;
    printf("factorail is: %d" , factorail);
    }
    else if (number < 0) 
    {
    printf("Wrong value, enter a positive integer please!");
    }
    else 
    {
        for(; number>0; number--) 
        {
            factorail = factorail * number;

        }
         printf("factorail is: %d" , factorail);
    }
    

    return 0;
}