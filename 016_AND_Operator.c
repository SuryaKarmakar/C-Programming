#include<stdio.h>

int main(){
	char adharCard = 'y';
	char panCard = 'y';

	// if both of the conditions are ture then it will execute ...
	if ((adharCard == 'y') && (panCard == 'y'))
		printf("You are eligible to join\n");
	else
		printf("you are not eligible to join\n");
return 0;
}
