
#include "stdio.h"
int main() {
	float l, b, h;
    //get input from user
    printf("Enter length :\t");
    scanf("%f",&l);
    printf("Enter breadth :\t");
    scanf("%f",&b);
    printf("Enter height:\t");
    scanf("%f",&h);
	//Result	
    printf("\nResult :: Volume of cube = \t%f",l*b*h);
    getch();
    return 0;
}

