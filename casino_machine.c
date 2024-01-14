/* Popular dice game known as “craps.”
• A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3, 4, 5,
and 6 spots.
• After the dice have come to rest, the sum of the spots on the two upward
faces is calculated.
• If the sum is 7 or 11 on the first throw, the player wins.
• If the sum is 2, 3, or 12 on the first throw (called “craps”), the player loses
(i.e., the “house” wins).
• If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, that sum becomes the
player’s “point.”
• To win, you must continue rolling the dice until you “make your point.” The
player loses by rolling a 7 before making the point. */

#include <stdio.h>
#include <stdlib.h> // rand()
#include <time.h>   // time(NULL)

enum Status
{
    CONTINUE,
    WON,
    LOST
};

int rollDice(void); // fucntion prototype

int main(void)
{
    srand(time(NULL));
    int sum = rollDice();
    int myPoint = 0;
    int gameStatus;

    switch (sum)
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("\nMy point is: %d\n", myPoint);
        break;
    }
    while (gameStatus == CONTINUE)
    {
        sum = rollDice();
        if (myPoint == sum)
        {
            printf("\ngameStatus: WON! \n");
            gameStatus = WON;
        }
        else if ( 7 == sum )
        {
            printf("\nTotal of second roll is 7 so gameStatus: LOST! \n");
            gameStatus = LOST;
        }
    }

    return 0;
}

int rollDice(void) // it returns integer but do not take anyhting so we use *int fuction(void)*
{
    int dice1, dice2;

    dice1 = (rand() % 6) + 1;
    dice2 = (rand() % 6) + 1;
    printf("\nFirst dice %d, second dice %d, sum = %d\n", dice1, dice2, dice1 + dice2);

    return dice1 + dice2;
}
