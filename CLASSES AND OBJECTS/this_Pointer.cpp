
// DEMONSTRATING this POINTER

#include<iostream>
using namespace std;

class This
{
 int a;
 int b;
 
 public:
 
  void Set_data(int a,int b)
  {
   this->a=a;
   
   (*this).b=b;
  }
  
  void display();
  
};

void This::display()
{
 cout<<"\nThe value of a is "<<a<<" and value of b is "<<b<<endl;
}

int main()
{
 This t1,t2;
 
 t1.Set_data(32,64);
 
 int x,y;
 
 cout<<"\nEnter the value of x and y ";
 cin>>x>>y;
 
 t2.Set_data(x,y);
 
 t1.display();
 
 t2.display();
 
 return 0;
}
     
