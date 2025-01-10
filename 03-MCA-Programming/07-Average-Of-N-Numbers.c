#include <stdio.h>

#define N 5

int main() {
    int count;
    float number, total, average;

    count = 0;
    total = 0;

    while (count < N) {
        printf("Enter a number = ");
        scanf("%f", &number);

        total += number;
        count++;
    }

    average = number / N;
    printf("Average = %f", average);

    return 0;
}