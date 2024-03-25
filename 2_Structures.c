#include <stdio.h>

int main(void)
{
    // A struct may not contain a variable of its own struct type, but it may contain a pointer to that struct type
    
    struct employee
    {
        char firstName[20];
        char lastName[20];
        unsigned int age;
        double hourlySalary;
        struct employee *managerPtr; // pointer if thwere was a vairable it's error
    };
    // This is a self-referential structure -> line 14
    // Commonly used to build linked data structures

    return 0;
}