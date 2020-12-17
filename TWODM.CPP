/*2D matrix I/P or O/P*/


#include<stdio.h>
#include<conio.h>
main()
{
  int  i,j,a[3][3];
  clrscr();
  printf(" enter a elements");
     for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {

      scanf("%c",&a[i][j]);
     }
   }
   printf(" the  given martix is \n");
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
     printf("%c  " ,a[i][j]);
     }
     printf("\n");
     }
     getch();
     return(0);


     }
