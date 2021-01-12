#include <stdio.h>
//#include <sourceNartherion.h>
//#include <sourceSmartFoxy.h>

int main()
{
    int i = 0, decision = 1;
    
    while (decision != 0) {
        printf("\n‣ Options: \n\n");

        printf("0) Quit;\n\n");
        printf("1) Dejcstra's alghoritm;\n");
        printf("2) Infix to postfix converter;\n");
        printf("3) Prefix notation calculator;\n");
        printf("4) Cartesian product;\n");
        printf("5) ;\n");
        printf("6) ;\n");

        printf("\n‣ Enter your decision (1 - 6): ");
        scanf("%d", &decision);
        if (decision > 6 || decision < 0) {
            printf("\nThere is no %d) option! Be more observing!\n", decision);
            continue;
        }

        switch (decision) {
            case 1 :
                //dijcstra();
                break;
            case 2 :
                //printf("\nEnter the expression: ");
                //scanf("%[^\n]s", expression);
                //printf("\nPostfix form of this expression: %s;\n", to_postfix(expression) );
                break;
            case 3 :
                //printf("\nEnter expression in prefix form: ");
                //scanf("%s", expression);
                //prefix_calculation();
                break;
            case 4 :
                //printf("Enter amounts to Cartesian product;");
                //cartesian();
                break;
            case 5 :
                //...;
                break;
            case 6 :
                //...;
                break;
        }
    }
    
    printf("\n");
    return 0;
}