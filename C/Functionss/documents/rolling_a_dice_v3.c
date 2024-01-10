#include <stdio.h>
#include <stdlib.h>

int main(void){

printf("%s", "Enter seed: "); // another way to use printf with %s ("%s" , "word");
 int seed = 0; // number used to seed the randomnumber generator
scanf("%d", &seed);

srand(seed); // seed the random-number generator
// To randomize without entering a seed each time, use a statement like srand(time(NULL)); and add the library <time.h>

for (int i = 1; i <= 10; ++i) {
printf("%d ", 1 + (rand() % 6)); 
}
 puts("");
} 