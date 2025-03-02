// Write a C Program – to use structure within union, display the structure and length of union elements.

#include <stdio.h>

struct hai {
    char c;
    long l;
    char *p;
};

union bye {
    char c;
    long l;
    char *p;
};

int main() {
    struct hai myhai;
    union bye mybye;

    myhai.c = 1;
    myhai.l = 2L;
    myhai.p = "This is myhai";

    mybye.c = 1;
    mybye.l = 2L;
    mybye.p = "This is mybye";

    printf("myhai: %d %ld %s\n", myhai.c, myhai.l, myhai.p);
    printf("mybye: %d %ld %s\n", mybye.c, mybye.l, mybye.p);
    return 0;
}