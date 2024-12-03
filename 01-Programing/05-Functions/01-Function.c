#include <stdio.h>

// function prototype declaration. this does not return any value is indicated using the void keyword...
void message();

// this is main function()
int main() {
    printf("i am a main function\n");
    // when function is called, then calling funcation only works and called funcation stop there work...
    message();  // calling the user define message() function...

    return 0;
}

// this is the function definition. a funcation cant be define in another funcation. it can be done only inside main() funcation
void message() {
    printf("i am message function");
}