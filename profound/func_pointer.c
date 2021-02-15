#include <stdio.h>
int add(int a, int b)
{
    return (a + b);
}

int main()
{
    int (*fun_ptr)(int, int) = add; //you can remove & also...

    printf("addition id %d ",(fun_ptr)(10,12)); // calling function by ptr *** you can also rermove * like this  (*fun_ptr)(10,12)

    return 0;
}