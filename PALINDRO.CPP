/*no is palindrome or not*/

#include<stdio.h>
#include<conio.h>
void main()
{
  int n,t,r,s=0;
  clrscr();
  printf(" enter no");
  scanf("%d",&n);
	  t=n;
    while(n>0)
    {
      r=n%10;

      s=(s*10)+r;

      n=n/10;
      }
      if(t==s)
      printf("palindrom  =  %d",t);
      else
      printf("not palindrom = %d",t);
      getch();
      }
