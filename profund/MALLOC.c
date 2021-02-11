#include "stdio.h"
#include "conio.h"
#define n 5

typedef struct  {
    int rollno;
    char name[10];
    float per;
}*Student;

/*
*** global functions
*/

Student getStudent(){
    //memory alloction...
    Student stud = (Student) malloc(sizeof(Student) * n);

    //get data
    printf("\n\t Enter %d Student info ", n);
    for(int i = 0; i < n; i++){
        printf("\n\t Enter Rollno     : \t");
        scanf("%d", &stud[i].rollno);
        printf("\n\t Enter Name       : \t");
        scanf("%s", &stud[i].name);
        printf("\n\t Enter Percentage : \t");
        scanf("%f", &stud[i].per);
        printf("\n\t-------------------------------");
    }

    return stud;
};

//display all students info
void dispay(Student stud){
    //display data
    printf("\n\t ---- All Students info --- ");
    for(int i = 0; i < n; i++){
        printf("\n\t Roll no    : %d", (stud + i)->rollno);
        printf("\n\t Name       : %s", stud[i].name);
        printf("\n\t Percentage : %.2f", stud[i].per);
        printf("\n\t-------------------");
    }
}

//main body
int main(){
    dispay(getStudent()); //calling both functions ...
    return 0;
}