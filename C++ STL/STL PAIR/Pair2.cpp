#include<iostream>
#include<utility>
using namespace std;

int main()
{
  pair<int,int> pair1 = {1,2};
  
  int a,b;
  
  tie(a,b) = pair1;
  
  cout<<a<<" "<<b<<endl;
  
  pair<int,int> pair2={3,4};
  
  tie(a,ignore) = pair2;
  
  cout<<a<<" "<<b<<endl;
  
  pair<int,pair<int,char>> pair3{3,{4,'a'}};
  
  int x,y;
  char z;
  
  x=pair3.first;
  
  tie(y,z)=pair3.second;
  
  cout<<x<<" "<<y<<" "<<z<<endl;
} 
