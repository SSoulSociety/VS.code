#include <stdio.h>

/*Passing an Array By Value
• You can use a structure to pass an array by value
• To do so, create a structure with an array member
• Structures are passed by value, so its members are passed by value
*/

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
        printf("Enter the inforamations of %d. person (name-surname-id)\n", i + 1);
        scanf("%s %s %d", people[i].name, people[i].surname, &people[i].id); // burda neden sadece 3.de & kulanıyoruz_? line 18 ile line 6 ya bak
    }

    for (int i = 0; i < 3; ++i)
    {
        printf("\n%s %s %d\n", people[i].name, people[i].surname, people[i].id);
    }

    return 0;
}
