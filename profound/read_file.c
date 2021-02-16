  #include<stdio.h>

       void main()
       {
              FILE *fp;
              char ch;
              int roll;
              char *name;
              float marks;

              fp = fopen("file.txt","r");            //Statement   1

              if(fp == NULL)
              {
                     printf("\nCan't open file or file doesn't exist.");
                     exit(0);
              }

              printf("\nData in file...\n");

              while((fscanf(fp,"%d%s%f",&roll,name,&marks))!=EOF)           //Statement   2
                  printf("\n%d\t%s\t%f",roll,name,marks);

              fclose(fp);
       }