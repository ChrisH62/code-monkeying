#include<stdio.h>
#include<string.h>

struct myStruct
{
    unsigned int age;
    char name[50];
};

int main(void)
{
    // Need the struct keyword to create a member
    struct myStruct s1;

    s1.age = 22;
// Originally: s1.name[] = "Chris"
// Learned that you cannot assign strings, and you have to "copy" into them
    strcpy(s1.name, "Chris");
}