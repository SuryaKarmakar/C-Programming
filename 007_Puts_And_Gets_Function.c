#include <stdio.h>

int main(){
	char str1[10];
	char str2[10];

	// gets() this function recive a input from console.
	puts("Enter a strings : ");
	gets(str1);

	// fgets() this function also recive a input from console.
	puts("Enter a another strings : ");
	fgets(str2, 10, stdin);

	// puts() this function print the output.
	puts(str1);
	puts(str2);
	
	return 0;
}
	/*gets() function enables the user to enter some characters followed by the enter key. All the characters entered by the user get stored in a character array. 
	The null character is added to the array to make it a string. The gets() allows the user to enter the space-separated strings. It returns the string entered by 
	the user.
	*/
	/*The gets() function is risky to use since it doesn't perform any array bound checking and keep reading the characters until the new line (enter) is encountered.
	It suffers from buffer overflow, which can be avoided by using fgets(). The fgets() makes sure that not more than the maximum limit of characters are read.
	*/
	/*puts() function is very much similar to printf() function. The puts() function is used to print the string on the console which is previously read by using gets()
	or scanf() function. The puts() function returns an integer value representing the number of characters being printed on the console. Since, it prints an additional
	newline character with the string, which moves the cursor to the new line on the console, the integer value returned by puts() will always be equal to the number of 
	characters present in the string plus 1.
	*/