#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int> v;
  
  v.assign(5,10); //Fill the array with 10 five times
  
  v.push_back(15);
  
  int n = v.size();
  
  cout<<v[n-1]<<endl;
  
  v.pop_back();
  
  //Insert 5 at the beginning 
  v.insert(v.begin(),5);
  
  //Remove the first element
  v.erase(v.begin());
  
  //Insert at the beginning
  v.emplace(v.begin(),5);
  
  //Insert 20 at the end
  v.emplace_end(20);
  
  //Erase the vector
  v.clear();
  
  cout<<v.size()<<endl;
  
  v1.swap(v2);  //Swap v1 & v2
  
  return 0;
}
