#include<stdio.h>
#include<string.h>

char toUpper(char a);
char toLower(char a);

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Error: Please input a character\n");
        return 1;
    }
    else if (argc == 2) 
    {
        if ((int)*argv[1] >= 97 && (int)*argv[1] <= 122) {
        printf("%c\n",toUpper(*argv[1]));
        }
        else if ((int)*argv[1] >= 65 && (int)*argv[1]<=90)
        {
            printf("%c\n", toLower(*argv[1]));
        }
        else
        {
            printf("%s\n", argv[1]);
        }
    }
}

char toUpper(char a)
{
    a = (int) a - 32;
    return a;
}
char toLower(char a)
{
    a = (int) a + 32;
    return a;
}

