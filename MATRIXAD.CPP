
/* matrix sum  */


#include<stdio.h>
#include<conio.h>



 void main()                          
 {
   int a[100][100],c[100]={0};
   int m,n,s,i,j;

   clrscr();

   printf("Enter how many row's & col's = \n");
   scanf("%d%d",&m,&n);

   printf("\n Enter value of %d x %d matrix \n",m,n);
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    }

    printf("\n The give matrix is \n");
    for(i=0;i<m;i++)
    {
      s=0;
     for(j=0;j<n;j++)
     {
	s=s+a[i][j];
	c[j]=c[j]+a[i][j];
	printf("%4d",a[i][j]);
      }
      printf(" = %4d \n",s);
   }
  for(i=0;i<m;i++)
  printf( " \n  %4d  ",c[i]);
  getch();
  }
















