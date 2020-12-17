#include<stdio.h>
#include<conio.h>
void main()               /* pyramid for no */
{
  int n,a,b;                  /*       11        */
  printf("Enter a value");    /*      1221        */
  scanf("%d",&n);             /*     123321       */
     for(a=1;a<=n;a++)        /*    12344321      */
   {
     for(b=n-a;b>0;b--)
     printf(" ");

      for(b=1;b<=a;b++)
      printf("%d",b);

	for(b=b-1;b>0;b--)
	printf("%d",b);
	printf("\n");
    }
	 getch();
}