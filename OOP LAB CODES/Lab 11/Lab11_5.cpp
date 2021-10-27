
#include<iostream>
using namespace std;

class Complex
{
public:
int real,img;

void add(Complex c1,Complex c2)
{
int x,y;
x=c1.real+c2.real;
y=c1.img+c2.img;
cout<<x<<"+"<<y<<"i"<<endl;
}

void multiply(Complex c1,Complex c2)
{
int x,y;
x=c1.real*c2.real-c1.img*c2.img;
y=c1.real*c2.img+c1.img*c2.real;
cout<<x<<"+"<<y<<"i"<<endl;
}

Complex operator ++()
 {
 Complex x;
 x.real=++real;
 x.img=++img;
 return x;
 }
 
};

int main ()
{

 Complex a,b,c,d,e;
 cout<<"\nEnter real and imaginary part of first complex number:";
 cin>>a.real>>a.img;
 cout<<"\nEnter real and imaginary part of second complex number:";
 cin>>b.real>>b.img;
 c.add(a,b);
 d.multiply(a,b);
 
 cout<<endl;
 
 return 0;
}
