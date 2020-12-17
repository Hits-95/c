/* find out give no is even or odd */




#include<stdio.h>
#include<conio.h>
eo(int x)
{
  if(x%2==0)
  return(0);
  else
  return(1);
  }
  main()
  {
  int a;
  clrscr();
  printf("enter no");
  scanf("%d",&a);
  if(eo(a)==0)
  printf("even",a);
  else
  printf("odd",a);
  getch();
  }
