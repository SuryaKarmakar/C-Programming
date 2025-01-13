#include <stdio.h>

int main() {
    /* Sample interactive program*/
    float principle, rate, time, interest;

    printf("Please enter the principle amount : ");
    scanf("%f", &principle);

    printf("Please enter the rate of interest : ");
    scanf("%f", &rate);

    printf("Please enter the period of deposit : ");
    scanf("%f", &time);

    interest = principle * rate * time / 100.0;

    printf("Principle = %7.2f\n", principle);
    printf("Rate of interest = %5.2f\n", rate);
    printf("Period of deposit = %5.2f\n", time);
    printf("Interest = %7.2f\n", interest);
}