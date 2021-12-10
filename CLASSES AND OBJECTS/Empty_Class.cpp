
// EMPTY CLASS

#include<iostream>
using namespace std;

class Empty
{

};

int main()
{
 Empty e;
 
 cout<<"\nSize of empty class = "<<sizeof(Empty);
 
 cout<<"\nSize of empty class object = "<<sizeof(e);
 
 cout<<"\nAddress of empty class object = "<<hex<<&e;
 
 cout<<endl;
 
 return 0;
}
 
