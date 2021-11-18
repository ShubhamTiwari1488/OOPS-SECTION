

#include<iostream>
#include<cmath>
using namespace std;

class Number
{ 
 public:
 
 int x;
 
 void input()
 {
  cout<<"\nEnter number "<<endl;
  cin>>x;
 }
 
};

class Prime:public Number
{
 
 int Check()
 {
  int flag=1;
  
  for(int i=2;i<=(x/2);i++)
  {
   if(x%i==0)
     flag=0; 
     
  }
  
  return flag;
 }
 
 public:
 
  void display()
  {
   int i;
   
   i=Check();
   
   if(i)
   {
    cout<<"It is a Prime number "<<endl;
   }
   
   else
   {
    cout<<"It is not a Prime number "<<endl;
   }
   
  }
};

class Armstrong:public Number
{
 int Check()
 {
  int num,rem,check=0;
  int flag=0;
  
  num=x;
  
  while(num!=0)
  {
    rem=num%10;
    
    check+=pow(rem,3);
    
    num=num/10;
   }
   
   if(check==x)
   {
    flag=1;
   }
    
   return flag;
  }
  
  public:
  
  void display()
  {
   
    int test;
    
    test=Check();
    
    if(test==1)
     cout<<"\nThe number is armstrong "<<endl;
     
    else 
     cout<<"\nThe number is not armstrong "<<endl;
     
  }
  
};

int main()
{
 class Prime p;
 class Armstrong a;
 
 p.input();
 p.display();
 
 a.input();
 a.display();
 
 return 0;
}
 

      
