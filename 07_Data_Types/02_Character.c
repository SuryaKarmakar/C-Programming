#include <stdio.h>

int main(){
    /* both signed and unsigned char occupy 1 byte. signed char has a range from -128 to +127 and unsigned char has a range from 0 to 255. */
    char ch = 'a';

    char ch1 = 128;
    char ch2 = -132;

    /* char can't take a value bigger than +127, so it exceeds +127 by 1 that is -128. similarly -132 excceds -128 by 4 its means 4th number from positive side that is 124*/
    printf("%d,%d", ch1, ch2);
    
    return 0;
}