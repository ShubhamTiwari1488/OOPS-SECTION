#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int> g1;
  
  for(int i=1;i<=5;i++)
    g1.push_back(i);
  
  for(auto i= g1.begin();i!=g1.end();i++)
    cout<<*i<<" ";
  
  for(auto i=g1.cbegin();i!=g1.cend();i++)
    cout<<*i<<" ";
  
  for(auto ir = g1.rbegin();ir!=g1.rend();ir++)
    cout<<*ir<<" ";
  
  return 0;
}
