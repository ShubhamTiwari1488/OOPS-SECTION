
//WAP TO CREATE A RECTANGLE CLASS AND DATA MEMBERS WIDTH ,AND HEIGHT AND DISPLAY AREA BY USING OBJECT POINTER

#include<iostream>
using namespace std;

class Rectangle
{
 int width;
 int height;
 
 public:
 void Input()
 {
  cout<<"Enter the height and width of the rectangle"<<endl;
  cin>>width>>height;
 }
 
 int Area()
 {
  return(width*height);
 } 
  
 void Show()
 {
  int area;
  
  area=Area();
  
  cout<<"\nArea of the rectangle is : "<<area<<endl;
  
 }
};

int main()
{
 Rectangle r;
 Rectangle *ptr;
 
 ptr=&r;
 
 ptr->Input();
 ptr->Show();
 
 return 0;
}
    
 
