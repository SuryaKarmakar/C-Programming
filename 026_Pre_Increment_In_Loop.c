#include<stdio.h>

int main(){
	int i = 0;
	// first incrementation of i takes place, then the comparison of value of i with 10 is performed.
	while(++i < 10){
		printf("%d\n",i);
	}	
	return 0;
}
