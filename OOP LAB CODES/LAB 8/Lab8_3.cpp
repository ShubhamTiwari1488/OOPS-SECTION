
#include<iostream>
using namespace std;

class Rectangle
{
 int x,y;
 
 int area()
 {
  int ar;
  
  ar=x*y;
  
  return ar;
 }
  
 public:
 
  void getdata()
  {
   cout<<"\nEnter values "<<endl;
   cin>>x>>y;
  }
  
  void show()
  {
    
    cout<<"\nThe area is : "<<area()<<endl;
  }
  
};

class Triangle
{
 int x,y;
 
 float area()
 {
  return(0.5*x*y);
  
 }
 
 public:
 
 void getdata()
 {
  cout<<"\nEnter values"<<endl;
  cin>>x>>y;
 }
 
 void display()
 {
  cout<<"\nThe area is "<<area()<<endl;      
 }
};

class Area: public Rectangle,public Triangle
{

};

int main()
{
 class Rectangle r;
 class Triangle t;
 
 r.getdata();
 r.show();
 
 t.getdata();
 t.display();
 
 return 0;
}

  
