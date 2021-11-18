//DEMONSTRATING THE ORDER OF CALL OF CONSTRUCTOR AND DESTRUCTOR IN MULTIPLE INHERITENCE

#include<iostream>
using namespace std;

class Parent
{
 public:
 
  Parent()
  {
   cout<<"\nParent constructor called "<<endl;
  }
  
  ~Parent()
  {
   cout<<"\nParent destructor called "<<endl;
  } 
};

class Son:public Parent
{
 public:
  
  Son()
  {
   cout<<"\nChild constructor called "<<endl;
  }
  
  ~Son()
  {
   cout<<"\nChild destructor called "<<endl;
  } 
};

int main()
{
  Son s;
  
  return 0;
}
       
