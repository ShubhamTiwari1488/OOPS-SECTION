

#include<iostream>
using namespace std;

int area(int side)
{
 return(side*side);
}

int area(int length,int breadth)
{
 return(length*breadth);
}

float area(float radius)
{
 return(3.14*radius*radius);
}

float area(float height,float base)
{
 return(0.5*height*base);
}
 
int main()
{
 int side;
 int length,breadth;
 float radius;
 float height,base;
 
 cout<<"Enter the side of the square"<<endl;
 cin>>side;
 
 cout<<"Enter length and breadth of the rectangle"<<endl;
 cin>>length>>breadth;
 
 cout<<"Enter the radius of the circle"<<endl;
 cin>>radius;
 
 cout<<"Enter the height and base of the triangle"<<endl;
 cin>>height>>base;
 
 cout<<"Area of the square is :: "<<area(side)<<endl;
 cout<<"Area of the rectangle is :: "<<area(length,breadth)<<endl;
 cout<<"Area of the circle is :: "<<area(radius)<<endl;
 cout<<"Area of the triangle is :: "<<area(height,base)<<endl;
 
 return 0;
}
    
 
