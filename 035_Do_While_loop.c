#include<stdio.h>

int main(){
	int i = 1;
	/* the do-while test the condition after having executed the statements within the loop. this means that do-while would execute its
	statements at least once, even if the condition fails for the first time... */
	do{
		printf("%d\n", i);
		i++;
	}
	while(i <= 10);
	return 0;
}
