#include <stdio.h>
#include "op_lib.h"
//#include <gtest/gtest.h>
#include "sourceNartherion.h"
#include "sourceSmartFoxy.h"

int main()
{
    char raw[] = "x*y*y+x";
    printf("\n%s\n", to_postfix(raw));

    return 0;
}
