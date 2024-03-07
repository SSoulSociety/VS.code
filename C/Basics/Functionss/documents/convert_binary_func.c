#include <stdio.h>

long toBinary(int a);

int main()
{
    long binary;
    int decimal;

    printf(" Input any decimal number : ");
    scanf("%d",&decimal);
    
    binary = toBinary(decimal);
    printf("\n The Binary value is : %ld\n\n",binary);

    return 0;
}

long toBinary(int decimal){
    
    long binary=0;
    int remainder; 
    int f = 1;

    while(decimal != 0)
    {
         remainder = decimal % 2;
         binary = binary + remainder * f;
         f = f * 10;
         decimal = decimal / 2;
    }
    return binary;
}