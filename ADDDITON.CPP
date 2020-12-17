/* addition of two matrix */


#include<stdio.h>
#include<conio.h>
void main()
{
   int a[3][3],b[3][3],c[3][3];
   int i,j,s=0;
   printf("Enter a 1st matrix\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
	scanf("%d",&a[i][j]);
       }
     }
    printf("Enter a 2nd  matrix\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
	scanf("%d",&b[i][j]);
       }
     }

      for(i=0;i<3;i++)
       {
	for(j=0;j<3;j++)
	{
	 s=0;
	  s=a[i][j]+b[i][j];
	  c[i][j]=s;
	 }
      printf("The addition of two matrix is\n");
	for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	  {
	    printf("%d  "c[i][j]);
	  }
	}
	getch();
    }
