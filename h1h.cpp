#include<iostream>
using namespace std;
int Greater(int,int);
int main()
{
 int x,y;
 cout<<"Enter a two nos :- ";
 cin>>x>>y;
 cout<<"\n The LARGE NO is :- ";
 if(Greater(x,y))
	cout<<x;
 else 
	cout<<y;
 cin.get();
 return(0);
}
int Greater(int x,int y)
{
 return(x>y);
}
