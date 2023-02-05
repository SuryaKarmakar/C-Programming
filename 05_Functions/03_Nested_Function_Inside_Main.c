#include <stdio.h>

int main(){
    printf("Main");
    // a function cant be defined in another function, but you can do inside main() function...
    void func(){
        printf("Func");
    }
    func();
    return 1;
}