
#include<iostream>
using namespace std;

int main()
{
 int a,b;
 
 cout<<"\nEnter the values of a and b ";
 cin>>a>>b;
 
 try
 {
  if(b!=0)
  {
   cout<<"Dividing a by b we get "<<(a/b)<<endl;
  }
  
  else
  {
   throw (b);
  }
  
 }
 
 catch(int i)
 {
  cout<<"Do not enter value of b as "<<i<<endl;
 }
 
 return 0;
}

     
