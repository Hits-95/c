#include <stdio.h>
#include <stdlib.h>

int array[7], i, sum = 0, limit;
float avg = 0;


int getLimit(){
   
    printf("\n Enter the limit for array : \t");
    scanf("%d", &limit);
   
    return limit;
}

int scanArray(int l){
   
    //limit = l;
    printf("\n Enter %d array elements: \t", l);
    for(i = 0; i < l; i++){
       
        scanf("%d", &array[i]);    
    }  
   
    return array;
}

void printArray(int a[], int l){
   
    printf("\n %d Array elements: \t",l);
    for(i = 0; i < l; i++){
       
        printf("\n %d", a[i]);    
    }
}

float average(int a[], int l){
   
    printf("\n Avg of array elements :\t");
    for(i = 0; i < l; i++){
       
        sum += a[i];
    }
   
    avg = sum / l;
    printf("%.2f", avg);
}

int main(){
   
    int choice, lim, a1[10];
    do{
       
        printf("\n ***** Array Operations Basic ******");
        printf("\n 1. Limit ");
        printf("\n 2. Scan Array");
        printf("\n 3. Print");
        printf("\n 4. Average");
        printf("\n 5. Exit");
       
        printf("\n Enter your  choice :\t");
        scanf("%d", &choice);
       
        switch(choice){
           
            case 1:
                lim = getLimit();
                break;
           
            case 2:
                a1 = scanArray(lim);
                break;
               
            case 3:
                printArray(a1, lim);
                break;
               
            case 4:
                average(a1, lim);
                break;
               
            case 5:
                exit(0);
               
            default:
                printf("\n Invalid choice...");
                break;
        }
    }while(choice != 5);

    return 0;
}

