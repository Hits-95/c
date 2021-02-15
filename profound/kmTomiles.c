//get km input & convert it into mils
#include "stdio.h"
int main() {
      float km =0.0, ml = 0.0;
      //get input from user
      printf("Enter km/hr :\t");
      scanf("%f",&km);
      printf("\n %.2f km/hr => %.2f mile/hr ",km, (km*0.621371));
      getch();
      return 0;
}

