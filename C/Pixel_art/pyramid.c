#include <stdio.h>

int main (void){
    printf("Let'a make a pyramid bu using\n");
    
    int rows = 0;
    printf("I want a pyramid with height of: ");
    scanf("%d", &rows);
    
    for(int j = 1; j <= rows; j++){  //j is current row
    
        for(int i = 1; i <= (rows - j); i++){
            printf(" ");
        }
        
        for(int i = 1; i <= (2 * j- 1); i++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}