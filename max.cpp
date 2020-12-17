#include<stdio.h>
#include<conio.h>

int MAX(int *a,int n){
    
    int max;
    max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max)
        max=a[i];
    }
     return(max);
}  

//READ ARRAY FUNCTION
void READ(int *s,int m){	
         printf("\n ENTER %d NUMBER =>");
         for(int i=0;i<m;i++){
            scanf("%d",&s[i]);
         }
}             
int main(){
        int a[10],max;
        int n;
        printf("\n ENTER VALUE OF N=>");
        scanf("%d",&n);
        READ(a,n);
        max=MAX(a,n);
        printf("\n THE MAXIMUM NUMBER IS %d",max);
        getch();
        return 0 ;
}
