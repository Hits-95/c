/*to find give no is Armstrong or not using function*/ 

#include<stdio.h>
#include<conio.h>
arm(int x)
{
 int r,s=0,t;
       t=x;
   while(x>0)
   {
   r=x%10;
   s+=(r*r*r);
   x=x/10;
   }
    if(t==s)
   return(0);
   else
     return(1);
     }

     main()
     {
      int n;
      clrscr();
      printf("enter no");
       scanf("%d",&n);

       if(0==arm(n) )
	 printf("arm no  %d",n);
       else
	 printf(" not arm no %d ",n);
       getch();
       }
