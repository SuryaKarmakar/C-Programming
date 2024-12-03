#include <stdio.h>

int main() {
    int j = 0, i = 1;
    // pre increment -> first increments i, then assign the increment value i to j...
    j = ++i;
    // here j is now 2
    printf("now j = %d\n", j);

    return 0;
}
