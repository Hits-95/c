//get min input & convert it into hr & min
#include "stdio.h"
int main() {
     int hr, min, newmin;
      //get input from user
      printf("Enter Minutes :\t");
      scanf("%d",&min);
      hr = min/60;
      newmin = min%60;
      printf("\n Result :: %d Minutes =>  %d Hours & %d Minutes ", min, hr, newmin);
      getch();
      return 0;
}

