
// RETURNING OBJECTS

#include<iostream>
using namespace std;

class Complex
{
 int real;
 int img;
 
 public:
  
  Complex()
  {
   real=0;
   img=0;
  }
  
  void input();
  
  Complex &Compare(Complex &c2);
  
  void display();
  
};

int main()
{
 Complex c1,c2,c3;
 
 c1.input();
 
 c2.input();
 
 c3=c2.Compare(c1);
 
 c3.display();
 
 return 0;
}
 
void Complex::input()
{
 cout<<"\nEnter the real part ";
 cin>>real;
 
 cout<<"\nEnter the imaginary part ";
 cin>>img;
}

Complex &Complex::Compare(Complex &c2)
{
 if(c2.real>real)
 {
  return c2;
 }
 
 else if(real==c2.real)
 {
  if(img<c2.img)
   return c2;
   
  else 
   return *this;
   
 }
 
 else
  return *this;
}    

void Complex::display()
{
 cout<<"The Complex Number is :: ";
 
 cout<<"Real part : "<<real<<" and imaginary part : "<<img<<endl;
} 
