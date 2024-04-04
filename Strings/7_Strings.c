#include <stdio.h>
// puts 
int main(void)
{

    char *messagePtr = "How are you?";
    char message[30] = "Nobody knows";

    // puts parametre oalarka adres alır !
    puts(messagePtr); 
    puts(message);

    return 0;
}