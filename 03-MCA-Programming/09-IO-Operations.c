#include <stdio.h>

int main() {
    // char ch;
    // its recommended to use int data type for getchar() but we can use char as well.
    int ch;

    int i;
    float f;
    char c;
    char str[10];
    char str2[10];

    // reads one character from the input
    ch = getchar();
    // writes one character to the output
    putchar(ch);

    /*
    %c - a single character
    %d - a decimal integer
    %i - an integer
    %e, %f, %g - a floating-point number
    %o - an octal number
    %s - a string
    %x - a hexadecimal number
    %p - a pointer
    %n - an integer equal to the number of characters read so far
    %u - an unsigned integer
    %[] - a set of characters
    %% - a percent sign
    %ld - a long int argument in decimal
    %e - same as %f, but use exponential notation
    */

    // scanf() reads the input
    scanf("%d %f %c %s", &i, &f, &c, str);
    // printf() writes the output
    printf("%d %f %c %s", i, f, c, str);

    // The string may include whitespace characters
    gets(str2);
    puts(str2);
    return 0;
}