/* the no is prime or not */

#include<stdio.h>
#include<conio.h>
main()
{
  int n,flag=0 ,i ;
  clrscr();
  printf("enter a no \a\a");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
    if(n%i==0)
    {
      flag++;

      }
    }
    if(flag==0)
    printf("the no %d is prime",n);
    else
    printf("the no %d is not prime ",n);
    getch();
    return(0);
    }
