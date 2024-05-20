#include <stdio.h>
// structs to functıons pass by reference

struct students
{
    char name[20];
    char surname[20];
    int id;
};

void readStruct(struct students *aPtr); // prototype

int main(void)
{
    struct students person1 = {"mehmet", "lale", 2022556045};

    // Individual structure members and entire structure objects are passed by value, so functions cant modify them in the caller
    // To pass a structure by reference, use the structure object’s address so pointer also

    readStruct(&person1); // since it will go to a pointer we must use adress operator
    return 0;
}
void readStruct(struct students *aPtr)
{
    printf("%s %s %d", aPtr->name, aPtr->surname, aPtr->id);
}

/* or instead of fuctıon u can declare a pointer

struct students *bPtr = &person1;
printf("%s %s %d", bPtr->name, bPtr->surname, bPtr->id);  //aditionaly bPtr->name is the same with (*bPtr).name

*/