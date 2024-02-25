#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{   
    if (argc != 2)
    {
        printf("Invalid input...\n");
        return 1;
    }
        // File name if in same dir, use a file path if else
    FILE *f = fopen(argv[1], "r"); //R, W, or A for read, write or append.
    if (f == NULL)
    {
        printf("File could not be opened..\n");
        return 1;
    }
    char buffer;
    
    while ((buffer = fgetc(f)) != EOF)
        printf("%c", buffer);
        printf("\n");
    // (where does the text go, what's the size of whats being read,
    // how many do you want to read at once, what file should this be read from)
    fclose(f);
}