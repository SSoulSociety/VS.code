#include <stdio.h>
#include <stdlib.h> //rand() comes with this header

int main(void) {
    int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int face;

    /*loop 60000000 times and summarize results*/
    for (int roll = 0; roll < 60000000; ++roll) {
        int face = 1 + (rand() % 6);

        switch (face) {
            case 1:
                ++f1;
                break;
            case 2:
                ++f2;
                break;
            case 3:
                ++f3;
                break;
            case 4:
                ++f4;
                break;
            case 5:
                ++f5;
                break;
            case 6:
                ++f6;
                break;
        }
    }

    // display results in tabular format
    printf("%s%13s\n", "Face", "Frequency");
    printf(" 1%13d\n", f1);
    printf(" 2%13d\n", f2);
    printf(" 3%13d\n", f3);
    printf(" 4%13d\n", f4);
    printf(" 5%13d\n", f5);
    printf(" 6%13d\n", f6);

    return 0;
}