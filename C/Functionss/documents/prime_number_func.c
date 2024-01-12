#include <stdio.h>
int prime(int number); // function prototype

int main(void)
{
    int number;
    printf("Enter a positive number pls:");
    scanf("%d",&number);
    
    if(prime(number) == 0)
    {
        printf("This number is not a prime number");
    }
    else{
        printf("This number is a prime number");
    }
}
// function defintion
int prime(int number)
{

    for(int i=2; number > i; ++i)
    {
        if(number % i == 0)
        {
        return 0;
        }
        
    }

    return 1;
}