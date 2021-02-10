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
    char *name;
    char *college;
    Dept dept ;

}Student;


/*
*** Global functions ...
*/
int getLimit(){
    int limit;
    printf("\nEnter Limit : \t");
    scanf("%d", &limit);
    return limit;
}

Student getStudent(int limit){
    Student std;
    Dept dept;

    printf("\nEnter Roll no : \t");
    scanf("%d", &std.rollno);
    printf("\nEnter Name    : \t");
    scanf("%d", &std.name);
    printf("\nEnter College : \t");
    scanf("%d", &std.college);
}


//main body
int main(){
    return 0;
}