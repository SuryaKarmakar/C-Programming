#include<stdio.h>

int main(){
	int a = 1, b = 10;

	// if both of the conditions are ture then it will execute ...
	while(a <= 10 && b >= 0){
		printf("%d\t%d\n",a,b);
		a = a + 1;
		b = b - 1;
	}
		
	return 0;
}
