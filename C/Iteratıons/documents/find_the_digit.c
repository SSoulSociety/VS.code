//Write a C program to count number of digits and sum of digits entered by user
#include <stdio.h> // for example 312-----> 3 digit and sum of numbers 3+2+1 = 6

int main(void) 
{
    int number, sum = 0, counter = 0;
    printf("Enter a number please:");
    scanf("%d" , &number);

    int temporary = number;

    while(temporary != 0)
    {
    int digit = temporary % 10;
    temporary /= 10;
    sum += digit;
    ++counter;
    }

    printf("Digits of your number is: %d\n " , counter);
    printf("Sum of your digits is: %d" ,sum);

    return 0;
}