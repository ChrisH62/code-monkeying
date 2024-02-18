#include "myfirstlibrary.h"
bool validateCmdArgs(int argc);
int main(int argc, char* argv[])
{
    if(validateCmdArgs(argc) == false)
    {
        return 1;
    }
    else 
        printf("Success!\n");
        return 0;
}