#include <stdio.h>

int main() {
    // char are stored in 8 bits
    char ch = 'a';
    char ch5 = '5';
    printf("ch = %c, ch5 = %c\n", ch, ch5);

    // uing the format characters %d, the ASCII number of the character is displayed.
    printf("ASCII value of 'a' is %d \n", ch);
    printf("ASCII value of 97 is '%c'\n", 97);

    return 0;
}