
#include<iostream>
using namespace std;

class Number
{
 public:
  
  int x,y;
  
  void getdata()
  {
   cout<<"\nEnter the two numbers "<<endl;
   cin>>x>>y;
  }
  
};

class Calculate : public Number
{
 public:
 
  int gcd(int a,int b)
  {
   
   if(a%b==0)
     return y;
     
   else
     return gcd(b,a%b);
  }
  
  void display()
  {
   int g;
   
   g=(x>y?gcd(x,y):gcd(y,x));
   
   cout<<"\nThe GCD of the number is "<<g<<endl;
  }
};

int main()
{
 Calculate c;
 
 c.getdata();
 c.display();
 
 return 0;
}   
           
