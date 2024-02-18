#include <stdio.h>

#define ARRAY_LENGTH 6

int main(void)
{
    int numbers[ARRAY_LENGTH] = {12, 32, 32, 16, 5, 0};
    for (int i =0; i< ARRAY_LENGTH; i++) {printf("Numbers [%d] = %d\n", i, numbers[i]);}
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        //Compare the first two values, if out of order, swap
        for (int j= 0; j < ARRAY_LENGTH - i - 1; j++)
        {
        if (numbers[j] > numbers[j + 1])
        {
            //Why does you not works
            int temp = numbers[j];
            numbers[j]= numbers[j+1];
            numbers[j+1] = temp;
        }
        // if not, leave them.
        else
        {
            continue;
        }
        }

    }
    printf("\n");
    for (int i =0; i< ARRAY_LENGTH; i++) {printf("Numbers [%d] = %d\n", i, numbers[i]);}
    // if the last two elements of the array equal each other, print both, separated by \n
   /*     if (numbers[ARRAY_LENGTH - 1] == numbers[ARRAY_LENGTH - 2])
        {
            printf("%d\n", numbers[ARRAY_LENGTH - 1]);
            printf("%d\n", numbers[ARRAY_LENGTH - 2]);
        }
    // else print ONLY the last element.
        else
        {
            printf("%d\n", numbers[ARRAY_LENGTH - 1]);
        }
        */

}