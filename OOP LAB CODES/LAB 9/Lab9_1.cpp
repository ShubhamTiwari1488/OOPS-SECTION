
#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
 public:
 
 int real;
 int img;
 
 void get()
 {
  cout<<"\nEnter the real and imaginary part ";
  cin>>real>>img;
 }
 
 Complex compare(Complex c,Complex i)
 {
  int mod1,mod2;
  
  mod1=pow(c.real,2)+pow(c.img,2);
  
  mod2=pow(i.real,2)+pow(i.img,2);
  
  if(mod1>mod2)
     return c;
     
  else
     return i;
     
 }
 
 void display()
 {
  cout<<"Real part "<<real<<endl;
  cout<<"Imaginary part "<<img<<endl;
 }
  
};

int main()
{
 Complex c1,c2,c3;
 
 cout<<"For 1st complex number "<<endl;
 c1.get();
 
 cout<<"For 2nd complex number "<<endl;
 c2.get();
 
 c3=c3.compare(c1,c2);
 
 cout<<"\nDisplaying the maximum complex number "<<endl;
 
 c3.display();
 
 return 0;
}

 
 
