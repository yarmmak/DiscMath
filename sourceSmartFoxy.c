

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

void cartesianProduct()
{
    int arr1[100] = {'\0'}, arr2[100] = {'\0'}, num1, num2;
    printf("Please input how many integers you want to add in first array: "); scanf("%d", &num1);
    for(int i = 0; i < num1; i++)
        scanf("%d", &arr1[i]);

    printf("Please input how many integers you want to add in second array: "); scanf("%d", &num2);
    for(int i = 0; i < num2; i++)
        scanf("%d", &arr2[i]);

    //puts("Your Cartesian Product is: {");
    printf("Your Cartesian Product is: { ");
    for (int i = 0; i < num1; i++) {
        for (int j = 0; j < num2; j++) {
            printf("{%d, %d} ", arr1[i], arr2[j]);
        }
    }
    printf("}");
}