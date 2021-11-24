
#include <iostream>
using namespace std;

template<class t1,class t2>
void sum(t1 a,t2 b) // defining template function
{
    cout<<"Sum= "<<a+b<<endl;
}

int main()
{
    int a;
    float x;
    cout<<"\nEnter an integer data: ";
    cin>>a;
    cout<<"\nEnter a float data: ";
    cin>>x;
    
    cout<<"\nAdding two of them we get ";
    
    sum(a,x);
    return 0;
}
