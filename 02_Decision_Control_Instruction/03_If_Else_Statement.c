#include<stdio.h>

int main(){
	int isAge;
	printf("Enter your age : ");
	scanf("%d",&isAge);

	if (isAge >= 18)
		// this statement will be executed if the condition is ture/non zero.
		printf("you are eligible to join \n");		
	else
		// otherwise this statement will executed.
		printf("you are not eligible to join \n");
	return 0;
}

