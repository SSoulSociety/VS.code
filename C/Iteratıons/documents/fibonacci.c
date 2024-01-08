#include <stdio.h>

int main()
{

    int number1 = 1;
    int number2 = 1; 
    int sum;
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);
    
    printf("%d - %d " , number1 , number2);
    
    for(int i = 1 ; i <= number-2 ; ++i ) 
    {
    sum = number1 + number2;
    printf("- %d ", sum);
    number1 = number2;
    number2 = sum;
    }
   
return 0;   
}