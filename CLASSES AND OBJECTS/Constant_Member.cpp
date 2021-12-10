
// DEMONSTRATING CONSTANT MEMBERS FUNCTIONS

#include<iostream>
using namespace std;

class Constant
{
 int value;
 
 public:
  
  Constant(int x);
  
  Constant();
  
  void Input();

  void Display() const;
  
  void Show();
  
};

Constant::Constant(int x)
{
 value = x;
}

Constant::Constant()
{
 value=44;
}
 
void Constant::Input()
{
 cout<<"\nEnter the value ";
 cin>>value;
}
 
void Constant::Display() const
{
 cout<<"We are in constant member function and value is :: "<<value<<endl;
 
 /*__value = value + 1;        THIS WILL END UP SHOWING AN ERROR!!!!  ________*/
}

void Constant::Show()
{
 cout<<"\nValue is "<<value<<endl;
}

 
int main()
{
 Constant c1(20);
 Constant c2;
 
 c1.Display();
 
 c2.Input();
 c2.Show();  
 
 return 0;
}
 
