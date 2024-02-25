#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* string1 = "Test";
//  char* string2 = string1; does not work, copies the memory addresses
//  of the first letters, do this instead.
int s1length = strlen(string1);
// memory allocation for a new string,
// malloc returns the address of the new block of memory.
    char* string2 = malloc(s1length + 1);
// malloc will return NULL if the system cannot allocate that memory

    if (string2 == NULL) 
    return 1;

    for (int i = 0; i <= s1length; i++)
    {
        string2[i] = string1[i];
    }
    free(string2);
return 0;
}