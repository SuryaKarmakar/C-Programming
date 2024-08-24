#include<stdio.h>

int main(){
    int i = 3, *x;
    float j = 3.5, *y;
    char k = 'c', *z;

    x = &i; // i address => xxx10
    y = &j; // j address => xxx20
    z = &k; // k address => xxx30

    printf("address of i is : %d\n", x);
    printf("address of j is : %d\n", y);
    printf("address of k is : %d\n", z);

    puts("[+]increment pointer variables x, y, z ");
    //every time we increment and decrement our pointer variables, it always points to the next location of its data type.
    x++; //now x is locate xxx10 + 4 (int=4 byte) => xxx14
    y--; //now y is locate xxx20 - 4 (float=4 byte) => xxx16
    z++; //now z is locate xxx30 + 1 (char=1 byte) => xxx31

    printf("address of i is : %d\n", x);
    printf("address of j is : %d\n", y);
    printf("address of k is : %d\n", z);
    
    return 0;
}