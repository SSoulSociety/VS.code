#include <stdio.h>

int main(void)
{
    int operation,result,num1,num2;

    printf(" Press 1 to add\n Press 2 to substract\n Press 3 to multiply\n Press 4 to divide\n");
    scanf("%d" , &operation);
    printf("Enter 2 numbers:" );
    scanf("%d %d" , &num1 , &num2);

    switch (operation)
    {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;    
        case 3:
            result = num1 * num2;
            break;
        case 4:
            result = num1 / num2;
        default:
            printf("Invalid value !!!");
    }
    printf("Result is: %d", result);

    return 0;
}