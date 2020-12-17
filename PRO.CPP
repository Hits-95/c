#include<iostream.h>
#include<conio.h>

struct pro
{
private :

int pno;
char pname[20];
int qty,rate ;
}
public :
void input()
{
cout<<"Enter pno,pname ,dty ,rate ";
cin>>pno>>pname>>qty>>rate;
}

void display()
{
int amt;
float dis;
amt= qty * rate;
dis= amt * 0.1;
cout<<amt is "<<amount <<""\n";
cout <<dis is "<<discount <<""\n";
}
getch();
}







