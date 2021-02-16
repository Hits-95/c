#include <stdio.h>
#define size 1
struct{
    int age;
    char name[10], city[10];
} stud[size];

//glo
FILE *fp;


/*
**** console IO oprations
*/

//read from console
void read_user(){
    for(int i = 0; i < size ; i++){
        printf("\n\t Enter Name ");
        scanf("%s", &stud[i].name);
        //printf("%s", name[i]);
        printf("\n\t Enter City ");
        scanf("%s", &stud[i].city);
        printf("\n\t Enter age ");
        scanf("%d", &stud[i].age);
        printf("\n\t ----------------");
    }
}

//display on console
void display_user(){
    printf("\n\t All Records");
    for(int i = 0; i < size ; i++){
        printf("\n\t Name : \t%s", stud[i].name);
        printf("\n\t City : \t%s", stud[i].city);
        printf("\n\t Age  : \t%d", stud[i].age);
        printf("\n\t ----- *** -----");
    }
}

/*
**** File IO oprations
*/

void insetIntoFile(){
    for(int i = 0; i < size; i++)
        fprintf(fp,"%d%s%s",stud[i].age ,stud[i].name, stud[i].city);
}

void readIntoFile(){
    int i = 0;
    fscanf(fp,"%d%s%s",&stud[i].age, stud[i].name, stud[i].city);
    printf("\n data : %d\t%s\t%s",stud[i].age, stud[i].name, stud[i].city);
}

int main(){

    read_user();
    display_user();

    //file opration
    fp = fopen("io_file.txt","w+");
    if(fp){
        //insetIntoFile();
        readIntoFile();

    }else{
        printf("\nCan't open file or file doesn't exist.");
        exit(0);
    }
    fclose(fp);
    return 0;
}
