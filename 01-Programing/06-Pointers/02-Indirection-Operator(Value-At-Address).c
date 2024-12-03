#include <stdio.h>

int main() {
    int i = 3;
    // & = address of i
    printf("Address of i %u\n", &i);
    printf("Value of i %d \n", i);

    /* '*' - this pointer operator is called 'value at address' operator, it gives the value stored at a particular address. The value at address
    operator is also called 'indirection operator' */
    printf("value of i %d \n", *(&i));  // *(&i) -> value(address)

    return 0;
}
