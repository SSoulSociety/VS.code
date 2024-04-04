#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char alphabet[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    
    printf("%d\n", strlen(alphabet)); // stringin uzunluğunu verir 26 harf var
    printf("%d\n", sizeof(alphabet)); // bellekde dolu olan boyutu verir 27 cunku '\0' da var
    return 0;
}