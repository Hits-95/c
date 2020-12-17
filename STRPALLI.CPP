/* The give string is pallindrom or not*/

#include<stdio.h>
#include<conio.h>

  void main()
  {
     char a[10],b[10];
     int i,fl=0,j,l;
     clrscr();

     printf("Enter a string = \n");
     gets(a);

     l=0;
     while(a[l])
     l++;

     for(i=l-1,j=0;i>=0;i--,j++)
     {
	b[j]=a[i];
      }
      b[j]='\0';


     for(i=0;i<l;i++)
     {
	if(b[i]!=a[i])
	fl++;
     }
      if(fl==0)
	   printf("The give string is pallindrom ");
       else
	  printf("The given string is not pallindrom");
      getch();
  }
