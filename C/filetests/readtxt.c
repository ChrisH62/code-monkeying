// Chris H 3/2/24
// A simple Command-line text file reading utility.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int miliseconds);

int main(int argc, char *argv[])
{
    if(argc != 2) {
        printf("Usage: ./read <filename.txt>\n");
        return 1;
        }

   char* filename = argv[1];
   FILE *input = fopen(filename, "r");
        if (input == NULL) {
            printf("File could not be opened. Exiting...\n");
            return 2; // Error Handling
        }

    int *buffer = malloc(sizeof(int)); //This has to be an int
    if (buffer == NULL) {
        printf("Memory Allocation Error. Exiting...\n");
        return 3; // Standard error handling
    } // Ok, now we start.

    while((*buffer = fgetc(input)) != EOF) {
        int i = 0;
            printf("%c", buffer[i]); //print the value of (as a char).
            fflush(stdout);// This line"de-optimizes" std output
            // and gives the aesthetic I was looking for in the first place.
            // (looking like the program is 'typing' out the words.)
            delay(20000); // this function slows down the program so it doesn't
            // go at light speed
        i++;
    }
printf("\n");
free(buffer);
fclose(input);
return 0;
}

void delay(int miliseconds)
{
clock_t start_time = clock();

while (clock() < start_time + miliseconds);
}
