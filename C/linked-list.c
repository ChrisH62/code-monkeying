#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int number;
    struct node *next;

} node;
// This is going to need a .txt file
int main(int argc, char* argv[])
{
    node *list = NULL;
    node *n = malloc(sizeof(node));
        if (n == NULL){
        free(n);
        return 1;
        }
    // Create the list from the cmd line.
    for (int i = 1; i < argc; i++) {
    int number = atoi(argv[i]);

    n->number = number; //sets the data
    //n->next = NULL; //first element points at nothing, also unneccesary due to the next line

    n->next = list; // now points at what "list" is pointing to
    list = n; //makes the 'list' point to the front of the list

   }
   //print the list
    for(node* ptr = list; ptr != NULL; ptr = ptr->next){
    printf("%d\n", ptr->number);
   } // this is clean I like this a lot, iterates through the list

  free(n); // How do i now do this, out of scope? // Solved.
   free(list);
}