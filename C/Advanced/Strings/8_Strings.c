#include <stdio.h>
// puts and gets functıons
int main(void){

char message[100];

puts("Enter your sentenece: "),
gets(message);

puts("Your sentence is: ");
puts(message);

    return 0;
}