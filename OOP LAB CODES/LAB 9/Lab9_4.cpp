
#include<iostream>
using namespace std;

int &compare(int &a,int &b)
{
 if(a>b){
   a=-1;
   
   return a;
   
 }
 
 else
 {
  b=-1;
  
  return b;
 }
 
}

int main()
{
 int x,y;
 
 cout<<"\nEnter the value of x ";
 cin>>x;
 
 cout<<"\nEnter the value of y ";
 cin>>y;
 
 int &var=compare(x,y);
 
 cout<<"\n-1 is assigned to the variable with higher value . Value of var is "<<var<<endl;
 cout<<"\nValue of x is : "<<x<<" and value of y is : "<<y<<endl;
 
 return 0;
}
   
