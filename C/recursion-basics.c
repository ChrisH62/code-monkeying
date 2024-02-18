#include <stdio.h>
#include <stdlib.h> //atoi

void draw(int n);

int main(int argc, char **argv)
{
if (argc != 2)
{
    printf("Usage: ./recursion <integer>\n");
    return 1;
}
else 
{
    draw(atoi(argv[1]));
}
}
void draw(int n)
{
    // If nothing to draw, exits
    if (n <= 0)
    {
        return;
    }
    // Print pyramid of height n - 1
    //keeps counting down until it hits 0 and line 21 exits
    draw(n - 1);
    // Print one more row
    for (int i = 0; i < n; i++)
    {
        // prints "n" amount of hashse
        printf("#");
    }
    //last part prints a newline before the function runs againls

    printf("\n");

}