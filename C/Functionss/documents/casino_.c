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
#include <stdlib.h>
#include <time.h>

enum gameStatus
{
    WON,
    LOST,
    CONTINUE
};
int rollDice(void);

int main(void)
{
    srand(time(NULL));
    int myPoint = 0;
    int roll = rollDice();
    int gameStatus = 0;

    switch (roll)
    {
    case 7:
    case 11:
        gameStatus = WON;
        printf("You WON!\n");
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        printf("You LOST\n!");
        break;
    default:
        gameStatus = CONTINUE;
        myPoint = roll;
        printf("Your point is: %d\n", roll);
    }

    while (gameStatus == CONTINUE)
    {
        int a = rollDice();
        {
            printf("You WON!\n");
            gameStatus = WON;
        }
        else if (7 == a)
        {
            printf("You LOST\n");
            gameStatus = LOST;
        }
    }

    return 0;
}

int rollDice()
{
    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;

    printf("\n dice 1 = %d, dice 2 = %d\n", dice1, dice2);
    printf("\n total is: %d\n", dice1 + dice2);

    return dice1 + dice2;
}