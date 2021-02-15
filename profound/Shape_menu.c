#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
int main() {
	int choice;
	float pi = 3.14, radius, base, height;
	
	do{
		printf("\n\n****** Operations *******");
        printf("\n 1. Area of Circle");
        printf("\n 2. Area of Tringle");
        printf("\n 3. Volume of Sphere");
        printf("\n 4. Volume of Cylinder");
        printf("\n 5. Exit");
        
        printf("\n Enter your choice : \t");
        scanf("%d", &choice); 
        
        switch(choice){
			case 1 : 
				printf("\n Enter Radius : \t");
				scanf("%f",&radius);
				printf("\n Area of Circle : \t%f ", (pi * radius * radius));
			break;
			case 2: 
				printf("\n Enter Base X Height : \t");
				scanf("%f%f",&base, &height);
				printf("\n Area of Tringle : \t%f ", (0.5 * base * height));
			break;
			case 3 : 
				printf("\n Enter Radius : \t");
				scanf("%f",&radius);
				printf("\n Volume of Sphere: \t%f ", ((4/3) * pi * radius * radius * radius));
			break;
			case 4 : 
				printf("\n Enter Radius X Height: \t");
				scanf("%f",&radius, &height);
				printf("\n Volume of Cylinder : \t%f ", (pi * radius * radius * height));
			break;
			case 5 : 
				exit(0);
			break;
			default:
            	printf("\n Invalid choice");
		}
	}while(choice != 5);
	
	getch();
	return 0;
}

