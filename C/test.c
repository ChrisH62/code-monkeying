#include<stdio.h>

int main(void)
{
    char* a1[3] = {"Hello", "Abc","FEDCBA"};

    printf("%lu %lu %lu\n",sizeof(a1[0]),sizeof(a1[1]), sizeof(a1[2]));

    printf("%c %c %c\n", a1[0][0], a1[1][0],a1[2][0]);

}