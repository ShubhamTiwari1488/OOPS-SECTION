
#include<iostream>
using namespace std;

class A
{ 
 int x;
 
 public:
 
 int getA()
 {
  cout<<"\nEnter a ";
  cin>>x;
  
  return x;
 }
 
};

class B
{
 int y;
 
 public:
 
 int getB()
 {
  cout<<"\nEnter b ";
  cin>>y;
  
  return y;
 }
 
};

class GCD:public A,public B
{
 public:
 
 int gcd(int x,int y)
 {
     if(x%y==0)
      return y;
     
     else
     {
      return(gcd(y,x%y));
     } 
 }
 
};

int main()
{
 int var,a,b;
 
 GCD g;
 
 a=g.getA();
 b=g.getB();
 
 var=g.gcd(a,b);
 
 cout<<"\nThe GCD of the two numbers is "<<var<<endl;
 
 return 0;
}
       
