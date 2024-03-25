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

    return 0;
}