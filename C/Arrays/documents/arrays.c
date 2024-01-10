#include <stdio.h>

int main(void)
{
    int number[6];
    int sum = 0;

    for(int i = 0; i < 5; ++i)
    {
        printf("Enter a number: ");
        scanf("%d" , &number[i]);
    } 

    for(int i = 0; i <5; ++i)
    {  
    sum += number[i];
    }
    printf("Avarage of your numbers is: %d", sum / 5);

return 0; 
}