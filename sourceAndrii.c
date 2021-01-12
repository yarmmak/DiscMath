#include "sourceAndrii.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int prefixNotation(char* ptr)
{
    int stack[100] = { 0 }, top = 0;
    char* temp = ptr;
    int commonNumber = 0, number1, number2, result;
    int c = strlen(ptr);
    char read[100];
    for (int i = c - 1; i >= 0; i--)
    {
        read[i] = *temp;
        temp++;
    }
    int k = 0;
    while (k!=c)
    {

        if (isdigit(read[k]))
        {
            commonNumber = read[k] - 48;
            stack[++top] = commonNumber;
        }
        else {
            number1 = stack[top--];
            number2 = stack[top--];

            if (read[k] == '+')
                result = number2 + number1;
            else if (read[k] == '-')
                result = number2 - number1;
            else if (read[k] == '*')
                result = number2 * number1;
            else if (read[k] == '/')
                result = number2 / number1;
            else if (read[k] == '^')
                result = pow(number2, number1);
            else
                printf("Smth went wrong");

            stack[++top] = result;
        }
        k++;
    }
    return stack[top--];
}