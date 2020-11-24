#include <stdio.h>
#include "op_lib.h"
//#include <gtest/gtest.h>

int main()
{

    NOT(1); // 0
    NOT(0); // 1

    OR(2, 0); // 1

    return 0;
}
