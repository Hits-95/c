/* print pattern into charecters */


#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,j;
   char a='a';
   clrscr();
   printf(" enter a no");
   scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
       {

	 printf("%s  ",a);

       }
       printf("\n");
   }
   getch();
 }
