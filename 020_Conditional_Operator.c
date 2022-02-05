#include<stdio.h>

int main(){
    int y, x = 10, z = 20;

    // [syntax] conditon ? statement 1 : statement 2 ; 
    // [example :1] here if the condition is ture then 100 is assign to y otherwise 200 is assign
    y = x > 5 ? 100 : 200;
    printf("%d\n",y);


    // [example :2]
    x == 10 ? printf("yes x is equal to 10..\n") : printf("no , a is not equal to 10\n");

    // [example :3] nested conditional operater
    y = x > z ? (x == 10 ? 1000 : 2000) : (z == 20 ? 3000 : 4000); 
    printf("%d\n",y); //here y will be print as 3000

    // [example :4] use parenthess into right most statemet ,,when tyr to assign a value...
    z > x ? (y = 11) : (y = 22);
    printf("%d\n",y);
    
    return 0;
}

