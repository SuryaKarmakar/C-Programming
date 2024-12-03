#include <stdio.h>

void increment() {
    /*
       storage - Memory(RAM).
       default value - 0.
       scope - local to the block in which the variable is defiend.
       life - value of the variable persists between different funcation call.
    */
    auto int i = 1;
    static int j = 1;
    i += 1;
    // every time start with updatete or latest value. however variable's scope is end.
    j += 1;
    printf("%d\t%d\n", i, j);
}

int main() {
    increment();
    increment();
    increment();
    /* when the control return from increment(), the variable i dies, whereas j being static ,continues to live with its latest value. j dies only when
    execution of the program comes to an end */

    return 0;
}