
#include<iostream>
using namespace std;

class Rectangle
{
 public:
  
  int width;
  int height;
  
  void getdata()
  {
   cout<<"\nEnter the width and height of the rectangle "<<endl;
   cin>>width>>height;
  }
  
};

class Area : public Rectangle
{
 public:
  
  int area()
  {
   int area;
   
   area=height*width;
   
   return area;
  }
  
  void putdata()
  {
   
   cout<<"\nThe area of the rectangle is : "<<area()<<endl;
  }
  
};

int main()
{
 Area a;
 
 a.getdata();
 a.putdata();
 
 return 0;
}
     
