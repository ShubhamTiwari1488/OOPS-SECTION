
#include<iostream>
using namespace std;

int main()
{
 int age;
 
 cout<<"\nEnter age ";
 
 cin>>age;
 
 try
 {
  if(age>=1 && age<=100)
  {
   cout<<"\nCorrect age\n";
  }
  
  else
  {
   throw age;
  }
  
 }
  
 catch(int age)
 {
  cout<<"\nInvalid age\n";
 }
 
 cout<<endl;
 
 return 0;
}
     
