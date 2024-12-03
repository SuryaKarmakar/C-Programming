// this <filename> command would look the specified list of directories(standard directory) only
#include <stdio.h>

/* this "filename" command would look for the file calculator.c in the current directory as well as the specified list of directories as mentioned in the include
search path that might have been set up */
#include "calculator.c"

int main() {
    int result;
    result = sumOfTwoNumber(10, 5);
    printf("sum of two number is %d\n", result);

    result = subOfTwoNumber(10, 5);
    printf("subtraction of two number is %d\n", result);

    return 0;
}
