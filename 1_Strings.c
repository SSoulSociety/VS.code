#include <stdio.h>
/*
• Every string must end with the null character ('\0')
• Srings are arrays at the same time they are a pointer to their first element
*/

int main(void)
{
    // two different ways to initialize strings

    char color1[5] = "blue";         // modifiable
    const char *colorPtr = "blue"; // not modifiable
    printf("%s", colorPtr);

    // The color array definition also can be written as
    char color2[5] = {'b', 'l', 'u', 'e', '\0'}; // do not forget to '\0' while entering the size of array
    return 0;
}
