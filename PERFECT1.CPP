/* the no is perfect or not */

#include<stdio.h>
#include<conio.h>
main()
 {
   int n,i,sum=0,r;
   
   printf("enter a no");
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {   
      r=n%i;
      if(r==0)
       sum=sum+i;
   }
   if(n==sum)
   printf("the no %d is perfect",n);
   else
   printf("the no %d is not perfect",n);
   getch();
   return(0);
   }
