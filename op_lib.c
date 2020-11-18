#include "op_lib.h"
#define ERR 100

//Not Operator
int NOT(int a)
{
    if (a == 0)
        return 1;
    else if (a == 1)
        return 0;
    else
        return ERR;
}

//Or Operator
int OR(int a, int b)
{
    if (a == 1 || b == 1)
        return 1;
    else if (a == 0 && b == 0)
        return 0;
    else
        return ERR;
}

//And Operator
int AND(int a, int b)
{
    if (a == 1 && b == 1)
        return 1;
    else if (a == 0 || b == 0)
        return 0;
    else
        return ERR;
}

//Implication Operator
int IMPL(int a, int b)
{
    if ((a == 1 && b == 1) || (a == 1 && b == 0) || (a == 0 && b == 0))
        return 1;
    else if (a == 0 && b == 1)
        return 0;
    else
        return ERR;
}

//XOR operator
int XOR(int a, int b)
{
    if ((a == 1 && b == 1) || (a == 0 && b == 0))
        return 0;
    else if ((a == 0 && b == 1) || (a == 1 && b == 0))
        return 1;
    else
        return ERR;
}