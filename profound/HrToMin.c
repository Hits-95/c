//get hr & min input & convert it into min
#include "stdio.h"
int main() {
     int hr, min;
      //get input from user
      printf("Enter Hours :\t");
      scanf("%d",&hr);
      printf("Enter Minutes :\t");
      scanf("%d",&min);
      printf("\n Result :: %d Hours and %d Minutes => %d Minutes ", hr, min, (hr*60)+min);
      getch();
      return 0;
}

