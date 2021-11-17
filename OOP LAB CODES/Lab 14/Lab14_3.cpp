
#include<iostream>
using namespace std;

void check(int num)
{
 throw num;
}

int main()
{
 int num;
 
 cout<<"\nEnter the num ";
 
 cin>>num;
 
 try
 {
  check(num);
 }
 
 catch(int i)
 {
  cout<<"\nThe number is either positive or negative or zero\n";
 }
 
 return 0;
}
 
    
