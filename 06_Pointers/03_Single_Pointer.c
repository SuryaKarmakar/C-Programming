#include<stdio.h>

int main(){
	int i = 3;
	// this declaration tells the compiler that j will be used to store the address of an integer value...
	int *j;	
	// here j is holding the address of i
	j = &i;

	// &i = address of i (6522)
	// &j = address of j (6523)
	// *(&i) = value of i's address (3)
	// *j = value of stored address

	printf("Address of i %u\n", &i); 
	printf("Address of i %u\n", j);
	printf("Address of j %u\n", &j);
	printf("Value of j %d\n", j);
	printf("Value of i %d\n", i);
	printf("Value of i %d\n", *(&i));
	printf("Value of i %d\n", *j);
	
	return 0;
}
