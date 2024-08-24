#include <stdio.h>

int main(){
    // here 'j' is a pointer to an int, whereas 'k' is a pointer to an integer pointer. 'k' can hold a address of another pointer variable...
    // There is no limit on how far can we go on extending this definition...
    int i = 3, *j, **k;

    // i = 3(0011) -> j = 0011(0022) -> k = 0022(0033)
    j = &i;
    k = &j;

    printf("Address of i = %u\n", &i);  // -> 1873949576
    printf("Address of i = %u\n", j);  // -> 1873949576
    printf("Address of i = %u\n", *k);  // -> 1873949576
    printf("Address of j = %u\n", &j);  // -> 1873949568
    printf("Address of j = %u\n", k);  // -> 1873949568
    printf("Address of k = %u\n", &k);  // -> 1873949560
    printf("Value of j = %u\n", j);  // -> 1873949576
    printf("Value of k = %u\n", k);  // -> 1873949568
    printf("Value of i = %u\n", i);  // -> 3
    printf("Value of i = %u\n", *(&i));  // -> 3
    printf("Value of i = %u\n", *j);  // -> 3

    // **(address of j) -> *(address of i) -> value of i
    printf("Value of i = %u\n", **k);  // -> 3

    return 0;
}