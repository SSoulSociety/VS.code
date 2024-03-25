#include <stdio.h>
// structs to functıons pass by value

struct students
{
    char name[20];
    char surname[20];
    int id;
};

void readStruct(struct students a); // prototype

int main(void)
{

    struct students person1 = {"mehmet", "lale", 2022566045};
    readStruct(person1);

    return 0;
}
void readStruct(struct students a)
{

    printf("%s %s %d", a.name, a.surname, a.id);
}
