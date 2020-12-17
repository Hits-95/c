/* count no of vowel and consanent in */
/*			 given string*/


#include<stdio.h>
#include<conio.h>
#include<string.h>
			 
main()
{
 int l,i,c=0,m=0;
 char *s;
 clrscr();
   printf("enter a string");
   gets(s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
      switch(s[i])
      {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':c++;
	}
      }
      printf("the no of vowel in given string is = %d  \n",c);
	 m=l-c-1;
     printf(" no of consanent in give string is =%d ",m);
     getch();
     return(0);
  }
