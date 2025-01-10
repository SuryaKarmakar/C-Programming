#include <stdio.h>

int main() {
    // 32 bits with 6 digits of precison.
    float fl = 3.1414;
    printf("float fl = %f\n", fl);

    // 64 bits with 14 digites of precison.
    double db = 3.14141414;
    printf("double db = %f\n", db);
    // we can specify how many digit can how after dot
    printf("double db = %.2f\n", db);

    return 0;
}