#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    FILE *fPtr = NULL; // fPtr = client.txt file pointer

    // fopen opens the file. Exit the program if unable to create the file
    if ((fPtr = fopen("clients.txt", "w")) == NULL)
    {
        puts("File could not be opened");
    }
    else
    {
        puts("Enter the acoount, name, and balance.");
        puts("Enter EOF to end input");
        printf("%s", "? ");
    }

    int account = 0;      // account number
    char name[30] = "";   // account name
    double balance = 0.0; // account balance
    scanf("%d %29s %lf", &account, name, &balance);

    // write account, name and balance into file with fprintf
    while (!feof(stdin))

    {

        fprintf(fPtr, "%d %s %.2f\n", account, name, balance);
        printf("%s", "? ");
        scanf("%d%29s%lf", &account, name, &balance);
    }

    fclose(fPtr); // fclose closes file
}
