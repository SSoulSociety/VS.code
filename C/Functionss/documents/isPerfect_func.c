#include <stdio.h>

// Function prototype
int isPerfect(int x);

int main(void)
{
    int number;
    
    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is perfect
    if (isPerfect(number))
    {
        printf("%d is a perfect number.\n", number);
    }
    else
    {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}

// Function to check if a number is perfect
int isPerfect(int x)
{
    int sum = 0;

    // Find the sum of proper divisors
    for (int i = 1; i <= x / 2; ++i)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }

    // Check if the sum equals the original number
    return (sum == x);
}
