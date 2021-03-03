#include "stdio.h"

float getAvg(int total, float avg){
    return (total/avg);
}

int main(){
    float total = 300, avg = 0;
    float (*fun_ptr)(int, float) = getAvg; //you can remove & also...

    //calling part...
    avg = (*fun_ptr)(total, 5 );
    printf("\n 1st calling avg : \t %.2f",avg);

    avg = (*fun_ptr)(total,  avg );
    printf("\n 2nd calling avg : \t %.2f",avg);
    return 0;
}