
//COPY CONSTRUCTOR

#include<iostream>
using namespace std;

class Numbers
{
 private:
   int x;
   
 public:
   Numbers(Numbers &N)	//Copy Constructor
   {
    x=N.x;
   }
   
   Numbers(int i)
   {
    x=i;
   }
   
   void show_data()
   {
    cout<<"\n x = "<<x<<endl;
   }
   
};

int main()
{
 Numbers N1(20);	//PARAMETERIZED CONSTRUCTOR CALLED
 
 Numbers N2(N1);	//COPY CONSTRUCTOR IS CALLED 
 
 N2.show_data();
 
 Numbers N3=N1;		//COPY CONSTRUCTOR IS CALLED
 
 N3.show_data();
 
 return 0;
}
 
 
    
