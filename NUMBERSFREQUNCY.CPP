//HIT`S

 #include<stdio.h>
 #include<conio.h>

 //FREQUNCY COUNT FUNCTON
 void FEQUNCY(int *a,int *c,int n){
	           	         	         
             for(int i=0;i<n;i++)
                 c[a[i]]=c[a[i]]+1;         
 } 

 // DISPLAY RESULT
 void RESULT(int *c,int max){
	
            for(int i=0;i<=max;i++){
            	 if(c[i]!=0)
                 printf("\n\t\tTHE NUMBER %d OCCURES => %d TIME.",i,c[i]);
            }
 }

 //FIND MAXIMUM NUMBER            
 int MAX(int a[],int n){
    
        int max=a[0];
    
        for(int i=0;i<n;i++){
           if(a[i]>max)
              max=a[i];
        }
        return(max);
 }       

 //READ ARRAY FUNCTION
 void READ(int *s,int m){
	
         printf("\n\tENTER %d NUMBER =>",m);
         for(int i=0;i<m;i++)
            scanf("%d",&s[i]);
 }
 
 //MAIN        
 int main(){
        int a[10],n;
        int c[100]={0};
                
        printf("\n\tHOW MANY NUMBERS AE YOU ENTER =>");
        scanf("%d",&n);
        
        READ(a,n);
        FEQUNCY(a,c,n);
        RESULT(c,MAX(a,n));
        
        getch();
        return(0);
}
