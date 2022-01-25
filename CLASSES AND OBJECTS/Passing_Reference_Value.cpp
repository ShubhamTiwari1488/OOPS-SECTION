
//DEMONSTRATING PASSING BY REFERENCE AND VALUE IN C++

#include<iostream>
using namespace std;

class A
{
 int num1;
 int num2;
 
 public:
 
 void swap_ref(A &);
 void swap_val(A );
 
 void input()
 { 
  cout<<"\nEnter the value ";
  cin>>num1>>num2;
 }
  
 void show()
 {
  cout<<"\nThe value of num1 is "<<num1<<" and num2 is "<<num2<<endl;
 }
 
};

int main()
{

 A a;
 A b;
 
 a.input();
 
 a.show();
 
 cout<<"\nSwapping by reference\n";
 
 b.swap_ref(a);
 
 a.show();
 
 cout<<"\nSwapping by value\n";
 
 b.swap_val(a);
 
 a.show();
 
 return 0;
}

void A::swap_ref(A &a)
{
 int temp;
 
 temp=a.num1;
 
 a.num1=a.num2;
 
 a.num2=temp;
}

void A::swap_val(A a)
{
 int temp;
 
 temp=a.num1;
 a.num1=a.num2;
 a.num2=temp;
}
  
   
