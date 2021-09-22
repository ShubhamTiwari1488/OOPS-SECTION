
//DEMONSTRATING GLOBAL ,LOCAL AND NESTED VARIABLE

#include<iostream>
using namespace std;

int x=20;

int main()
{
 int x=10;
 
 cout<<"\nGlobal variable is : "<<::x<<endl;
 cout<<"\nLocal variable inside main is : "<<x<<endl;
 
 {
  int x=5;
  
  cout<<"\nVariable inside nested scope is : "<<x<<endl;
  
 }
 
 return 0;
}
  
