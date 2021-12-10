
#include<iostream>
using namespace std;

class One
{
 private:
  int num;
  
 public:
  void set(int i)
  {
   num=i;
  }
  
  int get()
  {
   return num;
  }
  
};

class Two
{
 public:
  One o;
  
  void show()
  {
   cout<<"\nNumber = "<<o.get()<<endl;
  }
  
};

int main()
{
 Two t;
 
 t.o.set(100);
 
 t.show();
 
 return 0;
}
    
