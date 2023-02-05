#include<stdio.h>

int main(){
    char x;

    printf("[+]Enter your choice : ");
    scanf("%c",&x);

    switch (x){
    case 'a':
        printf("you are choice a ...\n");
        break;
    case 'b':
        printf("you are choice b ...\n");
        break;
    /* here if input is "lower c" or "upper C" both case will be executed... and we dont use break so if this case execute then, control automatically 
       reaches the next case ... */ 
    case 'c':
    case 'C':
        // here both case can be share a same body
        printf("you are choice either c or C ...\n");
        break;
    }
    return 0;
}