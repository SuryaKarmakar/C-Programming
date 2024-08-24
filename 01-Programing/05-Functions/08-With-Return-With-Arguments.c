#include<stdio.h>

// with return
int add(int x, int y){
    return (x + y);  
}

int main(){
    printf("i am main function...\n");
    int sum = add(6, 7);  // with arguments
    printf("sum of a and b is : %d\n",sum);
    return 0;
}