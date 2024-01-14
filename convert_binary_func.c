#include <stdio.h>
void convertBin(int number); // function prototype

int main(void)
{
    int number;

    printf("Enter a number to convert binary: ");
    scanf("%d", &number);

    convertBin(number);

    return 0;
}
void convertBin(int number) // function defintion
{
    int original = number;
    int remain, sum = 1;
    sum = (original % 2);
    original /= 2;

    while (original != 0)
    {
        remain = (original % 2);
        if (remain == 0)
        {
            sum = (sum * 10);
        }
        else
        {
            sum = (sum * 10) + 1;
        }
        original /= 2;
    }
    printf("Binary representation: %d\n", sum);
}