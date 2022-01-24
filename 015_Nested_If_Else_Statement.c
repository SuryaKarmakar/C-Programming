#include<stdio.h>

int main(){
	int a = 10, b = 20;
	int x, y;

	printf("Enter 2 no : ");
	scanf("%d%d",&x,&y);

	if (x == a){
		if (y == b)
			printf("a and b both is match ");
		else 
			printf("b is not match");
	}
	else{
		if (y == b)
			printf("only b is match");
		else 
			printf("a and b both not match");
	}
	return 0;
}

