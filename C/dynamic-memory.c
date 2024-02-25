#include <stdlib.h>
#include <stdio.h>

int main(void)
{ // Statically declared and obtained, lives on the stack
    int x = 0;

// Dynamically allocated int, comes from the heap
    int* px = malloc(sizeof(int));
        if (px == NULL)
            return 1;
    *px = 1;

    printf("x - %d px - %d\n", x, *px);
    // Don't forget to do this, don't leak memory ;)
    free(px);
    
}