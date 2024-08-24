#include<stdio.h>

void areaPerimeter(int r, float *a, float *p){
	// here we are return 2 valuse's indirectly using pointer
	*a = 3.14 * r * r;
	*p = 2 * 3.14 * r;
}

int main(){
	int radius;
	float area, perimeter;

	printf("[+]Enter the value of radius : ");
	scanf("%d",&radius);

	areaPerimeter(radius,&area,&perimeter);
	
	printf("Area is : %f\n",area); 
	printf("Perimeter is : %f\n",perimeter);
	
	return 0;
}