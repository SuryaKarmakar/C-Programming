#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int x, y;

    printf("Enter 2 no : ");
    scanf("%d%d", &x, &y);

    if (x == a) {
        if (y == b)
            printf("a and b both is match \n");
        else
            printf("only a is match \n");
    } else {
        if (y == b)
            printf("only b is match \n");
        else
            printf("a and b both not match \n");
    }

    return 0;
}
