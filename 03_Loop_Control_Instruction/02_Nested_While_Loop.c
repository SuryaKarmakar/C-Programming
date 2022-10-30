#include<stdio.h>

int main(){
	int a = 1, b = 1;

	while(a < 10){	
		while(b < 10){
			printf("i am b\n");
			b++;
		}
		printf("%d\n",a);
		a++;
	}	
	return 0;
}
