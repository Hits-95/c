/* for finding largest no in array */



#include<stdio.h>
#include<conio.h>
main()
{
  int t,a[10],i,j,l;
  printf(" enter 10 no");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);
 l=a[i];
 for(i=0;i<10;i++)
 {
   if (l<a[i])
   {   t=l;
      l=a[i];
      a[i]=t;
    }
  }
   printf(" the lagest no is %d  ",l);
   getch();
   return(0);
   }
