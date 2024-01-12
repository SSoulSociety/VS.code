// 10 person class avarage program with counter-controlled iteration
#include <stdio.h>

int main(void)
{

    // initialization phase
    int total = 0;
    int counter = 1;

    while (counter <= 10)
    {
        printf("%s", "Enter your grade: "); // Why do we use %s here??
        int grade = 0;
        scanf("%d", &grade);
        total = total + grade;
        counter = counter + 1;
    }

    int avarage = total / 10;
    printf("Class avarage is %d \n", avarage);

    return 0;
}