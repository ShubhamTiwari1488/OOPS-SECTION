
#include<iostream>
using namespace std;

void assign(int *a,int *b)
{
 (*a>*b?*a=-1:*b=-1);
}

int main()
{
 int a,b;
 
 cout<<"\nEnter a and b "<<endl;
 cin>>a>>b;
 
 assign(&a,&b);
 
 cout<<"Value of a is : "<<a<<"\nValue of b is : "<<b<<endl;
 
 return 0;
}
  
