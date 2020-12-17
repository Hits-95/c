/*addition of two nos using pointer*/


#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 int *x,*y;
 clrscr();
  printf(" enter wo no");
  scanf("%d%d",&a,&b);
  x=&a;
  y=&b;
  c=*x + *y;
  printf(" the addition id %d ",c);
  getch();
  }
