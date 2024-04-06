#include <stdio.h>
// girilen metinde kaç kelıme var bulma

int wordCount(char *aPtr);

int main(void)
{

    char message[100];
    puts("Enter your sentence: ");
    gets(message);

    printf("%d", wordCount(message));

    return 0;
}
int wordCount(char *aPtr)
{
    int i = 0;
    int words = 0;

    while (aPtr[i] != '\0')
    {

        if (aPtr[i] == ' ')
        {
            ++words;
        }
        ++i;
    }

    return words+1; 
}