#include<stdio.h>

int main(){
	int i, j;
	// ex 1:
	for(i = 1; i < 10; i++){
		printf("%d\n",i);
		// when break is encountered inside any loop, then contol automattically passes to the first statement after the loop ...
		if(i == 5){
			printf("i is equal to 5 \n");
			break;
		}
		
	}
	// ex 2:
	/* the keyword break, breaks the control only form the while in witch it is placed. in this example when b equal to 5 then, break takes the 
	control outside the inner while only, since it is placed inside the inner while ...
	*/
	int a = 1, b = 1;
	while(a++ <= 10){
		while(b++ <= 10 ){
			if (b == 5){
				printf("b is equal to 5 \n");
				break;
			}
		}
	}
	return 0;
}
