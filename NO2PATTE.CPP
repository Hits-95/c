/* pattern program */


#include<stdio.h>
#include<conio.h>
void main()
{
  int n,j,c=1;
  printf(" enter a no");
  scanf("%d",&n);
      
      while(n>=1)
      {
	j=1;
	while(j<=n)
	{
	  printf("%d",c);
	  c++;
	  j++;

	}
	  printf("\n");
	  n--;
	  }
	  getch();
	  }
