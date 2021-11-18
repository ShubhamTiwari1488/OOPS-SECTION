
#include<iostream>
using namespace std;

int g=20;

int main()
{
 int g=10;
 
 if(1)
 {
  int g=5;
  cout<<"Variable in nested scope "<<g<<endl;
 }
  
 cout<<"Local Variable "<<g<<endl;
 cout<<"Global Variable "<<::g<<endl;
 
 return 0;
} 
 
