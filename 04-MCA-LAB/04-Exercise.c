// Write a C Program - using if else statements, to find the largest number among the given two integer numbers.

#include <stdio.h>
int main() {
    int x, y;

    printf("Enter value for x:\n");
    scanf("%d", &x);
    printf("Enter value for y :\n");
    scanf("%d", &y);

    if (x > y) {
        printf("X is large number - %d\n", x);
    } else {
        printf("Y is large number - %d\n", y);
    }
    return 0;
}