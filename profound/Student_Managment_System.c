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
    scanf("%s", emp[i].salary);
	
	//increment of i bcoz while adding new employee then its add in new position.
	i++;
}

int main(){
	add_Employee();
	return 0;
}
