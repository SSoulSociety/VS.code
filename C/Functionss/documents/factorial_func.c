#include <stdio.h>
int factorial(int number);// function prototype

int main(void){
int number;

printf("enter a number:");
scanf("%d" ,&number);
printf("Factorail is: %d", factorial(number));

    return 0;
}
// function definition
int factorial(int number)
{
    int factorial = 1;

    for(;number >=1; --number)
    {
        factorial *= number;
    }
    
    return factorial;
}
