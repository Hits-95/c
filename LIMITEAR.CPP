/*the given no is armsrong or not*/

#include<stdio.h>
#include<conio.h>
void main ()
{
  int a,b,r,s=0,i,t;

  clrscr();
  printf(" enter a limite ");
  scanf("%d%d",&a,&b);
  for(i=a;i<=b;i++)
  {
      t=i;

  while(i>0)
  {
     r=i%10;
     s+=(r*r*r);
     i=i/10;
     }
     if(t==s)
     printf(" the arm no are %d\n\n..",t);
     }
     getch();
     }
