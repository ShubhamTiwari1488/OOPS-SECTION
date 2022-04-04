//We use Binary Search here

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int a[]={5,1,8,9,11,10,29,32};
  
  int asize=sizeof(a)/sizeof(a[0]);
  
  if(binary_search(a,a+asize,8))
    cout<<"Found";
  
  else
    cout<<"No";
  
  return 0;
} 
