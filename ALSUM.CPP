/* I/P string and print it revours */


#include<stdio.h>
#include<conio.h>
main()                            
{
  int l=0,i;
  char *s;
  clrscr();
  printf(" enter a string ");
  gets(s);

  while(s[l])
  l++;
  for(i=l-1;i>=0;i--)
  {
    printf("\ncrevours string is  = %c ",s[i]);
  }
  getch();
  return(0);
  }
