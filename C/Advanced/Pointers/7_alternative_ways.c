#include <stdio.h>

int main(void){
    //we can think pointers just like an array most of the time
    int array[5] = {1, 2, 3, 4, 5};
    int *aPtr = array;
    printf("%d\n" , aPtr[3]);

    //The second way to express
    int array2[5] = {0, 2, 4, 6, 8};
    int *bPtr = array2;
    printf("%d\n" , *(array2 + 3)); 

    //The third way to express
    int array3[5] = {3, 5, 7, 9 ,11};
    int *cPtr = array3;
    printf("%d\n" , *(cPtr + 3));

    // We cannot modify array name with these bcs it's like a costant pointer (i.e we b array and b += 3 will be invalid)
    
    return 0;
}