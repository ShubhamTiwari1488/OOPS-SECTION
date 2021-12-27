
//POINTER TO A MEMBER FUNCTIONS

#include<iostream>
using namespace std;

class Test
{
 public:
  
  void show_msg();

};

void Test :: show_msg()
{
 cout<<"\nHello World !!!"<<endl;
}   

int main()
{
 void(Test :: *fp)(void);
 
 fp = &Test :: show_msg;
 
 Test t;
 
 (t.*fp)();
 
 return 0;
}
 
