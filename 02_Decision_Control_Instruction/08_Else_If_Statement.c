#include<stdio.h>

int main(){
	int marks;

	printf("Enter marks:");
	scanf("%d",&marks);

	//else if is the standard form to checking condition...
	if(marks >= 60)
		printf("first division\n");
	//using else if it reduce the unnecessary execution of rest of the if conditions... 
	else if(marks >= 50)
		printf("second division\n");
	else if(marks >= 40)
		printf("third division\n");
	else
		printf("fail\n");
	
	return 0;
}
