#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> g1;
  
  for(int i=1;i<=10;i++)
    g1.push_back(i*10);
  
  cout<<g1[2]<<endl;
  
  cout<<g1.at(2)<<endl;
  
  cout<<g1.front()<<endl;
  
  cout<<g1.back()<<endl;
  
  int *pos = g1.data(); //Pointer to first element
  
  cout<<*pos<<endl;
  
  return 0;
}
