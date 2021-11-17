
#include<iostream>
using namespace std;

int main()
{
 int num;
 
 cout<<"\nEnter the num ";
 cin>>num;
 
 try
 {
  if(num==0)
   throw num;
   
  else if(num>=0)
    throw num;
    
  else
    throw num;
  }
  
  catch(int i)
  {
   cout<<"\nCheck the number is either positive or negative or zero\n";
  }
  
  return 0;
}
      
