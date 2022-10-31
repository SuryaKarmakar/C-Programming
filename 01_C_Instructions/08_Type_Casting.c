#include <stdio.h>

int main(){
    //Implicit Conversion (Also known as ‘automatic type conversion’)
    int x = 10;   
    char y = 'a';
  
    // y implicitly converted to int. ASCII value of 'a' is 97 
    x = x + y;
    printf("Implicitly type Conversion %d\n",x);

    /*Explicit Type Conversion (This process is also called type casting and it is user defined. Here the user can type cast the result to make it of
    a particular data type.) */
    char ch = 'a';
    int in = (int)ch + 1;
    printf("Explicit type Conversion %d\n",in);
    return 0;
}
