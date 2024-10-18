#include<stdio.h>

int main(){
	// example 1: default precedence
	int ex1 = 20 + 10 * 2;
	printf("Example 1 : %d \n", ex1);

	// example 2: use explicit parentheses
	int ex2 = (20 + 10) * 2;
	printf("Example 2 : %d \n", ex2);
	return 0;
}

/* 
BODMAS is a short form for Brackets, Orders/Of, Division, Multiplication, Addition and Subtraction.it is also known as PEDMAS Parentheses, 
Exponents, Division, Multiplication, Addition and Subtraction.

When two or more of them have the same precedence and participate next to each other in an expression, the evaluation conceptually proceeds 
from left to right.

Priorirt	Operators
1st		()
2nd		* / %
3rd		+ -
4th		=
*/