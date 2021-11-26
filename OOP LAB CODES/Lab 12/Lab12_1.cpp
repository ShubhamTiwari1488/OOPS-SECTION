#include <iostream>
using namespace std;


class Father
{
  public:
      void activity()
      {
          cout<<"Father activity is to go office"<<endl;
      }
} ;
class Son: public Father
{
    public:
    void activity()
    {
        cout<<"The Son task is go to school"<<endl;
    }
    
};




int main()
{
 
   Father *father = new Father;
   Son *student = new Son;
   
   student->activity();
   
    return 0;
}

