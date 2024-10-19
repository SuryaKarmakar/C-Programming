#include<stdio.h>

int main(){
    // an array is a collection of similar elements. either all are int, float or char.
    // usually, the array of charaters is called a 'string array', whereas an array of ints or floats is called 'simple array'. 

    // array declaration 
    int array[10]; // [10] its define length of the array. the number is often called the 'dimension of the array'.

    // array initialization
    int array2[5] = {1, 2, 3, 4, 5}; // its shows that array can be initialized while declaring them.

    int array3[] = {2, 4, 6, 8, 10}; // when we initialized array while declaring them, that time mentioning the dimension of the array is optional.

    // accessing array elements
    // this number(0,1,2 etc) used in array to specifies the elements position in the array. its called 'subscripts' and the array is called 'subscripted variable'.
    printf("%d\n", array2[2]); 
    printf("%d\n", array3[0]); 

    return 0;
} 