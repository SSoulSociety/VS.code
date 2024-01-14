#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void isPalindrome(int randomnumber[], int size); // prototype
int bubbleSort(int randomnumber[], int size);    // prototype

int main(void)
{
    srand(time(NULL));
    int randomnumber[SIZE];
    for (int i = 0; i < SIZE; ++i)
    {
        randomnumber[i] = (rand() % 100) + 200; // genarete random 100 numbers between 200-300
    }

    printf("Lets see the random number first\n");
    for (int i = 0; i < SIZE; ++i)
    {
        printf("%7d%7d\n", i, randomnumber[i]);
    }

    // sorting
    bubbleSort(randomnumber, SIZE);

    printf("\n lets see the sorted version of array\n");
    for (int i = 0; i < SIZE; ++i)
    {
        printf("%7d%7d\n", i, randomnumber[i]);
    }

    // Checking for is number palindromic
    printf("\n lets see the palindromic version of array");
    isPalindrome(randomnumber, SIZE);

    return 0;
}

int bubbleSort(int randomnumber[], int size)
{
    for (int pass = 1; pass < SIZE; ++pass)
    {
        for (int j = 0; j < SIZE - 1; ++j)
        {
            if (randomnumber[j] > randomnumber[j + 1])
            {
                int hold = randomnumber[j + 1];
                randomnumber[j + 1] = randomnumber[j];
                randomnumber[j] = hold;
            }
        }
    }
}

void isPalindrome(int randomnumber[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        int original = randomnumber[i];
        int reversed = 0;
        int temp = original;

        while (temp > 0)
        {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        puts("");
        if (reversed == original)
        {
            printf("%d is Palindrome\n", original);
        }
        else
        {
            printf("%d is not Palindrome\n", original);
        }
    }
}