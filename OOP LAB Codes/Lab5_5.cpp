
//TAKE INPUT AND DISPLAY OUTPUT USING STATIC DATA MEMBERS AND STATIC MEMBER FUNCTIONS

#include <iostream>
using namespace std;

class Demo
{
 private:	
    static int X;
    static int Y;
 public:
    static void Input()
        {
          cout<<"Enter X and Y \n";
          cin>>X>>Y;
        }
          
    static void fun()
	{
		cout <<"Value of X: " << X << endl;
		cout<<"Value of Y: "<<Y<<endl;
	}
};


int Demo :: X =0;
int Demo :: Y=0;

int main()
{
	Demo X;
	X.Input();
	X.fun();
	
	return 0;
}
