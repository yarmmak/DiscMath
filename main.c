#include <stdio.h>
#include "op_lib.h"
//#include <gtest/gtest.h>
#include "sourceNartherion.h"
#include "sourceSmartFoxy.h"
#include "sourceTaras.h"
#include "sourceAndrii.h"


int main()
{
    int i = 0, decision = 1;
    int size, startPoint;

    while (decision != 0) {
        putchar('\n');
        printf("+---------------------------------------------------------------------------------------------------+\n"
               "|                                                                                                   |\n"
               "|                  ██████╗ ██╗███████╗ ██████╗███╗   ███╗ █████╗ ████████╗██╗  ██╗                  |\n"
               "|                  ██╔══██╗██║██╔════╝██╔════╝████╗ ████║██╔══██╗╚══██╔══╝██║  ██║                  |\n"
               "|                  ██║  ██║██║███████╗██║     ██╔████╔██║███████║   ██║   ███████║                  |\n"
               "|                  ██║  ██║██║╚════██║██║     ██║╚██╔╝██║██╔══██║   ██║   ██╔══██║                  |\n"
               "|                  ██████╔╝██║███████║╚██████╗██║ ╚═╝ ██║██║  ██║   ██║   ██║  ██║                  |\n"
               "|                  ╚═════╝ ╚═╝╚══════╝ ╚═════╝╚═╝     ╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝                  |\n"
               "|                                                                                                   |\n"
               "+---------------------------------------------------------------------------------------------------+\n"
               "|                                               Actions                                             |\n"
               "|                                                                                                   |\n"
               "|       0. Quit                                                4. Prefix product                    |\n"
               "|       1. Dijkstra's algorithm                                5. Cartesian product                 |\n"
               "|       2. Infix to postfix converter                          6. Computer Representation           |\n"
               "|       3. Postfix notation calculator                                                              |\n"
               "|                                                                                                   |\n"
               "+---------------------------------------------------------------------------------------------------+\n");


        printf("\n‣ Enter your decision (1 - 6): ");
        scanf("%d", &decision);
        if (decision > 6 || decision < 0) {
            printf("\nThere is no %d. option! Be more observing dude!\n", decision);
            continue;
        }

        switch (decision) {
            case 1 :
                //dijkstra()
                printf("\n‣ Dijkstra's algorithm\n");;
                printf("\nDude, be careful, function under repair.");
                break;
            case 2 :
                printf("\n‣ Infix to postfix converter\n");
                printf("\nEnter the expression: ");
                char expression[100] = {'\0'};
                scanf("%s", expression);
                printf("\nPostfix form of this expression: %s;\n", to_postfix(expression) );
                break;
            case 3 :
                printf("\n‣ Postfix product\n");
                printf("Enter expression in postfix form: ");
                char postExpression[100] = {'\0'};
                scanf("%s", postExpression);
                printf("Result Is: %d\n", postfixNotation(postExpression));
                break;
            case 4 :
                printf("\n‣ Prefix product\n");
                printf("Enter expression in prefix form: ");
                char preExpression[100] = {'\0'};
                scanf("%s", preExpression);
                printf("Result Is: %d\n", prefixNotation(preExpression));
                break;
            case 5 :
                printf("\n‣ Cartesian product\n");
                cartesianProduct();
                break;
            case 6 :
                printf("\n‣ Computer Representation\n");
                computerRepresentation();
                break;
        }
    }

    printf("\n");
}
