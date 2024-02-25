#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
        return 1;

    char* filename = argv[1];
    FILE *f = fopen(filename, "r");
    if (f == NULL)
        return 2;
    // now we check if it's a pdf ? ?
    //nvm its buffer time
    uint8_t buffer[4]; // special int that's 8 bits/1 byte unsigned
    // NOW we check i thingk
    fread(buffer, 1, 4, f);

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", buffer[i]);
    }
    fclose(f);
    return 0;
}