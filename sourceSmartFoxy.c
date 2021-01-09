

// Calculate postfix notation
int postfixNotation(char *ptr)
{
    int stack[100] = 0, top = 0;
    int commonNumber = 0, number1, number2, result;
    while (*ptr != '\0')
    {
        if (isdigit(*ptr))
        {
            commonNumber = *ptr - 48;
            stack[++top] =commonNumber;
        } else {
            number1 = stack[top--];
            number2 = stack[top--];

            if (*ptr == '+')
                result = number2 + number1;
            else if (*ptr == '-')
                result = number2 - number1;
            else if (*ptr == '*')
                result = number2 * number1;
            else if (*ptr == '/')
                result = number2 / number1;
            else if (*ptr == '^')
                result = pow(number2, number1);
            else
                printf("Smth went wrong");

            stack[++top] = result;
        }
        ptr++;
    }
    return stack[top--];
}
