#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "stdbool.h" //use for boolean data types

/*
*** Structures ***
*/

//login struct
typedef struct {
	char user_name[30];
	char password[30];
}LOG_IN;

//structure for atm system
struct {
	int atm_id;
	float atm_total_cash;
	LOG_IN login;
} atm;

//structure for users
typedef struct {
	int user_id;
	int pin;
	char name[10];
	float user_total_cash;
	LOG_IN login;
};

/*
*** Functions ***
*/

//initialize ATM details
void initATM(){
	atm.atm_id = 4533;
	atm.atm_total_cash = 50000;
	strcpy(atm.login.user_name, "hits.ahire95@gmail.com");
	strcpy(atm.login.password,  "Niki@98");
}

//display all about ATM
void displayATM(){
	printf("\n\t\t ****** About ATM ****** ");
	printf("\n\t---------------------------------------");
	printf("\n\t ATM  ID           : %d   ", atm.atm_id);
	printf("\n\t Total Cash in ATM : %.2f ", atm.atm_total_cash);
	printf("\n\t User Name         : %s   ", atm.login.user_name);
	printf("\n\t Pass Word         : %s   ", atm.login.password);
}

//check validation for ATM system login
bool isValidLogin(char user_name[], char password[]){
	return( !strcmp(atm.login.user_name, user_name) && !strcmp(atm.login.password, password) );
}


/*
*** Main methos ***
*/
int main(){
	char user_name[30], password[30];
	int ch, action;
	//set up ATM
	initATM();


	do{
		printf("\n\t********Welcome to ATM Service**************");
		printf("\n\t 1 : System Login only. ");
		printf("\n\t 2 : Use ATM ");
        printf("\n\t*********************************************");

		printf("\n\t Enter Choice :\t");
		scanf("%d", &ch);

		switch(ch){
			case 1 :
				printf("\n\t Enter USe-Name :\t");
				scanf("%s", &user_name);
				printf("\n\t Enter Pass-Word :\t");
				scanf("%s", &password);

				if(isValidLogin(user_name, password)){
					displayATM();
				}else
					printf("\n\t Invalide users....");
			break;
			case 2 :
			    do{
                	printf("\n\t********User ATM Service**************");
                    printf("\n\t 1 : Check Balance");
                    printf("\n\t 2 : Withdraw Cash");
                    printf("\n\t 3 : Deposit Cash");
                    printf("\n\t 4 : Quit");
                    printf("\n\t*********************************************");
                    printf("Enter your choice :\t");
                    scanf("%d", &action);

                    switch(action){
                    	case 1 :
                    	break;
                    	case 2 :
                    	break;
                    	case 3 :
                    	break;
                    	case 4 :
                    	break;
                    	default : printf(" Invalide choice....");

                    }

				}while(action != 4);
			break;
			default : printf("\nt Invalide Choice... ");

		}
	}while(ch != 2);
	return 0;
}