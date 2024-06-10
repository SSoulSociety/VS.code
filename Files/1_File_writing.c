#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fPtr = NULL; // fPtr = clients.txt file pointer

    fPtr = fopen("clients.txt", "w");
    
    puts("Enter the account, name, and balance.");
    puts("Enter EOF to end input");
    printf("%s", "? ");

    int account = 0;      // account number
    char name[30] = "";   // account name
    double balance = 0.0; // account balance

    while (scanf("%d %29s %lf", &account, name, &balance) == 3)
    // If it reads and assigns all three values, it returns 3.
    // If it fails to read three values it returns a value less than 3.
    {
        // Write account, name and balance into file with fprintf
        fprintf(fPtr, "%d %s %.2f\n", account, name, balance);
        printf("%s", "? ");
    }

    fclose(fPtr); // fclose closes file
    return 0;     // Indicate successful completion
}
