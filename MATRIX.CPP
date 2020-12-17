/* matrix row and colm addition */

#include<stdio.h>
#include<conio.h>
  void main()
  {
  int a[3][3],b[3][4],i,j,sum;
  clrscr();

  printf("\n Enter a elements");
   for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
	   scanf("%d",&a[i][j]) ;
     }

  printf("\n The elements of array is \n");
   for(i=0;i<3;i++)
      {
	sum=0;
	for(j=0;j<4;j++)
	  {
	    printf("%d  ",b[i][j]);
	    sum=sum+b[i][j];

	     if(b[i][j]==b[0][3])
	       printf(" = %d",b[0][4]);
	     else
	       {
		 if(b[i][j]==b[1][4])
		    printf("= %d",b[1][4]);
		 else
		  printf("= %d",b[2][4]);
		}
	   }
	   printf("\n");
       }
   getch();
  }
