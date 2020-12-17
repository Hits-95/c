#include "stdio.h"
#include "stdlib.h"    //use for Exit function)...

int main() {
	int ch;
	double qua, bug, amt;

	printf("\n\t\t\t Enter your budget : ");
	scanf("%lf",&bug);
	
	if(bug<25){
		printf("\n\t Your budget is not  sufficient ... ");
		goto end;
	}
	
	do{
	   //Manu...
		printf("\n\n\t 1 : Apple (rate)  200/kg.");
		printf("\n\t 2 : Cake  (rate)  24/kg.");
		printf("\n\t 3 : Bread (rate)  30/kg.");
		printf("\n\t 4 : Exit.");
		printf("\n\t ---------------------------\n");

		printf("\n\t\t\t Enter your choice : ");
		scanf("%d",&ch);
		
		switch(ch){
			case 1 : printf("\n\t\t\t Enter quantity for Apple(200/kg) : ");
	           		 scanf("%lf",&qua);
					 amt = 200 * qua;
					 if(bug < amt){
						printf("\n\t your Can't perches it, Amount is greater than budget ... ");
						goto end;
					}
					else{
						bug = bug - amt;
						 printf("\n\t Cuurent bill amount is %lf ",amt);
						printf("\n\t Remaining budget is %lf ",bug);
					}
			break;
			case 2 : printf("\n\t\t\t Enter quantity for Cake(24/kg) : ");
	           		 scanf("%lf",&qua);
					 amt = 24 * qua;
					 if(bug < amt){
						printf("\n\t your Can't perches it, Amount is greater than budget ... ");
						goto end;
					}
					else{
						bug = bug - amt;
						printf("\n\t Cuurent bill amount is %lf ",amt);
						printf("\n\t Remaining budget is %lf ",bug);
					}
			break;
			case 3 : printf("\n\t\t\t Enter quantity for Bread(30/kg) : ");
	           		 scanf("%lf",&qua);
					 amt = 30 * qua;
					 if(bug < amt){
					 	printf("\n\t Cuurent bill amount is %lf ",amt);
						printf("\n\t your Can't perches it, Amount is greater than budget ... ");
						goto end;
					}
					else{
						bug = bug - amt;
						printf("\n\t Remaining budget is %lf ",bug);
					}
			break;
			case 4 : exit;
		}
	}while(ch<=3);
	end : getch();
	return(0);
}

