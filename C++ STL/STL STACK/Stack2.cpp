#include<iostream>
#include<stack>
using namespace std;

int main()
{
 stack<int> stk1,stk2;
 
 int n1,n2;
 int data1,data2;
 
 cout<<"\nEnter the number of entries : ";
 cin>>n1;
 
 for(int i=0;i<n1;i++)
 {
  cout<<"\nEnter the data : ";
  cin>>data1;
  
  stk1.push(data1);
 }
 
 cout<<"\nEnter the number of entries for 2nd : ";
 cin>>n2;
 
 for(int i=0;i<n2;i++)
 {
  cout<<"\nEnter the data : ";
  cin>>data2;
  
  stk2.push(data2);
 }
 
 cout<<"\nTop elements of stk1 and stk2 respectively : "<<stk1.top()<<" "<<stk2.top()<<endl;
 
 //Swapping
 stk1.swap(stk2);
 
 cout<<"\nAfter swapping top of stk1 and stk2 : "<<stk1.top()<<" "<<stk2.top()<<endl;
 
 return 0;
} 
    
