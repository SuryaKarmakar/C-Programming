#include<stdio.h>

int main(){
    int i = 3;

    // here we can use both "u%" or "d%" format specifier, "&" used for printing the address of a variable ...
    printf("address of i : %u",&i);
    return 0;
}