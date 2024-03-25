#include <stdio.h>

int main(void)
{

    struct card // card is the structure tag
    {
        const char *face;
        const char *suit;
    };

    // A structure definition does not reserve any space in memory
    // Creates a new data type you can use to define variables
    struct card myCard;
    struct card deck[52];
    struct card *cardPtr;

    return 0;
}