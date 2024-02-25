#include <stdlib.h>
#include <stdio.h>

// void swap(int a, int b);

void swap(int* a, int* b);

int main(void)
{
    int* x = malloc(3 * sizeof(int));
    //int* x is now ESSENtiALLy an array, with space for 3 integers.
    // However, be careful to not overwrite the bounds of this "Array"
    
}