
#include<stdio.h>
#include<conio.h>
main()

{
  int b, n,s=0;
  clrscr();
  printf("enter no");
  scanf("d",&n);

  for(b=1;b<n;b++)
	{
	    if(n%b==0)
	    s=s+b;
	}
	if(n==s)
	printf("the no %d is perfect",n);
	else
	printf(" the no %d is not perfect",n);
	getch();
	return(0);
	}



