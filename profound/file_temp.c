 #include<stdio.h>

void main(){
    FILE *fp;
    int roll;
    char name[25];
    float marks;
    char ch;

    fp = fopen("io_file.txt","w+");            //Statement   1

    if(fp == NULL){
        printf("\nCan't open file or file doesn't exist.");
        exit(0);
    }
     for(int i = 0; i < 2 ; i++){
        printf("\nEnter Roll : ");
        scanf("%d",&roll);

        printf("\nEnter Name : ");
        scanf("%s",name);

        printf("\nEnter Marks : ");
        scanf("%f",&marks);

        fprintf(fp,"%d%s%f",roll,name,marks);
     }

    printf("\nData written successfully...");
    fseek( fp, 7, SEEK_SET );
    for(int i = 0; i < 2 ; i++){
        fscanf(fp,"%d%s%f",&roll,name,&marks);        //Statement   2
        printf("\n%d\t%s\t%f",roll,name,marks);
    }

    fclose(fp);
    return 0;
}
