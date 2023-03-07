#include <stdio.h>

// call by value
void callByValue (int a, int b){
    int c;
    c = a;
    a = b;
    b = c;
    printf("new a = %d, new b = %d\n",a, b);
} 

// call by reference
void callByReference (int *x, int *y){
    /* in this method the addresses of actual arguments in the calling function are copied into formal arguments of the called function. its means
    we would be able to manipulate them */
    int c;
    c = *x;
    *x = *y;
    *y = c;
}

int main(){
    int a = 10, b = 20;
    int x = 10, y = 20;

    // call by value
    callByValue(a, b);
    // note that values of a and b remain unchanged even after exchanging the callByValue funcation
    printf("a = %d, b = %d\n",a, b);

    // call by reference
    callByReference(&x, &y);
    printf("x = %d, y = %d\n",x, y);
    
    return 0;
}

