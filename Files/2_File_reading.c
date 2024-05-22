// Reading Data from a Sequential - Access File
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fPtr = NULL; // fPtr = clients.txt file pointer

    if ((fPtr = fopen("clients.txt", "r")) == NULL)
    {
        puts("File could not be opened");
    }
    else
    {                         // read account, name and balance from file
        int account = 0;      // account number
        char name[30] = "";   // account name
        double balance = 0.0; // account balance
        
        printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
        fscanf(fPtr, "%d%29s%lf", &account, name, &balance);

        //  while not end of file
        while (!feof(fPtr))
        {
            printf("%-10d%-13s%7.2f\n", account, name, balance);
            fscanf(fPtr, "%d%29s%lf", &account, name, &balance);
        }
        fclose(fPtr); // fclose closes the file
    }
}