	 /* addition of I/P no in array*/

       //#include<stdio.h>
//	 #include<conio.h>

	 main()
	 {
	 int a[10],i,s=0;
	 
	 printf(" enter a no ");
	 for(i=0;i<10;i++)
	 scanf("%d",&a[i]) ;
	 for(i=0;i<10;i++)
	 {
	   s+=a[i];
	 }
	 printf(" the addition is %d  ",s);
	 getch();
	 return(0);
	 }
