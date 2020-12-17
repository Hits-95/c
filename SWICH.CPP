/*manu drivan program */


#include"stdio.h"
#include"conio.h"
main()
{
int a,b,ch;
clrscr();  printf(" enter two no's\n");
scanf("%d%d",&a,&b);
printf("\n 1 addition \n 2 subtraction \n 3 multiplication \n 4 division \n");
scanf("%d",&ch);
switch(ch)
{
  case 1 :printf("\n the additon of %d and %d is = %d",a,b,a+b);
  break;
  case 2 :printf("\n the subtraction of %d and %d is = %d",a,b,a-b);
  break;
  case 3 :printf("\n the multiplicaonm of %d and %d is  = %d",a,b,a*b);
  break;
  case 4 :printf("\n the division of %d and %d is = %d ",a,b,a/b);
  break;
  }
  getch();
  return(0);
  }
