
#include<iostream>
using namespace std;

int area(int,int);
float area(float);
double area(double,double);
int main()
{
       
    cout<<"\nArea of rectangle is "<<area(4,6);
    cout<<"\nArea of circle is "<<area(7.5);
    cout<<"\nArea of triangle is "<<area(6.1,3.5);
    
    cout<<"\n";
    
    return 0;
}

int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}
double area(double bs,double ht)
{
   return((bs*ht)/2);
}
