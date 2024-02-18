#include "myfirstlibrary.h"


bool validateCmdArgs(int argc)
{
    if (argc < 2)
    {
        printf("Usage: ./[programName], <arguments>\n");
        return false;
    }
    else if (argc > 2)
    {
        printf("Error: Too many arguments");
        return false;
    }
    else
    return true;

}