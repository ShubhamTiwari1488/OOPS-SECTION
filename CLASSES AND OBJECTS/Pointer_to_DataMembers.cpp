
//PROGRAM TO DEMONSTRATE POINTER TO DATA MEMBERS

#include<iostream>
using namespace std;

class Test
{
  public:
    int x;
    
    void show_data();
    
};

void Test::show_data()
{
 cout<<"\n x = "<<x;
}

int main()
{
 Test t;  //Create object
 
 int Test :: *ptr = &Test :: x;   //Create pointer to member
 
 t.*ptr=20;       //Access member through pointer
 
 t.show_data();
 
 Test *tp = new Test;    //Dynamically allocate memory for object
 
 tp->*ptr=80;    //Using pointer to member
 
 tp->show_data();
 
 cout<<endl;
 
 return 0;
}
 
    


