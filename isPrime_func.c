#include <stdio.h>

void isPrime(int x) 
{

    for(int i = 2; i < x; ++i)
    {
        if(x % i == 0)
        {
            printf("This number is prime.");
        }
        else
        {
            printf("This number is not prime.");
        }
    }

}

int main(void)
{
    int number;
    printf("Enter a number greater than 2 pls: ");
    if(number > 2)
    {
        printf("invalid value!!!");
    }
    else
    {
    scanf("%d" , &number);
    printf(isPrime(number));
    }  



    return 0;
}