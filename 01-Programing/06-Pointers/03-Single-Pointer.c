#include<stdio.h>

int main(){
	int i = 3;
	// this declaration tells the compiler that j will be used to store the address of an integer value...
	int *j;	
	// here j is holding the address of i
	j = &i;

	// &i = address of i (00001)
	// &j = address of j (00002)
	// *(&i) = value of i's address (3)
	// *j = value of stored address

	printf("Address of i %u\n", &i); // -> 1864496008
	printf("Address of i %u\n", j); // -> 1864496008
	printf("Address of j %u\n", &j); // -> 1864496000
	printf("Value of j %d\n", j); // -> 1864496008
	printf("Value of i %d\n", i); // -> 3
	printf("Value of i %d\n", *(&i)); // -> 3
	printf("Value of i %d\n", *j); // -> 3
	
	return 0;
}
