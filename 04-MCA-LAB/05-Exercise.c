// Write a C program to find the factorial of a given integer number using both recursive and non-recursive functions.

#include <stdio.h>

int non_recursive(int n) {
    int i, f;
    f = 1;
    for (i = 1; i <= n; i++)
        f = f * i;
    printf("Factorial of %d = %d uisng non recursive\n", n, f);
}

int recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * recursive(n - 1);
}

int main() {
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);
    non_recursive(n);
    printf("Factorial of %d = %d using recursive", n, recursive(n));

    return 0;
}