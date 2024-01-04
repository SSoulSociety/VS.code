//break and continue statemnents part 1
#include <stdio.h>

int main(void) {
    
    int x = 1;

    for(; x <= 10; x++) {
        if (x == 5) {
            break;
        }
        printf("%d " , x);
    }
    printf("\n Broke out of loop at x == %d \n" , x);

    return 0;
}
