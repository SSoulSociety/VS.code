    #include <stdio.h>
    struct adress
    {
        char street[20];
    };  
    //struct adress example = {"Mehmet Uzun Cad."};  boyle neden olmuyor=??
   

    struct employee
    {
        char firstName[20];
        char lastName[20];
        unsigned int age;
        double hourlySalary;
        struct adress street; // A struct may not contain a variable of its own struct type, but it may contain a pointer to that struct type
    };
    struct employee best = {"mehmet", "lale", 19, 132.4, {"Mehmet Uzun Cad."}}; 

    int main(void)
    {

        printf("%s %s %u %.2f %s", best.firstName, best.lastName, best.age, best.hourlySalary, best.street.street);
        return 0;
    }