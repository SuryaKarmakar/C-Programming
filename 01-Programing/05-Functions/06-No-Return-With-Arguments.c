#include<stdio.h>

// no return
void add(int x ,int y){
    printf("sum of a + b is : %d\n",x + y);
}

int main(){
    printf("i am main function...\n");
    add(6, 4);  // with arguments
    return 0;
}