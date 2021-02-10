#include "stdio.h"
#include "conio.h"
#include "string.h"


typedef struct Student {
      //variables
      int rollno;
      char name[10];
      char department[10];
      char college[10];
}Student;

//getters
int getRollno(Student std){
      return std.rollno;
}
char *getName(Student std){
      return std.name;
}
char *getDepartment(Student std){
      return std.department;
}
char *getCollege(Student std){
      return std.college;
}

//setters
void setRollno(Student std, int rollno){
      std.rollno = rollno;
}
void setName(Student std, char name[]){
      strcpy(std.name, name);
}
void setDepartment(Student std, char department[]){
      strcpy(std.department, department);
}
void setCollege(Student std, char college){
      strcpy(std.college, college);
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
Student insetStudent(Student std){
      printf("\nEnter Rollno : \t");
      scanf("%d",&std.rollno);
      return std;

}
//main body
int main() {
      int ch, limit = 0;
      do{
            printf("\n\t ***>>> MENU <<<***");
            printf("\n\t 1 : Limit");
            printf("\n\t 2 : Insert (%d Students)",limit);
            printf("\n\t 3 : Diplay (%d Studensts)",limit);

            getChoice();
            switch(ch){
                  case 1 :
                        limit = getLimit();
                  break;
                  case 2 :

                  break;
                  case 3 :

                  break;
                  case 4 :

                  break;
                  default : printf("Invalide choice");
            }
      }while(ch != 4);
      return 0;
}
