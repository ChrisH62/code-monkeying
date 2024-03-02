#include <stdio.h>
#include <ctype.h>

// Array + Linked list ?? kinda
// an array of linked lists 

typedef struct node {
    char *name;
    char *number;
    struct node *next;
} node;

node *table[26];

unsigned int hash(const char *word);

int main(void) 
{

}

unsigned int hash(const char *word) 
{
    return toupper(word[0]) - 'A';
}