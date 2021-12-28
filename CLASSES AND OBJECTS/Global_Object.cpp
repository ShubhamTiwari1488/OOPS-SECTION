
//GLOBAL OBJECT

#include<iostream>
using namespace std;

class Sample
{
 public:
  Sample()
  {
   cout<<"\n IN CONSTRUCTOR \n";
  }
  
  ~Sample()
  {
   cout<<"\n IN DESTRUCTOR \n";
  }
  
};

Sample s;

int main()
{
 cout<<"\n IN MAIN \n";
 
 return 0;
}
  
