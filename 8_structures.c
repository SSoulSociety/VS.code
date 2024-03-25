#include <stdio.h>
// How to use typdef
// syntax = typedef existing_data_type new_data type
// it gives us freedom to creat our own types (i.e )

typedef int INTEGER;

int main(void)
{
    INTEGER id = 2022556045;
    printf("%d", id);

    return 0;
}

void deneme(void)
{

    typedef struct car
    {
        int fuel_tank;
        char engine[20];
        char colour[20];
        char brand[20];
    }car_type;
}