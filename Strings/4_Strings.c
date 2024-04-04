#include <stdio.h>

int main(void)
{

    int i = 0;
    char greetings[13] = "Hello World!"; // otomtaık \0 ekler o string cunku charda eklemez
    while (*(greetings + i) != '\0')
    {
        printf("%c", greetings[i]);
        ++i;
    }

    return 0;
}