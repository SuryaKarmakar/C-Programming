#include <stdio.h>

int main() {
    int i = 0;

    // first the comparison of value of i with 10 is performed, and then the incrementation of i takes place.
    while (i++ < 10) {
        printf("%d\n", i);
    }

    return 0;
}
