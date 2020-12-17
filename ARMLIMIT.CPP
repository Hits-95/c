/*program for finding many armsrong no in given limite */

#include<stdio.h>
#include<conio.h>
 void main()
 {
   int n,i,s,r,l=0;
   clrscr();
   printf(" Enter the limit = ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       l=i;
       s=0;
       while(l>0)
       {
	  r=l%10;
	  s=s+(r*r*r);
	  l=l/10;
       }

       if(s==i)
	  printf(" The armstrong nos are %d = \n",i);
    }
    getch();
 }
