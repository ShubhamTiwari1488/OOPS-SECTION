#include<iostream>
#include<queue>
using namespace std;

int main()
{ 
 queue<int> qe;
 
 int n;
 int data;
 
 cout<<"\nEnter the number of entries : ";
 cin>>n;
 
 //Enqueue Operation :
 
 for(int i=0;i<n;i++)
 {
  cout<<"\nEnter the data : ";
  cin>>data;
  
  qe.push(data);
 }
 
 cout<<"\nSize of the queue is : "<<qe.size()<<endl;
 
 cout<<"\nFront queue : "<<qe.front()<<endl;
 
 cout<<"\nBack queue : "<<qe.back()<<endl;
 
 cout<<"\n=================================\n";
 
 cout<<"\nDequeue Operation : "<<endl;
 
 cout<<"\n=================================\n";
 
 while(!qe.empty())
 {
  cout<<qe.front()<<" "<<endl;
  
  qe.pop();
 }
 
 
 cout<<endl;
 
 return 0;
}  
