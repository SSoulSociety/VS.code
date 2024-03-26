#include <stdio.h>
// pass by vreferecene cube
//void takeCube(int *nPtr);

/*int main(void)
{
    int number = 7;
    takeCube(&number);
    printf("new value of number = %d", number);

    return 0;
}

void takeCube(int *nPtr) 
{

    *nPtr = (*nPtr) * (*nPtr) * (*nPtr);
}
*/

void takeCube(int *nPtr);

int main(void)
{
    int number = 7;
    int *nPtr = &number;
    takeCube(nPtr); 
    // zortlama nedeni acaba adresi dereferansa edip degerı buluyoruz 7 ama tekrar foknıyona gonderdigimzide 
    // orda bi daha derefeerece edılıyor ama 7 nin gosterdiggi bişey yok kı dereference nasıl edeedcez
    printf("new value of number = %d", number);

    return 0;
}

void takeCube(int *nPtr) 
{

    *nPtr = (*nPtr) * (*nPtr) * (*nPtr);
}

