#include <stdio.h>
#include <string.h>

int main(void)
{
    char alphabet[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char arr1[50] = {"Hello "}; //  Ensure enough space for concatenation
    char arr2[] = {"World!"};

    printf("\n%d\n", strlen(alphabet)); // stringin uzunluğunu verir 26 harf var '\0' not included
    printf("%d\n\n", sizeof(alphabet)); // bellekde dolu olan boyutu verir 27 cunku '\0' da var
    
    strcmp(arr1, arr2); // it compares the strings
    printf("%d\n\n" , strcmp(arr1, arr2));

    strcat(arr1, arr2); // oncatenate arr2 onto the end of arr1
    printf("%s\n\n", arr1); // -1 means lower 0 means equal 1 means bigger

    strcpy(arr1, arr2); // Copy arr2 into arr1
    printf("arr1 = %s\n\n", arr1);


    return 0;
}