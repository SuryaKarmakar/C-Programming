// Write a C program, to find both the largest and smallest number in a list of integers using an Array.

#include <math.h>
#include <stdio.h>

int main() {
    int i, min, max, size, a[20];

    printf("Enter size of the array:\n ");
    scanf("%d", &size);

    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d\n", &a[i]);
    }

    max = a[0];
    min = a[0];

    for (i = 1; i < size; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("The maximum number in given array is: %d\n", max);
    printf("The minimum number in given arrary is: %d\n", min);
    return 0;
}