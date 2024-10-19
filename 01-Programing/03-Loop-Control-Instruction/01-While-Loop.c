#include<stdio.h>

int main(){
	int a = 1;

	/* the statements within the while loop would keep getting executed till the condition being tested remains true. when the condition 
	becomes false, then it will be end the loop */
	while(a <= 10){
		printf("%d\n",a);
		// increment loop counter
		a = a + 1;
	}	
	return 0;
}
