#include<stdio.h>

int main(){
	int i, j;
	/* in some time we want to take the control to the beginning of the loop, bypassing the statements inside the loop, which 
	have not yet been executed.
	when continue is encountered inside any loop, then the control automatically passes to the beginning of the loop... */
	for(i = 1; i < 10; i++){
		/* so here when i equal to 5, then the continue statement execute and the loop control jump to the beginning of the 
		loop, it means print statement not execute in this case... */
		if(i == 5)
			continue;
		printf("%d\n", i);
	}
	
	return 0;
}
