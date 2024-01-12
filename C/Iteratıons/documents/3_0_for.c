// for iteration with counter contolled write all numbers 1 to 100
#include <stdio.h>

int main(void)
{
    for (int counter = 1; counter <= 100; counter++)
    {
        printf("%d \n", counter);
    }

    return 0;
}

/*
All of them are the same
• counter = counter + 1
• counter += 1
• ++counter
• counter++
*/