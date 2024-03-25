#include <stdio.h>

int main(void)
{

    struct card // card is the structure tag
    {
        const char *face;
        const char *suit;
    };

    // A structure definition does not reserve any space in memory
    // *Creates a new data type you can use to define variables
    struct card myCard;
    struct card deck[52];
    struct card *cardPtr;

    // if a structure definition does not specify a tag name, you must define any variables of the type
    struct card
    {
        const char *face;
        const char *suit;

    } myCard, deck[52], *cardPtr;

    return 0;
}