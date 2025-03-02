/* Write a C program, which takes two integer operands and one operator form the user performs the operation and then prints the result.
(Consider the operators +,-,*, /, % and use Switch Statement). */

#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, res, ch;
    printf("\t *********************");
    printf("\n\tMENU\n");
    printf("\t********************");
    printf("\n\t(1)ADDITION");
    printf("\n\t(2)SUBTRACTION");
    printf("\n\t(3)MULTIPLICATION");
    printf("\n\t(4)DIVISION");
    printf("\n\t(5)REMAINDER");
    printf("\n\t(0)EXIT");
    printf("\n\t********************");
    printf("\n\n\tEnter your choice:");
    scanf("%d", &ch);
    if (ch <= 5 & ch > 0) {
        printf("Enter two numbers:\n");
        scanf("%d%d", &a, &b);
    }
    switch (ch) {
        case 1:
            res = a + b;
            printf("\n Addition:%d", res);
            break;
        case 2:
            res = a - b;
            printf("\n Subtraction:%d", res);
            break;
        case 3:
            res = a * b;
            printf("\n Multiplication:%d", res);
            break;
        case 4:
            res = a / b;
            printf("\n Division:%d", res);
            break;
        case 5:
            res = a % b;
            printf("\n Remainder:%d", res);
            break;
        case 0:
            printf("\n Choice Terminated");
            exit(0);
            break;
        default:
            printf("\n Invalid Choice");
    }
    return 0;
}
