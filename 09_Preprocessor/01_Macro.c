
#include <stdio.h>

// #[directive] [macro template] [macro expansion]
#define PI 3.1428 //define PI as a 3.1428 value, it means PI work as a 3.1428 float value.
#define PRINT printf("Result is %f\n",area) //same here defiend PRINT work as full printf statement.

int main(){
	// during preprocssing every macro templete gets replaced with its corresponding macro expansion.
	float r = 6.25, area;
	area = PI * r * r;
	PRINT;
	return 0;
}