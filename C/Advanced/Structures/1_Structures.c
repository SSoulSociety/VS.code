#include <stdio.h>
// intro to structs
int main(void)
{
    struct employee
    {
        char firstName[20];
        char lastName[20];
        int age;
        double hourlySalary;
        // Each structure definition ends with a semicolon
    };
    
    struct employee mehmet = {"mehmet", "LALE", 19, 174.23};
    printf("%s %s %d %.2f" , mehmet.firstName, mehmet.lastName, mehmet.age, mehmet.hourlySalary);
   
  

    return 0;
}