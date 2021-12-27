
//ACCEPTING OBJECTS OF TWO DIFFERENT CLASSES

#include<iostream>
using namespace std;

class B;

class A
{
 private:
   int x;
   
   friend void large(A & , B &);          // Friend Function can be declared in private or public
   
 public:   
   void get_data()
   {
    cout<<"\nEnter x : ";
    cin>>x;
   }
   
};

class B
{
 private:
  int y;
  
 public:
  friend void large(A &,B &);        // Friend Function can be declared in private or public
  
  void get_data()
  { 
   cout<<"\nEnter y : ";
   cin>>y;
  }
  
};

void large(A &a,B &b)
{
 if(a.x>b.y)
   cout<<a.x<<" (class A) is greater "<<endl;
   
 else
   cout<<b.y<<" (class B) is greater "<<endl;
   
}

int main()
{
 A a;
 
 a.get_data();
 
 B b;
 
 b.get_data();
 
 large(a,b);
 
 return 0;
}

     
