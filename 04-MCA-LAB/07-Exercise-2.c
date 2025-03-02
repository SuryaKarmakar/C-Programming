// Write a C program, to add two matrices using an Array.

#include <math.h>
#include <stdio.h>

int main() {
    int a[2][2], b[2][2];
    int i, j;

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);
    }

    printf("\n =====Matrix Addition=====\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%5d", a[i][j] + b[i][j]);
        printf("\n");
    }
    return 0;
}