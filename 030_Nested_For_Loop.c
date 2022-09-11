#include<stdio.h>

int main(){
	
	int k,j;
	// for loops have been nested, not only this a for loop can occur within a while loop or a while within a for...
	for(k = 0; k < 3; k++){
		for(j = 0; j < 2; j++)
			printf("i am j\n");
		printf("[%d] i am k\n",k);
	}
	return 0;
}
