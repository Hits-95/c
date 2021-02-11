#include "stdio.h"
#include "conio.h"
#include "malloc.h"
#include "string.h"

//department structure
typedef struct {
    int dept_no;
    char dept_name;
    float fees;
}Department;
//student structure
typedef struct {
    int rollno;
    char name[10];
    char college[10];
    Department dept ;

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
            scanf("%s", stud[i].name);
            printf("\n\t Enter College : \t");
            scanf("%s", &stud[i].college);
            return stud;
        }
    }else
        printf("Memory allocation error...");
}
//display single student here...
void displayStudent(Student stud){
    printf("\n\t Rollno : %s", stud->rollno);
    printf("\n\t Name : %s", stud->name);
    printf("\n\t College: %s", stud->college);
    printf("\n\t --- About Department ---");
    printf("\n\t Department No : %d", stud->rollno);
    printf("\n\t Name : %s", stud->rollno);
    printf("\n\t Fees : %s", stud->rollno);
    printf("\n\t -------------------");
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

        printf("\n\t Enter your choice : \t");
        scanf("%d",&ch);
        switch(ch){
            case 1 :
                limit = getLimit();
                break;
            case 2 :
                stud = getStudent(limit);
                {


                for(int i = 0; i<limit :i++){
                        displayStudent(stud[i]);

                }
				//hitesh ahire
            break;
            }
        }//end of switch

    }while(ch);
    return 0;
}