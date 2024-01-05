#include <stdio.h>
#include <math.h>
// Find the roots of ax^2+bx+c function
int main(void)
{
    int a, b, c;
    float delta, root1, root2;

    printf("Enter the a please: ");
    scanf("%d" , &a);
    printf("Enter the b please: ");
    scanf("%d" , &b);
    printf("Enter the c please: ");
    scanf("%d" , &c);

    delta = (b*b) - (4*a*c);
    root1 = (-b + (sqrt(delta)) ) / (2*a);
    root2 = (-b - (sqrt(delta)) ) / (2*a);

    printf("root1 and root2: %.2f %.2f" ,root1, root2);









    return 0;
}