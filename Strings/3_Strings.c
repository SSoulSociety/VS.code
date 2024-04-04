#include <stdio.h>
// reading string with scanf

int main(void)
{

    char word[20] = {0};
    scanf("%19s", word);  // scanf ile sınrıı koymazsan nerde duracagını bilmez program errorlara yol acabilir (-)
    printf("%s\n", word); // scanf space tusunu bastıgın an biter (-)

    return 0;
}
