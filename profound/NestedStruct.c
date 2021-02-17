#include "stdio.h"
#include "conio.h"
#include "malloc.h"
#include "string.h"

//department structure
typedef struct {
    int dept_no;
    char dept_name[10];
    float fees;
}Department;
//student structure
typedef struct {
    int rollno;
    char name[10];
    char college[10];
    Department dept;
}*Student;
/*
*** Global functions ...
*/
int getLimit(){
    int limit;
    printf("\n\t Enter Limit : \t");
    scanf("%d", &limit);
    return limit;
}
//insert all students in here....
Student getStudent(int limit){
    //allocation for studet
    Student stud = (Student*) malloc(sizeof(Student));
    if(stud){
        printf("\n\t Enter %d Students info.", limit);
        for(int i = 0; i < limit; i++){
            printf("\n\t Enter Roll no : \t");
            scanf("%d", &stud[i].rollno);
            printf("\n\t Enter Name    : \t");
            scanf("%s", &stud[i].name);
            printf("\n\t Enter College : \t");
            scanf("%s", &stud[i].college);

            //for department
            printf("\n\t Departments ");
            printf("\n\t 1 : IT");
            printf("\n\t 2 : Medical");
            printf("\n\t 3 : Math");
            int ch;

            again_department : printf("\n\t Department : \t");
            scanf("%d", &ch);

            switch(ch){
                case 1 :
                    stud[i].dept.dept_no = 01;
                    strcpy( stud[i].dept.dept_name, "IT");
                    stud[i].dept.fees = 60000;
                break;
                case 2 :
                    stud[i].dept.dept_no = 02;
                    strcpy( stud[i].dept.dept_name, "Medical");
                    stud[i].dept.fees = 100000;
                break;
                case 3 :
                    stud[i].dept.dept_no = 03;
                    strcpy( stud[i].dept.dept_name, "Math");
                    stud[i].dept.fees = 80000;
                break;
                default :
                    printf("\n\t Invalid input .... plase try again...");
                    goto again_department;
            }//end of switch..
        }//end of for
    }else
        printf("Memory allocation error...");
    return stud;
}
//display All student here...
void displayAllStudent(Student stud, int limit){

    for(int i = 0; i < limit; i++){
		printf("\n\t Roll No         :  %d", stud[i].rollno);
        printf("\n\t Name            :  %s", stud[i].name);
        printf("\n\t College         :  %s", stud[i].college);
		printf("\n\t Department No   :  %d", stud[i].dept.dept_no);
		printf("\n\t Department Name :  %s", stud[i].dept.dept_name);
		printf("\n\t Feed            :  %.2f", stud[i].dept.fees);
		printf("\n\t ------------------------");
    }
}

//display stingle Student
void displayStudent(Student stud, char dept_name[], int limit){
    for(int i = 0; i < limit; i++){
        if(!(strcmp( stud[i].dept.dept_name, dept_name))){
    		printf("\n\t Roll No         :  %d", stud[i].rollno);
            printf("\n\t Name            :  %s", stud[i].name);
            printf("\n\t College         :  %s", stud[i].college);
    		printf("\n\t Department No   :  %d", stud[i].dept.dept_no);
    		printf("\n\t Department Name :  %s", stud[i].dept.dept_name);
    		printf("\n\t Feed            :  %.2f", stud[i].dept.fees);
    		printf("\n\t ------------------------");
        }else
            printf("\n\t Not Mach");
    }
}

//main body
int main(){
    int ch, limit,i;
    Student stud;

    do{
        printf("\n\t *** MENU **** \n\t-------------------");
        printf("\n\t 1 : Get Limit");
        printf("\n\t 2 : Insert Students info");
        printf("\n\t 3 : Get All Students info");
        printf("\n\t 4 : Get All IT Students info");
        printf("\n\t 5 : Get All Medical Students info");
        printf("\n\t 6 : Get All Math Students info");
        printf("\n\t 7 : Exit");
        printf("\n\t   ---~~~***~~~---");

        try_again : printf("\n\t Enter your choice : \t");
        scanf("%d",&ch);
        switch(ch){
            case 1 :
                limit = getLimit();
            break;
            case 2 :
                stud = getStudent(limit);
            break;
            case 3 :
                displayAllStudent(stud, limit);
            break;
            case 4 :
                displayStudent(stud, "IT", limit);
            break;
            case 5 :
                displayStudent(stud, "Medical", limit);
            break;
            case 6 :
                displayStudent(stud, "Math", limit);
            break;
            case 7 :
                exit(0);
            break;
            default :
                printf("\n\t Invalid choice.... try again....");
                goto try_again;

        }//end of switch

    }while(ch != 7);
    return 0;
}