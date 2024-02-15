//break and continue statemnents part 2

#include <stdio.h>

int main(void) {
    
    for(int x = 1; x <= 10; x++) {
        if (x == 5) {
            continue; // countinue'dan sonrakı parça calısmaz.
        }
        printf("%d " , x);
    }
    printf("\n Used countinue to skip printing the value 5" );

    return 0;
}