
//DUMMY CONSTRUCTOR ( DO NOTHING CONSTRUCTOR)

#include<iostream>
using namespace std;

class Numbers
{
 private:
   int x;
   
 public:
   
   void show_data()
   {
    cout<<"\n x = "<<x<<endl;
   }
   
};

int main()
{
 Numbers N;    //DUMMY CONSTRUCTOR IS CALLED
 
 N.show_data();
 
 return 0;
}
   
