#include "stdio.h"
#include "conio.h"
#include "string.h"


typedef struct Student {
      //variables
      int rollno;
      char name[10];
      char college[10];
}Student;

//getters
int getRollno(Student std){
      return std.rollno;
}
char *getName(Student std){
      return std.name;
}


//setters
void setRollno(Student std, int r){
      std.rollno = r;
}

void setName(Student std, char n[]){
      strcpy(std.name, n);
}


// global functions
int getLimit(){
      int limit;
      printf("\nEnter limit : \t");
      scanf("%d",&limit);
      return limit;
}
int getChoice(){
      int ch;
      printf("\nEnter choice : \t");
      scanf("%d",&ch);
      return ch;
}
//insert student info here....
void insertStudent(Student std){
    int rollno;
    char name[10], college[10];

    printf("\n Enter Rollno  : \t");
    scanf("%d", &rollno);
    printf("\n Enter Name    : \t");
    scanf("%s", &name);
    printf("\n Enter College : \t");
    scanf("%s", &college);

    //calling setters here....set values in objects...
    setRollno(std, rollno);
    setName(std, name);
    //setCollege(std, collage);
}
//display student info here....
void displayStudent(Student std){
    //calling getters here...
    printf("\n  >>> Student info <<<");
    printf("\n-------------------------");
    printf("\nRoll No : %d", getRollno(std));
    printf("\nName    : %s", getName(std));
    //printf("\nCollege : %s\n", getCollage(std));
}
//main body
int main() {
      int ch, limit = 0, i;


      do{
            printf("\n\t ***>>> MENU <<<***");
            printf("\n\t 1 : Limit");
            printf("\n\t 2 : Insert (%d Students)",limit);
            printf("\n\t 3 : Diplay (%d Studensts)",limit);

            ch = getChoice();
            switch(ch){
                  case 1 :
                        limit = getLimit();
                        Student std[limit];
                  break;
                  case 2 :
                        for(i = 0; i < limit; i++)
                              insertStudent(std[i]);
                  break;


            }
      }while(ch != 4);
      return 0;
}
