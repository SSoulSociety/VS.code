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
    int remain, binary ;
    printf("Binary representation: ");

    while (original != 0)
    {
        remain = (original % 2);
        if (remain == 0)
        {
            printf("%d" , 1);
        }
        else
        {
            printf("%d" , 0);
        }
        original /= 2;
    }
    
}