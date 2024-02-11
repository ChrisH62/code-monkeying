#include<stdio.h>
#include<string.h>
 
void reverse_string(char* input);

int main(int argc, char *argv[])
{  
    if (argc < 2) {
        printf("Error: please use at least one Input...\n");
        return 1;
    }
    else if (argc == 2)
    {
        reverse_string(argv[1]); 
        // This works, even though I thought it wouldn't initially because the function changes the value
        // of argv[1] completely
        printf("%s\n", argv[1]);
        return 0;
    }
    else 
    {
        printf("Error: Too many arguments\nUsage: ./string-reverse [string to be reversed]\n");
        return 2;
    }

}

void reverse_string(char* input)
{
    char swap;
    // suggestion from chatGPT, originally called strlen multiple times,
    // to get the length of the string which I now understand to be problematic.
    // Now, stringLength handles that number
    // Noted: avoid at all costs having a function call multiple times if you're just using it to get a value
    int stringLength = strlen(input);
  
    for (int i = 0; i < stringLength / 2; i++)
    {
        swap = input[i];

        input[i] = input[stringLength - (i + 1)];

        input[stringLength - (i + 1)] = swap;

    }

}
