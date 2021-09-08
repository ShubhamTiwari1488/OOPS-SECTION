
#include<iostream>
using namespace std;

class A 
{
  public:
  
  int x,y;
 
  void getdata()
  {
   cout<<"\nEnter the two numbers "<<endl;
   cin>>x>>y;
  }
  
};

class B: public A
{
 public:
 
  void putdata()
  {
   cout<<"\nThe numbers are : "<<x<<" and "<<y<<endl;
  }
};

int main()
{
  B obj;
  
  obj.getdata();
  obj.putdata();
  
  return 0;
}
  
