#include<stdio.h>

int main(){
    char gender = 'M';
    int age = 15;

    if(gender == 'M'){
        if (age == 10)
            printf("Your age is 10\n");
        else if (age == 15)
            printf("your age is 15\n");
        else if (age == 20)
            printf("your age is 20\n");
    }
    else if(gender == 'F'){
        if (age == 10)
            printf("Your age is 10\n");
        else if (age == 15)
            printf("your age is 15\n");
        else if (age == 20)
            printf("your age is 20\n");
    }
    
    return 0;
}
