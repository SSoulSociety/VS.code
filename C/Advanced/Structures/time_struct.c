#include <stdio.h>

typedef struct time
{
    int hours;
    int minutes;
    int seconds;
} mytime_t;

mytime_t clock1, clock2;

mytime_t sumTime(mytime_t a, mytime_t b); // prototype
void printTime(mytime_t sum);
mytime_t getTime(mytime_t a);

int main(void)
{

    clock1 = getTime(clock1);
    printf("Now u will enter 2nd timezone: ");
    clock2 = getTime(clock2);
    printTime(clock1);
    printf(" + ");
    printTime(clock2);
    printf(" = ");
    mytime_t total = sumTime(clock1, clock2);
    printTime(total);

    return 0;
}

mytime_t sumTime(mytime_t a, mytime_t b)
{
    mytime_t sum;
    sum.hours = a.hours + b.hours;
    sum.minutes = a.minutes + b.minutes;
    sum.seconds = a.seconds + b.seconds;
    sum.minutes += sum.seconds / 60;
    sum.seconds = sum.seconds % 60;
    sum.hours += sum.minutes / 60;
    sum.minutes = sum.minutes % 60;

    return sum;
}

void printTime(mytime_t s)
{
    printf("%02d:%02d:%02d ", s.hours, s.minutes, s.seconds); //%02d provides us  his 7:4:23 ----> 07:04:23
}

mytime_t getTime(mytime_t a)
{
    printf("Enter hours pls: ");
    scanf("%d", &a.hours);
    printf("Enter minutes pls: ");
    scanf("%d", &a.minutes);
    printf("Enter seconds pls: ");
    scanf("%d", &a.seconds);

    return a;
}
