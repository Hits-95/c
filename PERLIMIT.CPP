#include<stdio.h>                         .
#include<conio.h>
main()
{
  int a,b,i,j,s;
  clrscr();
  printf("enter a limite ");
  scanf("%d%d",&a,&b);
  for(i=a;i<=b;i++)
  {    s=0;
     for(j=1;j<i;j++)
     {
     if(i%j==0)
       s=s+j;
     }
     if(s==i)
     printf(" the perfect no is %d \n",i);
  }
      getch();
      return(0);
      }