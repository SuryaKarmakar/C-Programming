#include <stdio.h>

int main(){
    float radius, area, pi = 3.14;

    printf("Redius : ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    printf("Area = %f", area);

    return 0; 
}