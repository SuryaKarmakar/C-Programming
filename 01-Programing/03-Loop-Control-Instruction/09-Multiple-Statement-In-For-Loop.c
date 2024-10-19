#include<stdio.h>

int main(){
	int i, j;
	/* A for loop can contain multiple or more than one statement separated by a comma. it means we can put multile varible initialization,
	condition checking and incrementation exeprision on a single for loop statement like this ... */
	for(i = 1, j = 10; i < 10, j > 0; i++, j--){
		printf("%d\t%d\n",i,j);
	}
	
	return 0;
}