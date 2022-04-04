//Using stack emplace() in C++ STL

#include<iostream>
#include<stack>
using namespace std;

int main()
{
 stack<int> stk;
 
 int n;
 int num;
 
 cout<<"\nEnter the number of entries you want to make : ";
 cin>>n;
 
 for(int i=0;i<n;i++)
 {
  cout<<"\nEnter the data ";
  cin>>num;
  
  stk.emplace(num);
 }
 
 
 cout<<"\nThe top element of the stack is : "<<stk.top()<<endl;
 
 cout<<"Performing the Popping Operation : ";
 
 while(!stk.empty())
 {
  cout<<stk.top()<<" ";
  stk.pop();
 }
 
 cout<<endl;
 
 return 0;
}    
