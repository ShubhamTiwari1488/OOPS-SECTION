#include<iostream>
using namespace std;

class Test
{
  int value;
  
  public:
   Test(int v = 0) {value = v;}
   /* int getValue() 
   {
    return value;
   }
   */
  
  int getValue() const
  {
     return value;
  }  
};

int main() {
    const Test t;
    /* cout << t.getValue();     // NON-CONSTANT FUNCTION CAN ONLY BE CALLED BY NON-CONSTANT OBJECTS....HENCE IT WILL SHOW AN ERROR  */
  
    cout<<t.getValue();         // NOW IT WILL EXECUTE
  
    return 0;
}
