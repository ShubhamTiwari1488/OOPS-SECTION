
//SWAPPING NUMBERS USING FRIEND CLASSES

#include<iostream>
using namespace std;

class B;   //Forward declaration of class B

class A
{
 private:
 
  friend class B;   //Class B is a friend of class A
  
  int x;
  
 public:
  
  void get_data()
  {
   cout<<"\nEnter x : ";
   cin>>x;
  }
  
  void show_data()
  {
   cout<<"\nA's x = "<<x;
  }
  
};

class B
{
 private:
 
  int y;
  
 public:
  
  void get_data()
  {
   cout<<"\nEnter y : ";
   cin>>y;
  }
  
  void show_data()
  {
     cout<<"\nB's y = "<<y<<endl;
  }
  
  void swap(A &a)
  {
   int temp=a.x;
   
   a.x=y;
   
   y=temp;
  }
};

int main()
{
 A a;
 B b;
 
 a.get_data();
 b.get_data();
 
 a.show_data();
 b.show_data();
 
 b.swap(a);
 
 cout<<"\nAfter swapping ";
 
 a.show_data();
 b.show_data();
 
 return 0;
}
          
