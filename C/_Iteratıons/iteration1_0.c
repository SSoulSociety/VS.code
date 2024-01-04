//Find the first power of 3 bigger than 100
#include <stdio.h>

int main(void) {
    
    int product = 3;
    
    while (product <= 100) {
        product = product * 3;
    }

printf("%d" , product);

return 0;
}