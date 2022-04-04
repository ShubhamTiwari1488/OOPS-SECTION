#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int> g1;
  
  for(int i=1;i<=5;i++)
    g1.push_back(i);
  
  cout<<"Size : "<<g1.size();
  
  cout<<"Capacity : "<<g1.capacity();
  
  cout<<"\nMax_Size : "<<g1.max_size();
  
  //Resize the vector to 4
  g1.resize(4);
  
  cout<<"Size : "<<g1.size();
  
  if(g1.empty()==false)
    cout<<"Vector is not empty";
  
  else
    cout<<"Vector is empty";
  
  //Shrink the vector
  
  g1.shrink_to_fit();
  
  cout<<"Vector elements are : ";
  
  for(auto it = g1.begin();it!=g1.end();it++)
    cout<<*it<<" ";
  
  return 0;
} 
