/*pattern program */

#include<stdio.h>
#include<conio.h>
main()
{
  int n,a=1,b;
  clrscr();
  printf("entera no");
  scanf("%d",&n);
  for(a=1;n>=a;a++)
  {
     for(b=1;a>=b;b++)
	{
	  printf(" *  ");
	 }
	 printf("\n\n");

    }
    getch();
    return(0);
    }
