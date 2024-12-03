#include <stdio.h>

int main() {
    int a = 0, b = 10;

    while (a++ <= 10 && --b >= 0) {
        printf("%d\t%d\n", a, b);
    }

    return 0;
}
