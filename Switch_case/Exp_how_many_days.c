#include <stdio.h>

int main(void) {
int month;

printf("Enter month number (1-12) please: ");
scanf("%d" , &month);

switch (month) {
/*31 days months*/
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:

    printf("31 days \n");
    break;  

/*30 days months*/
case 4:
case 6:
case 9:
case 11:
   
    printf("30 days \n");
    break;

/*28 days month*/
case 2:

    printf("28 days \n");
    break;

default:
printf("Invalid number please enter a number beetween 1-12");    
}

    return 0;
}