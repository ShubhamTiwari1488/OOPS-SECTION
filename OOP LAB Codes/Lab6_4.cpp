
#include<iostream>
#include<cstring>
using namespace std;

class Name
{
 char *name;
 
 public :
 
 Name()
 {
  name=new char[50];
 }
 
 void Input()
 {
  cout<<"Enter name : "<<endl;
  cin>>name;
 }
 
 void Display()
 {
  cout<<"Name is : "<<name<<endl;
 }
 
 ~Name()
 {
  delete name;
 }
};

int main()
{
 Name n;
 
 n.Input();
 n.Display();
 
 return 0;
}
 
