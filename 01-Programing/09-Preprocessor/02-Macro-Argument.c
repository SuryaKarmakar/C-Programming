#include <stdio.h>

#define PI 3.1428
// do not give a space between the macro template and its argument, no space between AREA and (x)
#define AREA(x) (PI * x * x)
#define PRINTF(value) printf("Area of circle r1 is = %f\n", value);

int main() {
    float r1 = 6.25, r2 = 2.5, result;

    result = AREA(r1);  // AREA(r1) get replace with (3.1428 * r1 * r1)
    PRINTF(result);

    result = AREA(r2);  // AREA(r2) get replace with (3.1428 * r2 * r2)
    PRINTF(result);

    return 0;
}
