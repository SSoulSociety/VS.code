#include <stdio.h>
// arrays to structs

struct students
{
    char name[20];
    char surname[20];
    int id;
};

int main(void)
{
    struct students people[3];

    for (int i = 0; i < 3; ++i)
    {
        printf("Enter the inforamations of %d. person (name-surname-id)\n", i+1);
        scanf("%s %s %d", people[i].name, people[i].surname, &people[i].id); // burda neden sadece 3.de & kulanıyoruz_?
    }

    for (int i = 0; i < 3; ++i)
    {
        printf("\n%s %s %d\n", people[i].name, people[i].surname, people[i].id);
    }

    return 0;
}
