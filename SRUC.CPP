/*structure program*/

#include<stdio.h>
#include<conio.h>
struc add
{
  int a,b,c=0;
  char *s;
  };
  main()
  {
    int x,i;
    printf(" enter name of student \n and marks of two subject");
    gets(x.s);
    scanf("%d%d",&x.a,&x.b);
    x.c=x.a+x.b;
    for(i=0;i<10;i++)
    printf("%c",x.s[i]);
    printf(" the total is = %d",x.c);
	getch();
	return(0);
	}
