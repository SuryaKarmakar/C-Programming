#include <stdio.h>

int main() {
    int choice;

    printf("Enter your choice [1: c 2: c++ 3: python 4: java ] ");
    scanf("%d", &choice);

    /* in switch case we can't use any kind's of checking condition like equals to, greater than etc... only int and char allowed even a float
    is not allowed */
    switch (choice) {
        case 1:
            printf("learn c programming\n");
            // without break, if and only any case will be true then, after that case every case should be execute....
            // so it is importent to put break in every case...
            break;
        case 2:
            // multiple statements can be execute without a pair of braces...
            printf("learn c++ programming\n");
            break;
        case 3:
            printf("learn python programming\n");
            break;
        case 4:
            printf("learn java programming\n");
            break;
        default:
            // no need a break statemetn after the default, since on reaching the default case, the control comes out of the switch anyway...
            printf("wrong choice\n");
    }

    return 0;
}
