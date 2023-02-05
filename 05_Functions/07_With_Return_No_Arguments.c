#include<stdio.h>

// with return 
int add(){
	int x = 10, y = 20;
    return (x + y);
}

int main(){
    printf("i am main function...\n");
    int sum = add();  // no arguments
    printf("sum of a and b is : %d\n",sum);
    return 0;
}