#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
//global variables
int i, j, space;

// regular pyramid
void pyramid(int size){
    //run for rows...
    for(i = 0, space = size-1; i < size; i++, space--){
    	//run for spaces
    	for(j = 0; j < space; j++)
    		printf(" ");
    	//run for print star
    	for(j = 0; j <= i; j++)
    		printf("* ");
    	printf("\n");
    }
}

//reverse pyramid
void reversePyramid(int size){
 //run for rows...
    for(i = size, space = 0; i > 0; i--, space++){
    	//run for spaces
    	for(j = 0; j < space; j++)
    		printf(" ");
    	//run for print star
    	for(j = 0; j < i; j++)
    		printf("* ");
    	printf("\n");
    }
}

//main body
int main(){
    int ch, size;
    //menu
    do{
        printf("\n\t   >>> MENU <<<");
        printf("\n\t 1 : Pyramid");
        printf("\n\t 2 : Reverse - Pyramid");
        printf("\n\t 3 : Kite");
        printf("\n\t 4 : Exit");

        printf("\nEnter Choice : \t");
        scanf("%d",&ch);

        if(ch != 4){
            printf("\nEnter Size   : \t");
            scanf("%d",&size);
        }

        switch(ch){
            case 1 :
                  pyramid(size);
            break;
            case 2 :
                  reversePyramid(size);
            break;
            case 3 :
                  pyramid(size);
                  reversePyramid(size);
            break;
            case 4 : exit(0);
            default : printf("Invalid choice ...");

        }
    }while(ch != 4);
    return 0;

}
