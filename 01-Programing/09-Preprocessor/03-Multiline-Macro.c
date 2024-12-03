#include <stdio.h>

// macro can be split multiple lines, with a '\' backslash present at the end of each line.
#define ILOOP                     \
    for (int i = 0; i <= 10; i++) \
    printf("%d\n", i)

int main() {
    ILOOP;

    return 0;
}
