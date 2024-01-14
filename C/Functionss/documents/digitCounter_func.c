#include <stdio.h>

int countDigit(int number); // function prototype

int main(void)
{
    int number, counter;
    printf("Enter a number to count digits: ");
    scanf("%d", &number);

    printf("Your number have %d digits", countDigit(number));

    return 0;
}

// function definiton
int countDigit(int number)
{
    int counter = 0, original, digit;
    original = number;
    while (original != 0)
    {

        original /= 10;
        ++counter;
    }

    return counter;
}