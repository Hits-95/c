#include "stdio.h"
int main() {
	float r, h;
    //get input from user
    printf("Enter Radius :\t");
    scanf("%f",&r);
    printf("Enter height:\t");
    scanf("%f",&h);
	//Result	
    printf("\nResult :: Volume of cyclender = \t%.2f",(3.14 * r * r* h));
    getch();
    return 0;
}

