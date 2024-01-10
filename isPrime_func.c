    #include <stdio.h>

    int isPrime(int x) 
    {
        int prime;
        for(int i = 2; i < x; ++i)
        {
            if(x % i == 0)
            {
            prime = 0;
            }
            else
            {
                prime = 1;
            }
        }
    return prime;
    }

    int main(void)
    {
        int number;
        printf("Enter a number greater than 2 pls: ");
        scanf("%d" , &number);
        if(number > 2)
        {
            printf("invalid value!!!");
        }
        else
        {
          
            printf("%d" , isPrime(number));
        }  



        return 0;
    }