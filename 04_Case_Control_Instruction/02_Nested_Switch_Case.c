#include<stdio.h>

int main(){ 
	int x = 1, y = 'b'; 
	
	switch (x){ 
	case 1:
	 // Nested switch case
		switch (y){ 
		case 'a': 
			printf("Choice is a\n"); 
			break; 
		case 'b': 
			printf("Choice is b\n"); 
			break; 
		} 
		break; 
	case 2: 
		printf("Choice is 2\n"); 
		break; 
	case 3: 
		printf("Choice is 3\n"); 
		break; 
	default: 
		printf("Choice is other than 1, 2, or 3\n"); 
		break; 
	} 
	return 0; 
} 

