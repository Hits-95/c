// Project for Employee management system
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//global declaration of i bcoz we want to access it thoroght out the all code 
//while adding new employee thats time it helps to us.
int i = 0;

// Structure to store the Employee
struct{
	int empid;
    char fname[20];
    char lname[20];
	char department[20];
	char company[20];
	float salary;  
}emp[50]; // make global variable of employee...

// Function to add the Employeee
void add_Employee(){

    printf("\n\tAdd the Employee Details");
    printf("\n\t-------------------------");
	printf("\n\tEnter ID             :\t");
    scanf("%d", &emp[i].empid);
    printf("\n\tEnter First Name     :\t");
    scanf("%s", emp[i].fname);
    printf("\n\tEnter Last Name      :\t");
    scanf("%s", emp[i].lname);
	printf("\n\tEnter Company Name   :\t");
    scanf("%s", emp[i].company);
	printf("\n\tEnter Department     :\t");
    scanf("%s", emp[i].department);
	printf("\n\tEnter Salary         :\t");
    scanf("%f", &emp[i].salary);
	
	//increment of i bcoz while adding new employee then its add in new position.
	i++;
}

//show the info of all employees
void displayEmployee(){
    for(int j = 0; j < i; j++){
    	printf("\n\tThe Employee Details");
    	printf("\n\t-------------------------------");
    	printf("\n\tID         : %d",emp[j].empid);
    	printf("\n\tFirst Name : %s",emp[j].fname);
    	printf("\n\tLast Name  : %s",emp[j].lname);
    	printf("\n\tCompany    : %s",emp[j].company);
    	printf("\n\tDepartment : %s",emp[j].department);
    	printf("\n\tSalary     : %f",emp[j].salary);
    	printf("\n\t-------------------------------");
    }
}

//Delete Record of Employee
void delete_Employee(){
    int id;
    printf("\n\tEnter Employee Id to Delete Record.");
    scanf("%d", &id);
    
    for(int j = 0; j <= i; j++){
        if(id == emp[j].empid){
            for(int k = j; k < i; k++){
                emp[k] = emp[k + 1];
            }
        }
    }
    //decrement i for one record deleted 
    printf("\n\tOne Record Deleted.");
    i--;
}

//Update Employee 
void update_Employee(){
    int id, ch;
    printf("\n\tEnter Employee Id to Update Record :\t");
    scanf("%d", &id);
    
    for(int j = 0; j <= i; j++){
        if(id == emp[j].empid){
            printf("\n\tEnter which Record filed you want to update :");
            printf("\n\t------------------------------------------------");
            printf("\n\t 1 : First Name.");
            printf("\n\t 2 : Last Name.");
            printf("\n\t 3 : Company.");
            printf("\n\t 4 : Department.");
            printf("\n\t 5 : Salary.");
            printf("\n\tEnter Your Choich :\t");
            scanf("%d",&ch);
            
            switch(ch){
                case 1 : 
                    printf("\n\tEnter New First Name :\t");
                    scanf("%s",emp[j].fname);
                break;
                case 2 : 
                    printf("\n\tEnter New Last Name :\t");
                    scanf("%s",emp[j].lname);
                break;
                case 3 : 
                    printf("\n\tEnter New Company :\t");
                    scanf("%s",emp[j].company);
                break;
                case 4 : 
                    printf("\n\tEnter New Department :\t");
                    scanf("%s",emp[j].department);
                break;
                case 5 : 
                    printf("\n\tEnter New Salary :\t");
                    scanf("%f",&emp[j].salary);
                break;
                
            }
        }
    }
}

//Search Employee
void search_Employee(){
    int ch, id;
    char name[10];
    bool flag = true;
    
    printf("\n\tSearch By Name or Id ");
    printf("\n\t------------------------------------------------");
    printf("\n\t 1 : Id.");
    printf("\n\t 2 : First Name.");
    printf("\n\tEnter Choich :\t");
    scanf("%d", &ch);
    switch(ch){
        case 1 : 
            printf("\n\tEnter ID of Employee which you want to Search :\t");
            scanf("%d",&id);
            for(int j = 0; j < i; j++){
                if(id == emp[j].empid){
                    printf("\n\tThe Employee Found");
                	printf("\n\t-------------------------------");
                	printf("\n\tID         : %d",emp[j].empid);
                	printf("\n\tFirst Name : %s",emp[j].fname);
                	printf("\n\tLast Name  : %s",emp[j].lname);
                	printf("\n\tCompany    : %s",emp[j].company);
                	printf("\n\tDepartment : %s",emp[j].department);
                	printf("\n\tSalary     : %f",emp[j].salary);
                	printf("\n\t-------------------------------");
                	
                	flag = false;
                	break;
                }
            }
            if(flag)
            	printf("\n\tRecord NOT Found!!!!");
        break ;
        case 2 : 
            printf("\n\tEnter First Name of Employee which you want to Search :\t");
            scanf("%s",name);
             for(int j = 0; j < i; j++){
                if(!strcmp(emp[j].fname, name)){
                    printf("\n\tThe Employee Found");
                	printf("\n\t-------------------------------");
                	printf("\n\tID         : %d",emp[j].empid);
                	printf("\n\tFirst Name : %s",emp[j].fname);
                	printf("\n\tLast Name  : %s",emp[j].lname);
                	printf("\n\tCompany    : %s",emp[j].company);
                	printf("\n\tDepartment : %s",emp[j].department);
                	printf("\n\tSalary     : %f",emp[j].salary);
                	printf("\n\t-------------------------------");
                		flag = false;
                	break;
                }
            }
            if(flag)
            	printf("\n\tRecord NOT Found!!!!");
        break ;
    }
}
//main Body
int main(){
	int ch;
	printf("\n\t*********************************************");
	printf("\n\t***** Wel - Come To Employee Management *****");
	printf("\n\t*********************************************");
	while(1){
		printf("\n\t===== MENU ======");
		printf("\n\t 1 : Add Employee.");
		printf("\n\t 2 : Display Employees.");
		printf("\n\t 3 : Delete Employee.");
		printf("\n\t 4 : Update Employee.");
		printf("\n\t 5 : Search Employee.");
		printf("\n\t 6 : Exit.");

		printf("\n\tEnter Your Choich :\t");
		scanf("%d", &ch);

		switch(ch){
			case 1 : 
				add_Employee();
			break;
			case 2 : 
				displayEmployee();
			break;
			case 3 : 
				delete_Employee();
			break;
			case 4 : 
				update_Employee();
			break;
			case 5 : 
				search_Employee();
			break;
			case 6 :
			    printf("\n\tThank You !!!");
			    exit(0);
			break;
			default : printf("\n\tInvalide Choich !!!");
		}
	}
	return 0;
}
