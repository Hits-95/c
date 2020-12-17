/* the given string revous without using standard function*/



#include<stdio.h>
#include<conio.h>
main()
{
  int l=0,i;
  char *s;
  printf(" enter a string ");
  gets(s);

  while(s[l])
  l++;
  for(i=l-1;i>=0;i++)
  {
    printf(" the given string revous are\n");
    printf("%c",s[i]);
  }
  getch();
  return(0);
  }
