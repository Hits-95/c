/*structure program*/



#include<stdio.h>
#include<conio.h>

struct student
{                      /* student informatoin l.e. roll no ,name ,marks and */
			 /*  display all details and total and persentage */
  int rollno;
  char name[30];
  int m1,m2,m3;
 } ;
 typedef struct student std ;
 main()
 {
 int t=0;
 float p=0;
 clrscr();
  std l;
 printf(" enter a roll no,name ,marks ");
 scanf("%d%s%d%d%d",&l.rollno,l.name,&l.m1,&l.m2,&l.m3);
 t=l.m1+l.m2+l.m3;
 p=t/3;
 printf("roll no = %d\n",l.rollno);
 printf("name = %s\n",l.name);
 printf("math = %d\n scince = %d\n english = %d \n",l.m1,l.m2,l.m3);
 printf("total = %d\n persentage = %f \n",t,p);
 getch();
 return(0);
 }
