/*sting lengh without using standard function*/


#include<stdio.h>
#include<conio.h>
int main()
{
   int l=0;
   char *s;
   
   printf(" Enter any word :-  ");
   gets(s);
    while(s[l])
    l++;
     printf(" The no of word are %d ",l);
     getch();
     return(0);
     }
