// Girilen Metnin Karakter Sayısını Bulma
#include <stdio.h>

int countChar(char *aPtr); // prototype

int main(void)
{
    char message[100];
    puts("Enter your sentence: ");
    fgets(message, 99, stdin);

    printf("your sentence have %d charachter" , countChar(message));

    return 0;
}

int countChar(char* aPtr)
{
    int i = 0;
    while (*aPtr != '\0')
    {
        ++aPtr;
        ++i;
           
    }

    return i;
}