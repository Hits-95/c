#include<stdio.h>
#include<conio.h>

float fact(int x){
     int sum;

       if(x!=1)
         sum= x*fact(x-1);
	else
	return x;
         return sum;

}

int main(){
       int x,m;

       printf("\n ENTER A NUMBER :- ");
       scanf("%d",&x);

       m=fact(x);
       printf("\n THE FACTORIAL IS = %d",m);
       getch();
       return(0);
}
