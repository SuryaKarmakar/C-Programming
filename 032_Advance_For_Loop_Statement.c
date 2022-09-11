#include<stdio.h>

int main(){
	int i = 0, a;
	// we can replaced any of the initialization, testing and incrementation part of the for loop with any valid expression.
	// ex 1:
	for(scanf("%d",&a); a < 10; a++)
		printf("%d\n",a);
	// ex 2:
	for(a = 0; a < 10; a++, printf("%d\n",a));
	// ex 3:
	for(; i < 10 ;){
		printf("%d\n",i);
		i++;
	}
	// ex 4:
	for(a = 0; a < 10 ;){
		printf("%d\n",a);
		a++;
	}
	
	return 0;
}