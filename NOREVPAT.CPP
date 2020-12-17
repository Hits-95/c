/*Pattern program*/

#include<stdio.h>
#include<conio.h>
void main ()
{
  int n,i,j;
  printf(" enter no");
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
      for(j=1;j<=i;j++)
      {
       printf("%d",j);
      }
      printf("\n " );
  }
  getch();
  }
