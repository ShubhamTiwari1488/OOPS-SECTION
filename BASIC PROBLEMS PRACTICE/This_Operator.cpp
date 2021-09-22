
//USING THIS OPERATOR IN CLASS AND OBJECT IN C++

#include<iostream>
using namespace std;

class Test
{
 int x;
 
 public:
 
 Test(int x)
 {
  this->x=x;
 }
 
 void display()
 {
  cout<<"The value of x is : "<<x<<endl;
 }
 
};
   
int main()
{
 
 Test t1(5),t2(15);
 
 t1.display();
 t2.display();
 
 return 0;
}

 
