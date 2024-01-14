#include <stdio.h>

long toBin(int a);

int main()
{
    long binary;
    int dec;

    printf(" Input any decimal number : ");
    scanf("%d",&dec);
    
    binary = toBin(dec);
    printf("\n The Binary value is : %ld\n\n",binary);

    return 0;
}

long toBin(int a){
    
    long binary=0;
    int remainder; 
    int f = 1;

    while(a != 0)
    {
         remainder = a % 2;
         binary = binary + remainder * f;
         f = f * 10;
         a = a / 2;
    }
    return binary;
}