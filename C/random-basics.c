#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // RNG (real)
    srand(time(NULL));
    printf("Enter a number of characters to generate: ");
    int amount;
     scanf("%d", &amount);
    for (int i = 0; i < amount; i++)
    {
    //random characters, how work?
    // 0+33 makes it start at 33 on the ascii table (!), and then %94 
    // makes it so we don't overflow the ascii table.
    printf("%c ",  33 + rand()%94);
    }
    printf("\n");

    return 0;
}