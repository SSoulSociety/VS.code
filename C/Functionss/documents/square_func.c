#include <stdio.h>
int square(int number); // fuction prototype

int main(void)
{
    for(int x = 1;x <= 10; ++x)
    {
        printf("%d\n", square(x)); // fuction call
    }
    return 0;
}
int square(int number) // number is a copy of the function's argument
{
    return number * number;  // returns square of number as an int
}


    
