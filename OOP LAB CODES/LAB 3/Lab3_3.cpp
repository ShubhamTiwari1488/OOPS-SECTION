

#include<iostream>
using namespace std;

void swap1(int a,int b)
{
        int c;
        c=a;
        a=b;
        b=c;
        cout<<"\nAfter Swapping,Value of: "<<endl<<"A:"<<a<<"\tB:"<<b<<"\n";
}

void swap2(int *p,int *q)
{
        int c;
        c=*p;
        *p=*q;
        *q=c;
        cout<<"\nAfter Swapping,Value of: "<<endl<<"A:"<<*p<<"\tB:"<<*q<<"\n";
}

void swap3(int &m, int &n)
{
    int temp= m;
    m=n;
    n=temp;
    cout<<"\nAfter Swapping,Value of: "<<endl<<"A:"<<m<<"\tB:"<<n<<"\n";
}

int main()
{
        int a,b,ch;
        cout<<"\nEnter Value Of A: ";
        cin>>a;
        cout<<"\nEnter Value of B: ";
        cin>>b;
        cout<<"\nCall by value:";
        swap1(a,b);
        cout<<endl;
        cout<<"Call by reference: ";
        swap3(a,b);
        cout<<endl;
        cout<<"Call by address: ";
        swap2(&a,&b);

        return 0;

}

