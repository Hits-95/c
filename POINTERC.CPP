/* pointer to pointer concept program (ONLY FOR SELF UNDASTAND)*/


#include<stdio.h>
#include<conio.h>
main()
{
  int a=10;
  int *b;
  clrscr();
  b=&a;
  int **c;
  c=&b;
  printf(" 1 a=%d\n",a);
  printf(" 2 &a =%d\n",&a);

  printf(" 3 b=%d\n",b);
  printf(" 4 &b=%d\n",&b);
  printf(" 5 *b = %d\n",*b) ;

  printf(" 6 c= %d\n",c);
  printf(" 7 &c = %d\n", &c);
  printf(" 8 *c =%d\n",*c);
  printf(" 9 ** c = %d\n",**c);

  getch();
  return(0);
  }
