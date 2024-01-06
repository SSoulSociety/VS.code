#include <stdio.h>
// calculate the factorail of numbers which given by user.
int main(void) 
{

    int number;
    int factorail = 1;

    printf("Enter a number please: ");
    scanf("%d" , &number);
    
    if(number == 0) 
    {
        // printf'i en sona koyup ortak tek bir tane nasıl yaparım? yapınca 2.kosul hata veriyo
        printf("Factorail is: %d" , factorail); 
    }
    else if(number < 0) 
    {
        printf("Wrong value, please enter a positive integer! ");
    }
    else 
    {
        while (number > 0) {
            factorail *= number;
            number--;
        }
        printf("Factorail is: %d" , factorail);
    }

    return 0;
}