// Write a C program - using gets() and puts() do display the input character.

#include <stdio.h>
int main() {
    char ch[100];  // Character array with size 100
    gets(ch);
    puts(ch);
    return 0;
}