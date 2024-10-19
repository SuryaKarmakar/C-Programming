#include<stdio.h>

#define NAME
#define DATA 30

int main(){
    // if macroname has been #define, then the block of code will processed as usual, otherwise not.
    #ifdef NAME
        printf("NAME is #define as a macroname\n");
    #endif

    // here this block of code don't execute because DOB is not #define as a macroname.
    #ifdef DOB
        printf("DOB is not #define as a macroname\n");
    #endif

    // ifndef or "if not defined" works exactly oppsite to ifdef or "if defined".
    #ifndef AGE
        printf("AGE is not #define as a macroname\n");
    #endif

    // if the expression evaluates to true then the print statement are compiled, otherwise #else part will compiled. its work same like if else statement.
    #if DATA > 50
        printf("DATA is greater than 50\n");
    #else
        printf("DATA is't greater than 50 \n");
    #endif

    return 0;
}