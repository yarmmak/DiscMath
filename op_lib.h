//
// Created by Максим on 13.11.2020.
//



#ifndef D___OP_LIB_H
#define D___OP_LIB_H
#include "op_lib.c"

//NOT OPERATOR
//Function return 1 if a = 0 and 0 if a = 1
//Error output - 100
int NOT(int a);

//OR OPERATOR
//Function return 1 if a = 1 OR b = 1
//Error output - 100
int OR(int a, int b);

//AND OPERATOR
//Function return 1 if a = 1 AND b = 1
//Error output - 100
int AND(int a, int b);

//IMPL OPERATOR (implication)
//Function return 1 if a = 1 and b = 1, a = 1 and b = 0, a = 0 and b = 0
//Function return 0 if a = 0 and b = 1
//Error output - 100
int IMPL(int a, int b);

//XOR OPERATOR (exclusive OR)
//Function return 1 if a = 1 and b = 0, a = 0 and b = 1
//Function return 0 if a = 0 and b = 0, a = 1 and b = 1
//Error output - 100
int XOR(int a, int b);




#endif //D___OP_LIB_H
