
//CALLING A CONSTRUCTOR , DESTRUCTOR

//NOTE := A CLASS CAN HAVE ONLY ONE DESTRUCTOR

/*_______________
		
		You can call a constructor from main() by writing ::
			object_name.constructor name ( S.Sample())
			
		You can call a destructor from main() by writing ::
			S.Sample :: ~Sample();
			
							__________________________*/
							
							
// NOTE := You can call a Constructor from a Destructor . You can also call a Destructor from a Constructor.


#include<iostream>
using namespace std;

class Sample
{
 private:
   int x;
   
 public:
   Sample(int n)
   {
    x=n;
    cout<<"\nConstructor Called for object with value : "<<x<<endl;
   }
   
   ~Sample()
   {
    cout<<"\nDestructor Called for object with value : "<<x<<endl;
   }  
   
};

int main()
{
 Sample S1(1);
 Sample S2(2);
 Sample S3(3);
 
 return 0;
}
 
