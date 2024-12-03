#include <stdio.h>

// no return
void add() {
    int a = 6, b = 4;
    printf("sum of a + b is : %d\n", a + b);
}

int main() {
    printf("i am main function...\n");
    add();  // no arguments

    return 0;
}