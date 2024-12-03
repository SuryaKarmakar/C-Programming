#include <stdio.h>

int main() {
    /*  float - a float can occupies 4 bytes in memory and range from -3.4e38 to +3.4e38
        double - a double can occuipes 8 bytes in memory and range from -1.7e308 to +1.7e308
        long double - a long double can occupies 10 bytes in memory and range from -1.7e4932 to +1.7e4932
    */
    float f = 1.0;
    double d = 1.00;
    long double ld = 1.0000;

    printf("%f, %lf, %Lf\n", f, d, ld);

    return 0;
}