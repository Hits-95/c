/* find out given no is perfect or not*/


#include<stdio.h>
#include<conio.h>
per(int x)
 {
   int i,sum=0;
   for(i=1;i<x;i++)
   {
      if(x%i==0)
      sum+=i;
   }
   return(sum);
   }
  main()
  {
  int n;
  clrscr();
  printf(" enter a no");
  scanf("%d",&n);
  if(n==per(n))
  printf("the no %d is perfect",n);
  else
  printf(" the no %d is not perfect",n);
  getch();
  return(0);
  }
