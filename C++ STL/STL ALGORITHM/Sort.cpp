#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int a[]={1,5,8,9,6,7,10,23};
  
  int asize=sizeof(a)/sizeof(a[0]);
  
  sort(a,a+asize);
  
  return 0;
}
