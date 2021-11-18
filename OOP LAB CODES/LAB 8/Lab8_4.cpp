
#include<iostream>
using namespace std;

class A
{
 public:
 
 int x;
 
 void A_input()
 {
  cout<<"\nEnter value"<<endl;
  cin>>x;
 }
 
};

class B
{
 public:
 
 int y;
 
 void B_input()
 {
  cout<<"\nEnter value"<<endl;
  cin>>y;
 }
 
};

class C:public A,public B
{
 public:
 
 void check()
 {
  if(x>y)
   cout<<"x is greater "<<endl;
   
  else if(x<y)
    cout<<"y is greater "<<endl;
    
  else
    cout<<"Both are same "<<endl;
    
 }
 
};       

int main()
{
 class C c;
 
 c.A_input();
 c.B_input();
 
 c.check();
 
 return 0;
}
      
