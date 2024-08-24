#include <stdio.h>

int main(){
    /*
        short - its at least 2 bytes big and its never bigger than int.
        int - its can be 2 or 4 bytes, 2 byte int can take value form -32768 to +32767, whereas a 4 byte int can take values from -2147483648 to +2147483647.
        long - its at least 4 bytes big and its bigger than int.
        signed int - the highest leftmost bit stores the sign of the number 0, if the number is positive, and 1 if the number is negative.
        unsigned int - all the bits are used to store the value of the number.
    */
    short s;
    short signed ss;
    short unsigned su;
    long l;
    long int li;
    long signed ls;
    int i;
    signed long int sli;

    return 0;
}