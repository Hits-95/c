#include<stdio.h>
#include<conio.h>

 void qsort(int x[],int lb,int ub)
 {
 int j;
  while(lb<ub)
  {
   j=partition(x,lb,ub);
   qsort(x,lb,j-1);
   qsort(x,j+1,ub);
  }
 }


int partition(int x[],int lb,int ub)
{
  int dn,up;
  int pivot,temp;
  dn=lb+1;
  up=ub;
  pivot=x[lb];
  do
  {
   while(x[dn]<pivot && dn<=ub)
   dn++;

   while(x[up]>pivot && up>lb)
   up--;
   if(dn<up)
   {
    temp=x[dn];
    x[dn]=x[up];
    x[up]=temp;
   }
   }while(dn<up);

   x[lb]=x[up];
   x[up]=pivot;
   return(j);
 }

  main()
 {
 int x[10],n;
  clrscr();
  printf("\n Enter how many no`s = ");
  scanf("%d",&n);
  printf("\n Enter a %d numbers ",n);
  for(int i=0;i<n;i++)
  {
   scanf("%d",&x[i]);
  }
  qsort(x,0,n-1);
  printf(" \n The bubble sort are \n");
  for(i=0;i<n;i++)
  printf("%d\n",x[i]);
  getch();
  return(0);
 }

