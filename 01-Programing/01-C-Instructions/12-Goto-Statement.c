#include <stdio.h>

int main() {
    // goto keyword can take the control from any place to any other plcae within the funcation ...
    int i = 0;

loop:
    if (i <= 10) {
        printf("%d\n", i);
        i++;
    }
    goto loop;

    return 0;
}
