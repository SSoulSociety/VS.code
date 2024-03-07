#include <stdio.h>
int exponential(int x, int y); // function protoype

int main(void)
{
    int x, y;
    printf("Enter two numbers please: \n");
    scanf("%d %d", &x, &y);
    printf("%d", exponential(x, y));
    return 0;
}
// function definiton
int exponential(int x, int y)
{
    int result = 1;
    if (x == 0 && y == 0)
    {
        printf("This value can not be predictible with current math !!!");
    }
    else if (x == 0 && y != 0)
    {
        result = 0;
    }
    else if (y == 0 && x != 0)
    {
        result = 1;
    }
    else if (x < 0 || y < 0)
    {
        printf("please enter numbers greater or equal than 0");
    }
    else
    {
        for (int i = 1; i <= y; ++i)
        {
            result = (result * x);
        }
    }
    return result;
}