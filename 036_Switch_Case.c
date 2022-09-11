#include<stdio.h>

int main(){
	int choice;

	printf("Enter your choice [1: c 2: c++ 3: python 4: java ] ");
	scanf("%d",&choice);

	switch (choice){
		case 1:
			printf("learn c programming\n");
			// with out break, if and only any case will be true then, after that case every case should be execute....
			//so it is importent to put break in every case 
			break;
		case 2:
			printf("learn c++ programming\n");
			break;
		case 3:
			printf("learn python programming\n");
			break;
		case 4:
			printf("learn java programming\n");
			break;
		default :
			// no need a break statemetn after the default, since on reaching the default case, the control comes out of the switch anyway...
			printf("wrong choice\n");
	}
	return 0;
}
