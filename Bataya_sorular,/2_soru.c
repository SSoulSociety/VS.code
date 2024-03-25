#include <stdio.h>
// 1 2 3 farkları nedir?
int main(void)
{
    // 1
    struct card
    {
        const char *face;
        const char *suit;

    } myCard, deck[52], *cardPtr;

    // 2
    struct card  //???? ne demej istediniz burda if a structure definition does not specify a tag name, you must define any variables of the type
  
    {
        const char *face;
        const char *suit;
        struct card myCard;
        struct card deck[52];
        struct card *cardPtr;
    };





/*

                |
                |
                |
                |
                |
                |
             \  |  /
              \ | /
               \ /
            

*/


    // 3
    struct card
    {
        const char *face;
        const char *suit;
    };

    struct card myCard, deck[52], *cardPtr;

    return 0;
}