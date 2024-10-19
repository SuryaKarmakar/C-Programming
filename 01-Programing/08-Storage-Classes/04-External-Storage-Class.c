#include<stdio.h>

int x = 20;
extern int y = 20;

void display(){
	/*
	storage - Memory(RAM).
	default value - 0.
	scope - global.
	life - as long as the program's execution doesn't come to an end.
	*/
	x += 1;
	y -= 1;
	printf("x = %d\n",x);
	printf("y = %d\n",y);
}

int main(){
	display();
	return 0;
}
