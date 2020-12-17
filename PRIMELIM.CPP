/*find prime nos in given range */

#include<stdio.h>
#include<conio.h>
 main()
 {
  int n,flag=0 ,i,j;
  clrscr();
  printf("Enter a limite ");
  scanf("%d",&n);
  for( j=0;j<=n;j++)
  {
    for(i=2;i<j;i++)
    {
     if(n%i==0)
     {
       flag++;

       }
     }
     if(flag==0)
     printf("the no %d is prime",n);
  }
  getch();
  return(0);
  }
