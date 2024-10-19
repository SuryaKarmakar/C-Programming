#include<stdio.h>

#define NAME
// in order to undefine a macro that has been earlier #defined, we can use #undef dicertive.
#undef NAME

int main(){
    #ifdef NAME
        printf("NAME is #define as a macroname\n");
    #endif

    return 0;
}