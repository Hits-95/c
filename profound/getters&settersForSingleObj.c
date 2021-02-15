#include <stdio.h>
#include <stdlib.h>
#include "string.h"

//student stucture declare here....
struct Student {
    int rollno;
    char name[10];
    char collage[10];
}stud;

/*
*** global functions ....
*/

//getters
int getRollno(){
    return stud.rollno;
}

char *getName(){
    return stud.name;
}

char *getCollage(){
    return stud.collage;
}

//setters
void setRollno(int r){
    stud.rollno = r;
}

void setName(char n[]){
    strcpy(stud.name, n);
}

void setCollage(char c[]){
    strcpy(stud.collage, c);
}

//insert student info here....
void insertStudent(){
    int rollno;
    char name[10], collage[10];
    printf("\n Enter Rollno  : \t");
    scanf("%d", &rollno);
    printf("\n Enter Name    : \t");
    scanf("%s", &name);
    printf("\n Enter Collage : \t");
    scanf("%s", &collage);

    //calling setters here....set values in objects...
    setRollno(rollno);
    setName(name);
    setCollage(collage);
}
//display student info here....
void displayStudent(){
    //calling getters here...
    printf("\n  >>> Student info <<<");
    printf("\n-------------------------");
    printf("\nRoll No : %d", getRollno());
    printf("\nName    : %s", getName());
    printf("\nCollege : %s\n", getCollage());
}

//int main function body
int main()
{
    insertStudent();
    displayStudent();
    return 0;
}