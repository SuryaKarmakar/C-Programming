/* Library file access */
#include <stdio.h>

int main() {
    /*Variable declarations */
    float radius, area, pi = 3.14;

    printf("Redius : ");
    /* Input statement */
    scanf("%f", &radius);

    area = pi * radius * radius;
    /* Output statement */
    printf("Area = %f", area);

    return 0;
}