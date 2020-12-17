/*find give no is prime using function */


#include"conio.h"
#include"stdio.h"
prm(int x)
{
  int i,f=0;
  for(i=2;i<x;i++)
  {
     if(x%i==0)
     f++;
  }

    return(f);

}
void main()
{
    int n;
    clrscr();
    printf("enter a no");
    scanf("%d",&n);
    if(prm(n)==0)
    printf("the no %d is prime",n);
    else
    printf("the no %d is not prime ",n);
    getch();
}


