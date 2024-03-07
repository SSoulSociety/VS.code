#include <stdio.h>
#define SIZE 5 // maximum size of array
int main(void)
{
    int number, sum = 0;
    int s[SIZE] = {0};
    for (int i = 0; i < 5; ++i)
    {
        printf("\nEnter a number please: ");
        scanf("%d", &s[i]);
    }
    for (int i = 0; i < 5; ++i)
    {
        sum = s[i] + sum;
    }
    printf("\nAvarage of these number is: %d", sum / 5);
    return 0;
}