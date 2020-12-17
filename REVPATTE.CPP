/*pattern */

#include<stdio.h>
#include<conio.h>
main()
{
int n,a;
clrscr();
printf("enter a no");
scanf("%d",&n);
while(n>0)
 {
  for(a=1;n>=a;a++)
    {
      printf("*  ");
    }
    printf("\n\n");
    n--;
 }
    getch();
    return(0);
}
