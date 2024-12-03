#include <stdio.h>

int main() {
    int j = 0, i = 1;
    // post increment -> first assign curent value of i to j, then i will be
    // increment...
    j = i++;
    // here j is now 1
    printf("now j = %d\n", j);

    return 0;
}
