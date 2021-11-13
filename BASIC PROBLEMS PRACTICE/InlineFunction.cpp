
//INLINE FUNCTION IN C++

#include<iostream>
using namespace std;

inline int sqrt(int x)
{
 return (x*x);
}

int main()
{
 int num;
 
 cout<<"\nEnter the num ";
 cin>>num;
 
 cout<<"\nSquare of "<<num<<" = "<<sqrt(num)<<endl;
 
 return 0;
}
  
