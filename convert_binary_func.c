#include <stdio.h>
void convertBin(int number); // function prototype

int main(void)
{
    int number;

    printf("Enter a number to convert binary: ");
    scanf("%d", &number);

    void convertBin(int number);

    return 0;
}
void convertBin(int number) // function defintion
{
    int original = number;
    int x, sum = 1;
    sum = (original % 2);
    original /= 2;

    while (original != 0)
    {
       x = (original % 2);
       if (x == 0)
       {
        sum = (sum * 10);
       }
       else
       {    
        sum = (sum * 10) + 1;
       }
        original /= 2;
    }
    printf("%d" , sum);
}