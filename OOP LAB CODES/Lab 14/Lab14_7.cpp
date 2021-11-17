
#include<iostream>
using namespace std;

class Father
{

 public:
 
 char fname[30];
 int fage;
 
 void input()
 {
  cout<<"\nEnter father name and age ";
  cin>>fname>>fage;
 }
 
};

class Son : public Father
{
 char sname[30];
 int sage;
 
 public:
 
 void input2()
 {
  cout<<"\nEnter son name and age ";
  cin>>sname>>sage;
 }
 
 void check()
 {
  if(sage>fage)
  	throw sage;
  	
  else
  	cout<<"\nAge is valid\n";
  	
  }
};  

int main()
{
 Son s;
 
 s.input();
 s.input2();
 
 try
 {
  s.check();
 }
 
 catch(int i)
 {
  cout<<"\nSon age is greater than father\n";
 }  
 
 return 0;
}
  
